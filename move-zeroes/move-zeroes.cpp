class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int sz = nums.size();
        for(int i = 0, index = 0; i < sz; i++, index++){
            if(nums[index]==0){
                nums.erase(nums.begin()+index);
                nums.push_back(0);
                index--;
            }
        }
    }
};