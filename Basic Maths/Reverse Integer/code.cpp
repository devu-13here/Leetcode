class Solution {
public:
    int reverse(int x) {
        int n = x;
        int rv = 0;
        while( n != 0){
            if (rv > INT_MAX / 10 || rv < INT_MIN / 10){
                return 0;}

            rv = (rv * 10 ) + (n % 10 );
            n = n / 10;
        }
        return rv;
        
    }
};
