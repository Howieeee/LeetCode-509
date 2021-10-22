class Solution {
public:
    int fib(int n) {
        
        if(n==0)
            return 0;
        
        int fib[32];
        fib[1] = 1;
        fib[2] = 1;
        
        for(int i=3;i<=n;i++) //先算出來 再取值   用遞迴會重複計算
            fib[i] = fib[i-1]+fib[i-2];
        
        return fib[n];
    }
};
