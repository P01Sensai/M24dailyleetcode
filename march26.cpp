static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();

//approach 1

// class Solution {
// public:
//     int firstMissingPositive(vector<int>& nums) {
//         int n = nums.size();
        
//         for (int i = 0; i < n; ++i) {
//             if (nums[i] <= 0 || nums[i] > n)
//                 nums[i] = n + 1;
//         }
        
//         for (int i = 0; i < n; ++i) {
//             int num = abs(nums[i]);
//             if (num > n) continue;
//             num--;
//             if (nums[num] > 0)
//                 nums[num] = -nums[num];
//         }
        
//         for (int i = 0; i < n; ++i) {
//             if (nums[i] > 0)
//                 return i + 1;
//         }
        
//         return n + 1;
//     }
// };
//approach 2
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int missingnum =1;

        for(auto number : nums){
            if(number > 0){ // intiating the main logic condition from here where the elements are bigger than 0
                if(number == missingnum) missingnum ++; //checking the the missing number
                else if(number > missingnum) break; // breaking loop if we find the missing number , since we are finding the smallest one
            }
        }
        
        return missingnum;
    }
};
