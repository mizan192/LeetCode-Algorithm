class Solution {
public:
    int search(vector<int>& nums, int target) {

        int left=0,right=nums.size()-1;

        int index=-1;

        while(left<=right){  
            int mid = left+(right-left)/2;    //no overflow issue
            if(nums[mid]==target) {
                index=mid;
                break;
            }
            else if(nums[mid]<target) left=mid+1;
            else right =mid-1;
        }

    return index;

    }
};

/*
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=-1,right=nums.size()-1;
        while(left<right){  
            int mid = left+(right-left)/2;   //no overflow issues
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target) left=mid+1;
            else right =mid-1;
        }

    return -1;

    }
};
*/