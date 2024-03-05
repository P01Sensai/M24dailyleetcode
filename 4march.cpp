static int speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(0);
	return 0;
}();
class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());
        int score = 0, maxScore = 0;
        int left = 0, right = tokens.size() - 1; // basic two pointer approach

        while (left <= right) {
            if (power >= tokens[left]) {
                power -= tokens[left++]; //using power to use token and increase score
                score++;
                maxScore = max(maxScore, score);//updating thr score
            } else if (score > 0) {
                power += tokens[right--]; // losing score to gain power
                score--;
            } else {
                break;
            }
        }

        return maxScore;
    }
};
