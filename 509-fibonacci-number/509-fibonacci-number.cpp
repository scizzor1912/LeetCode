class Solution {
public:
    int fib(int n) {
        int t1 = 0, t2 = 1;
        while(n!=0){
            int t3 = t1 + t2;
            t1 = t2;
            t2 = t3;
            n--;
        }
        return t1;
    }
};