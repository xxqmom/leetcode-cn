class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int sz = nums.size();
        int slow = 0, fast = 0;
        while(fast < sz){
            //[1,1,2]
            if(nums[slow] != nums[fast]){
                nums[++slow] = nums[fast];
            }
            fast++;
        }
        nums.erase(nums.begin() + slow + 1, nums.end());
        return nums.size();
    }
};