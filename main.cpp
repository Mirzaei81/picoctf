#include<bits/stdc++.h>
 
using namespace std;
 
    // This function finds the value of a and b
    // and returns a+b and a-b
    void FermatFactors(long n)
    {
         
        // since fermat's factorization applicable
        // for odd positive integers only
        if(n <= 0)
        {
            cout << "[" << n << "]";
            return;
        }
     
        // check if n is a even number
        if((n & 1) == 0)
        {
            cout << "[" << n / 2.0 << "," << 2 << "]";
            return;
        }
             
        int a = ceil(sqrt(n)) ;
     
        // if n is a perfect root,
        // then both its square roots are its factors
        if(a * a == n)
        {
            cout << "[" << a << "," << a << "]";
            return;
        }
        int b;
        while(true)
        {
            int b1 = a * a - n ;
            b = (int)sqrt(b1) ;
             
            if(b * b == b1)
                break;
            else
                a += 1;
        }
        cout << "[" << (a - b) << "," << (a + b) << "]" ;
        return;
    }
         
    // Driver Code
    int main()
    {
        FermatFactors(631371953793368771804570727896887140714495090919073481680274581226742748040342637);
        return 0;
    }
