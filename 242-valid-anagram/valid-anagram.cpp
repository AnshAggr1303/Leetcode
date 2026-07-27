class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        for(auto word:s){
            mp1[word]++;

        }
        for(auto word:t){
            mp2[word]++;
        }
        return mp1 == mp2 ;
    }
};