//https://leetcode.com/problems/remove-duplicates-from-sorted-array

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        int n=1;
        int leftPointer=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] > nums[leftPointer]){
                leftPointer++;
                n++;
                nums[leftPointer] = nums[i];   
            }
        }
        return n;
    }
};