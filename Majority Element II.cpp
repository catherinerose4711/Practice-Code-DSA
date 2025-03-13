class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
         int n= nums.size();
        unordered_map<int,int>map;
vector<int>ans;
        for(auto mp :nums){
            map[mp]++;
        }

        for(auto entry : map){
            if(entry.second>n/3){
             ans.push_back(entry.first);
            }
        }
        return ans;
    }
};
