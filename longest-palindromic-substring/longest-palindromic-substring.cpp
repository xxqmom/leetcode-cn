class Solution {
    public:    
    bool checkP(int startIndex, int endIndex, string &s){        
        int left = startIndex;        
        int right = endIndex;        
        while(left < right){            
            if( s[left]!=s[right]) return false;           
             left++;right--;        
             }        
             return true;    
             }    
    string longestPalindrome(string s) {
                int sz = s.size();        if(sz < 2) return s;        int startIndex = 0;        int maxLength = 1;        for(int i = 0; i < sz - 1; i++){            for(int j = i + 1; j < sz ; j++){                if( j - i + 1 >= maxLength && checkP(i, j, s) ){                    maxLength = j - i + 1;                    startIndex = i;                }            }        }        return s.substr(startIndex, maxLength);    }};