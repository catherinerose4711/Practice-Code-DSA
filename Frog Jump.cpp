class Solution {
public:
   int min_ans(vector<int>& arr,int index,vector<int>& memo,){
       
       if(index == arr.size()-1) return 0;
       
       if(memo[index] != -1)return memo[index];
       
       int case1 = INT_MAX;
       int case2 = INT_MAX;
       
       if(index+1 < arr.size()){
          case1 = min_ans(arr, index + 1, memo) + abs(arr[index] - arr[index + 1]);
       }
       if(index+2 < arr.size()){
          case2 = min_ans(arr, index+2, memo) + abs(arr[index] - arr[index+2]);
       }
       
       memo[index]=min(case1,case2);
       return memo[index];
   }
   
  public:
    int minCost(vector<int>& height) {
        
        vector<int> memo(height.size(), -1);
        return min_ans(height,0,memo);
        
    }
};


int main() {
    string str;
    getline(cin, str);
    int t = stoi(str);
    while (t--) {
        getline(cin, str);
        stringstream ss(str);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution ob;
        cout << ob.minCost(arr) << endl;
        cout << "~" << endl;
    }

    return 0;
}
