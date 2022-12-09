class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans;

        int leftPos=0,rightPos=nums.size()-1;
        while(leftPos<=rightPos){
            if(leftPos==rightPos){
                ans.push_back(nums[leftPos]*nums[leftPos]);
                break;
            }
            if(abs(nums[leftPos])==abs(nums[rightPos])){
                ans.push_back(nums[leftPos]*nums[leftPos]);
                ans.push_back(nums[rightPos]*nums[rightPos]);
                leftPos++;
                rightPos--;
            }
            else if(abs(nums[leftPos])>abs(nums[rightPos])){
                ans.push_back(nums[leftPos]*nums[leftPos]);
                leftPos++;
            }
            else{
                ans.push_back(abs(nums[rightPos])*abs(nums[rightPos]));
                rightPos--;
            }
        }
    reverse(ans.begin(),ans.end());
    
return ans;

    }
};