class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count, maxcount;

        count = 0;
        maxcount = 0;
        
        int n = nums.size();
        for(int i = 0;i < n; i++){
            if(nums[i] == 1){
                count++;
                if(count > maxcount){
                    maxcount++;
                }
            }if(nums[i] == 0){
                count = 0;
            }
        }

        return maxcount;
    }
};