
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       int n = numbers.size();
        int left = 0;
        int right = n-1;
        while (target != numbers[left]+numbers[right]){
            if(target > numbers[left]+numbers[right]){
                left++;
                continue;
            }
            if(target < numbers[left]+numbers[right]){
                right--;
                continue;
            }
            break;
        }
        return {left+1, right+1};
    }
};
