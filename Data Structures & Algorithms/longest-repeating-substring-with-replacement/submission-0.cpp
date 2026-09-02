class Solution {
public:
    int characterReplacement(string s, int k) {

        unordered_map<char, int> freq;

        int left = 0;
        int maxFreq = 0;
        int result = 0;

        for (int right = 0; right < s.length(); right++) {

            // Count the current character
            freq[s[right]]++;

            // Find the highest frequency in the window
            maxFreq = max(maxFreq, freq[s[right]]);

            // Calculate how many characters we need to replace
            int windowLength = right - left + 1;
            int replacements = windowLength - maxFreq;

            // If replacements are more than k,
            // shrink the window
            while (replacements > k) {

                freq[s[left]]--;
                left++;

                windowLength = right - left + 1;
                replacements = windowLength - maxFreq;
            }

            // Store the maximum valid window
            result = max(result, right - left + 1);
        }

        return result;
    }
};