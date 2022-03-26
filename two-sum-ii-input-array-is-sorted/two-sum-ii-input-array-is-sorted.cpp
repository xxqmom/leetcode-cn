class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size() - 1;
        vector<int> result;
        while(left < right){
            if(numbers[left] + numbers[right] == target){
                result.push_back(left + 1);
                result.push_back(right + 1);
                break;
            }else if(numbers[left] + numbers[right] > target){
                right--;
            }else
                left++;
        }
        return result;
    }
};