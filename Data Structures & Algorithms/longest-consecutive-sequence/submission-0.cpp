class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> st;

        // Put all numbers into the set
        for (int num : nums) {
            st.insert(num);
        }

        int longest = 0;

        // Check every number
        for (int num : st) {

            // Check if num is the starting number
            if (st.find(num - 1) == st.end()) {

                int current = num;
                int count = 1;

                // Find the next consecutive numbers
                while (st.find(current + 1) != st.end()) {
                    current++;
                    count++;
                }

                longest = max(longest, count);
            }
        }

        return longest;
    }
};