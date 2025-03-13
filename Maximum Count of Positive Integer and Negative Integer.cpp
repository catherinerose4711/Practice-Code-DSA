class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size(), pos=n-1, neg=0;
        if(nums[neg] > 0 || nums[pos] < 0) return n;
        while (neg <= pos) {
            if(nums[neg] < 0)   
                neg++;
            if(nums[pos] > 0)
                pos--;
            if(nums[pos] == 0 && nums[neg] == 0) // which is zero
                break;
        }

        cout << pos << ":" << n-pos-1 << "    "  << neg <<endl;

        return max(n-pos-1, neg);
    }
};
