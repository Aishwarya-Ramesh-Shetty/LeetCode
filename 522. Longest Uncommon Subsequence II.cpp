class Solution {
public:
    int findLUSlength(vector<string>& strs) {
        sort(strs.begin(), strs.end(),
             [](const string& a, const string& b) {
                 return a.size() > b.size();
             });

        for (int i = 0; i < strs.size(); i++) {
            bool isUncommon = true;

            for (int j = 0; j < strs.size(); j++) {
                if (i == j) continue;

                if (isSubsequence(strs[i], strs[j])) {
                    isUncommon = false;
                    break;
                }
            }

            if (isUncommon) {
                return strs[i].size();
            }
        }

        return -1;
    }

private:
    bool isSubsequence(const string& s, const string& t) {
        int i = 0, j = 0;

        while (i < s.size() && j < t.size()) {
            if (s[i] == t[j]) i++;
            j++;
        }

        return i == s.size();
    }
};
