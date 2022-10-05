class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ans=0,num=n;
        for(int i=0;i<=30;i++){
            ans=pow(2,i);
            if(num==ans){
                return 1;
            }
        }
        return 0;
    }
};