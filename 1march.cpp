class Solution {
public:
    string maximumOddBinaryNumber(string s) {

      // This the approach:
        // 1.Sort the string in descending order
        // 2.Find the first '1' from the right
        // 3.Swap it with the last element

        sort(s.rbegin(), s.rend());// to shift all '1' in left side to make it max valued binary 
        auto it = find(s.rbegin(), s.rend(), '1'); // iterating it from right to find the most right '1' 
        swap(*it, s.back()); // swaping '1' to end of the string to make it odd binary
        
        return s;
    }
};
