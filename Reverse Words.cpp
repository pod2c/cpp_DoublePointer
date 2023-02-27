class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        int length = s.length();

        while(i<length){

            int start = i;

            while (i<length && s[i]!=' '){
                i++;
            }
        
            int left = start;
            int right = i-1;

            while(left<right){
                swap(s[left], s[right]);
                left++;
                right--;
            }

            while (i<length && s[i]==' '){
                i++;
            }
        }
        return s;
    }   
};