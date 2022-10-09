class Solution {
public:
    void reverseString(vector<char>& s) {
        int start = 0, end = s.size()-1;
        while(start<end){
            int temp=s[start];
            s[start]=s[end];
            s[end]=temp;
            start++;
            end--;
        }
    }
};