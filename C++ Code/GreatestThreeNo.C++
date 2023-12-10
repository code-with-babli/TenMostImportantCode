#include <iostream>
using namespace std;
int main ()
{
    int first, second, third;
    first=10,second=20,third=30;
    
    //comparing first with other numbers
    if ((first >= second) && (first >= third))
        cout << first << " is the greatest "; 

    //comparing Second with other numbers 
    else if ((second >= first) && (second >= third))
        cout << second << " is the greatest";
    
    else
        cout << third << " is the greatest";
 
    return 0;
}