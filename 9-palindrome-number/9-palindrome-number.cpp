class Solution {
public:
    bool isPalindrome(int x) {
        int ans=0,num=x;
        if(x<0){
            return false;
        }
        while(x!=0){
            int digit=x%10;
            if(ans>INT_MAX/10){
                return false;
            }
            ans=ans*10+digit;
            x=x/10;
        }
        if(num==ans){
            return true;
        }
        return false;
    }
};