static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
//1750. Minimum Length of String After Deleting Similar Ends. 
//approach: is using two pointer
/*  we want to delete similiar element at prefix and suffix.
1. we will set basic two pointer condition while(left<right) - this condition ensure that poth pointer never crosses each other.
2. set the intialization of pointers.
3. set conditon if the prefix suffix doesn't matches then brea kthe while statemenet and return the size by (right-left +1)
4.  while(left<right && s[left]==s[left+1]) left++;
    while(left<right && s[right]==s[right-1]) right--;  this lines are checking similar chracters sequentially
5. the other left++, right-- are for increment in pointers if both while runs well
6. if(right < left) return 0;  this statement ensure when the right and left crosses each other then the minimum length is 0 no element remain in string
*/
class Solution {
public:
    int minimumLength(string s) {
        int left = 0, right = s.size()-1;
        while(left<right){
            if(s[left] != s[right]) break;
            else {
                while(left<right && s[left]==s[left+1]) left++;
                while(left<right && s[right]==s[right-1]) right--;
                left++;
                right--;
            }
        }
        if(right < left) return 0;
        else return right - left +1;
    }
};
