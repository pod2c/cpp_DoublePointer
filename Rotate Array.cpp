class Solution {
public:

    void reverse(vector<int>& nums, int left, int right){

        while (left<right){
            swap(nums[left], nums[right]);
            left += 1;
            right -= 1;
        }
    }


    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        reverse(nums, 0, n-1);
        reverse(nums, 0, k%n-1);
        reverse(nums, k%n, n-1);
    }
};