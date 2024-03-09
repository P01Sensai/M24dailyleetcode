static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map <int,int> freq;

        for(int num : nums1){
            freq[num]++;
        }

        int result = -1;

        for(int num : nums2){
            if(freq.find(num) != freq.end() && freq[num] > 0){
                //result = (result == -1) ? num : min(result,num);
                if (result == -1 || num < result) {
                    result = num;
                }
                freq[num]--;
            }
        }
        return result;
        
    }
    
};
