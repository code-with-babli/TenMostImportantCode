#include<iostream>
using namespace std;

int main ()
{
    int number;
    cout << "Enter a number:";
     cin >> number;
 
    //checking whether the number is even or odd
    if (number % 2 == 0)
        cout << number << " : Even";
    else
        cout << number << " : Odd";
        
    return 0;
}