class Solution {
public:
    
    int firstOcc(vector<int>& nums, int tar){
        int start = 0, end = nums.size()-1, ans = -1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(nums[mid]==tar){
                ans = mid;
                end = mid - 1;
            }else if(nums[mid]<tar){
                start = mid + 1;
            }else{
                end = mid-1;
            }
        }
        return ans;
    }
    
    int lastOcc(vector<int>& nums, int tar){
        int start = 0, end = nums.size()-1, ans = -1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(nums[mid]==tar){
                ans = mid;
                start = mid + 1;
            }else if(nums[mid]<tar){
                start = mid + 1;
            }else{
                end = mid-1;
            }
        }
        return ans;
    }
    
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> answer;
        int fO=firstOcc(nums,target);
        int lO=lastOcc(nums,target);
        answer.push_back(fO);
        answer.push_back(lO);
        return answer;
    }
};