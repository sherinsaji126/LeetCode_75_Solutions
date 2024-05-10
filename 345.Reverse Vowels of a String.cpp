/*
Given a string s, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

 

Example 1:

Input: s = "hello"
Output: "holle"
Example 2:

Input: s = "leetcode"
Output: "leotcede"
*/
class Solution {
public:
    string reverseVowels(string s) {
        int i=0,j=s.length()-1;
        string str="aeiouAEIOU";
        while(i<j){
        if(str.find(s[i])==-1){
            ++i;
        }
        if(str.find(s[j])==-1){
            --j;
        }
        if(i<j && str.find(s[i])!=-1 && str.find(s[j])!=-1){
        swap(s[i++],s[j--]);
        }
    }
    return s;
        }
    
};
