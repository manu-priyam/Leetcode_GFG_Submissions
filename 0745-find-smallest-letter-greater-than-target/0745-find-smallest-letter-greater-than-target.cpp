class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        vector<char>:: iterator UB;
        UB = upper_bound(letters.begin(),letters.end(),target);
        if(UB < letters.end()) return letters[UB-letters.begin()];
        else return letters[0];
    }
};