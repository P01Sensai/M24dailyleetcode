//sliding windows
static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
// we are using the SLIDING WINDOW algo  
/*  we are intiating to int variable prod - it is storing the product of sub array elements and result is storing the number of subarray

*/
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
       if(k <= 1) return 0;// here we are checking the 
      
       int prod = 1;
       int result =0;
       int left =0;
       int right = 0;
       int n = nums.size();// size of the array

       while(right < n) {
        prod *= nums[right];
        while(prod >= k){ // if the conditon excced
            prod /= nums[left];// poping out the left element
            left++;
        }
        result += right - left + 1; //counting subbarray
        right++;
       }
       return result;
    }
};
