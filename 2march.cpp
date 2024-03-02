
//Squares of a Sorted Array
//approach; 
/*1. we are directly storeing the values product in new array as asquared
*/
static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> Ascendvector;
        for(int i = 0; i<nums.size();i++){
            //int x = pow(nums[i],nums[i]);

            int x = (nums[i]*nums[i]);
            Ascendvector.push_back(x);
        }
        sort(Ascendvector.begin(),Ascendvector.end());
        return Ascendvector;
        
    }
};
