class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0,right=nums.size()-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]==target){
                return mid;
            }
            if (nums[left]<=nums[mid]){ //means left side sorted
                if(target>=nums[left] && target<nums[mid]){
                    right=mid-1;
                }else{
                    left=mid+1;
                }
            }else{//means right side is sorted
                if(target<=nums[right] && target>nums[mid]){
                    left=mid+1;
                }else{
                    right=mid-1;
                }
            }
        }
        return -1; // revision 101
    }
};