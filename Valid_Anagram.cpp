class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        int freqt[26] = {0} , freqs[26] = {0};
        for(char ch : a) freqs[ch - 'a']++;
        for(char ch : b) freqt[ch - 'a']++;
        for(int i = 0 ; i < 26 ; i++)
        if(freqs[i] != freqt[i])return false ;
         return true;
        
    }
};
