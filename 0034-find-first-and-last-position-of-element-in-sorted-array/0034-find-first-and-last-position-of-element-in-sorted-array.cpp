class Solution {
public:
    
    int firstocc(vector <int> & nums, int T){
        int ans=-1;
        int l=0;
        int h=nums.size()-1;

        while (l<=h){
            int mid=l+(h-l)/2;
            if (nums[mid]==T){
                ans=mid;
                h=mid-1;
            }
            else if (nums[mid]<T){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
            return ans;
    }

    int lastocc(vector<int> & nums , int T){
        int ans=-1;
        int l=0;
        int h=nums.size()-1;
        while (l<=h){
            int mid=l+(h-l)/2;

            if (nums[mid]==T){
                ans=mid;
                l=mid+1;
            }
            else if(nums[mid]>T){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
    int first =firstocc(nums,target);
    int last=lastocc(nums,target);
    return {first,last};
    }
};