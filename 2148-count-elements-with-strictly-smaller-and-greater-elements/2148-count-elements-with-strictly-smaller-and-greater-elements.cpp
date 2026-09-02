class Solution {
public:
    int countElements(vector<int>& nums) {
            int smallest = nums[0];
            int largest = nums[0];
            int i=0;
            int count=0;
            for(i=0;i<nums.size();i++){
                if (nums[i]<smallest){
                    smallest=nums[i];
                }
                if(nums[i]>largest){
                    largest=nums[i];
                }
            }
            for(i=0;i<nums.size();i++){
                if(nums[i]>smallest && nums[i]<largest){
                    count++;
                }
            }
            return count;  
    }
};