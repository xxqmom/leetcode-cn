class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int sz = nums.size();
        int slow = 0, fast = 0;
        while(fast < sz){
            if(nums[fast]!=0){
                nums[slow]=nums[fast];
                slow++;
            }
            fast++;
        }
        for(int i = slow; i < fast; i ++){
            nums[i]=0;
        }

    }
};