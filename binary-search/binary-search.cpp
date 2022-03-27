class Solution {
public:
    int bsearch_1(int l, int r, vector<int>& nums, int target)
    {
        while (l < r)
        {
            int mid = l + r >> 1;
            if (nums[mid] >= target) r = mid;    
            else l = mid + 1;
        }
        return l;
    }

    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        
        int result = bsearch_1(l , r , nums, target);
        if(nums[result] != target) return -1;
        else return result;
    }
};