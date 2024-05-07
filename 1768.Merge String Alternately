/*
You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, 
starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.
Return the merged string.
Example 1:
Input: word1 = "ab", word2 = "pqrs"
Output: "apbqrs"
Explanation: Notice that as word2 is longer, "rs" is appended to the end.
word1:  a   b 
word2:    p   q   r   s
merged: a p b q   r   s
*/
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int size=min(word1.length(),word2.length());
        string word3;
        for(int i=0;i<size;i++){
        word3.push_back(word1.at(i));
        word3.push_back(word2.at(i));
        }
        if(word1.length()>word2.length()){
            word3.append(word1,size,word1.length()-1);
        }else{
            word3.append(word2,size,word2.length()-1);
        }
         return word3;
    }
};
