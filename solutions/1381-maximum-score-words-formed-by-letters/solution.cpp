class Solution {
public:

    int solve(int idx, vector<string>& words, vector<int>& freq, vector<int>& score) {

        // base case
        if(idx == words.size()) {
            return 0;
        }

        // option 1 -> skip current word
        int notTake = solve(idx + 1, words, freq, score);

        // option 2 -> take current word
        string word = words[idx];

        int wordScore = 0;
        bool canTake = true;

        vector<int> temp = freq;

        for(char ch : word) {

            temp[ch - 'a']--;

            // letter available nahi hai
            if(temp[ch - 'a'] < 0) {
                canTake = false;
            }

            wordScore += score[ch - 'a'];
        }

        int take = 0;

        if(canTake) {
            take = wordScore + solve(idx + 1, words, temp, score);
        }

        return max(take, notTake);
    }

    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {

        vector<int> freq(26, 0);

        // available letters frequency
        for(char ch : letters) {
            freq[ch - 'a']++;
        }

        return solve(0, words, freq, score);
    }
};
