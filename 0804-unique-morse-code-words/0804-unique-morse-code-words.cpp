class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
       vector<string>code{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        set<string>res;
        for(auto word : words){
            string curr = "";
            for(auto ch : word)
                curr += code[ch-97];
            res.insert(curr);
        }
        return res.size();
    }
};