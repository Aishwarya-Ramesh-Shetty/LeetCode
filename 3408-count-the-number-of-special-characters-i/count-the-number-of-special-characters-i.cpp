class Solution {
public:
    int numberOfSpecialChars(string word) {
        int count = 0;
        unordered_set<char>lower,upper;

        for(char ch:word){
            if(islower(ch)){
                lower.insert(ch);
            }
            else if(isupper(ch)){
                upper.insert(ch);
            }
        }

        for(char ch:lower){
            if(upper.count(toupper(ch))){
                count++;
            }
        }
        return count;
    }
};