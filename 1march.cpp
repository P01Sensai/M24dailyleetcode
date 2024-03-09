// This the approach 1 - :
class Solution {
public:
    string maximumOddBinaryNumber(string s) {

      
        // 1.Sort the string in descending order
        // 2.Find the first '1' from the right
        // 3.Swap it with the last element

        sort(s.rbegin(), s.rend());// to shift all '1' in left side to make it max valued binary 
        auto it = find(s.rbegin(), s.rend(), '1'); // iterating it from right to find the most right '1' 
        swap(*it, s.back()); // swaping '1' to end of the string to make it odd binary
        
        return s;
    }
};

//// This the approach 2 - :
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        //int size = s.length();
        //1. count both number of the '1' and '0' 
        //2. now we will be using the concatation adding the string of '1' with size count1 -1 and then string of '0' andding '1' at the end
        int count1 =0  , count0 = 0;
        for(int i = 0 ; i < s.length(); i++){
            if(s[i] == '1') count1++;
            if(s[i] == '0') count0++;
        }
        string ans;
        ans = string(count1-1 , '1') + string(count0 , '0') + '1';
        return ans;
    }
};
