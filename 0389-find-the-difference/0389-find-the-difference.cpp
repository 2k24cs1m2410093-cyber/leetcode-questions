class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans = 0;
        for(char ch : s){
            ans ^= ch;//Ye loop s ke har character ko ek-ek karke ans ke saath XOR karta hai.
        }
        for(char ch : t){
            ans ^= ch;//Ye loop t ke har character ko ek-ek karke ans ke saath XOR karta hai
        }
        return ans;
    }
};