class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        // Hash Map
        unordered_map<string, vector<string>> map;

        // Take each word one by one
        for (string s : strs) {

            // Count characters
            int count[26] = {0};

            for (char c : s) {
                count[c - 'a']++;
            }

            // Create frequency pattern (key)
            string key = "";

            for (int i = 0; i < 26; i++) {
                key += to_string(count[i]) + "#";
            }

            // Put the word into its group
            map[key].push_back(s);
        }

        // Store all groups
        vector<vector<string>> result;

        for (auto& pair : map) {
            result.push_back(pair.second);
        }

        // Return final answer
        return result;
    }
};