#include<iostream>

using namespace std;

int main()
{
    int i,n = 13;
    bool isprime= true;
    
    // 0 and 1 are not prime numbers also, negative numbers are not prime
    if(n < 2)
    {
        isprime = false;
    }
    else
    {
        for(i=2;i < n;i++)
        {
            if(n % i == 0)
            {
                isprime = false;
                break;
            }
        }
    }

    string result = isprime ? "Prime" : "not Prime";
    cout<<"The number " << n << " is : " << result;
    
    return 0;
}