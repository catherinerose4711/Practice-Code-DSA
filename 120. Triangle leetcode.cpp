class Solution {
public:
    int min_cost(vector<vector<int>>& triangle,int i, int j,vector<vector<int>>& memo){

    int n = triangle.size();
    if(memo[i][j] != -1) return memo[i][j];
    
    if (i == n - 1) {
            return triangle[i][j];
        }
        
        int case1 = min_cost(triangle,i+1,j,memo);
        int case2 = min_cost(triangle,i+1,j+1,memo);

    memo[i][j] = triangle[i][j] + min(case1,case2);
    return memo[i][j];
    
    }
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();

        vector<vector<int>> memo(n, vector<int>(n, -1));
        return min_cost(triangle,0,0,memo);
    }
};
