#include <iostream>
using namespace std;
int main ()
{
int val;
cout << "enter any number:" <<endl;
cin >> val;
int  num = 1,sum = 0;

while ( num <= val )
{
    sum += num;
    ++num;
} 
cout << sum <<endl;
 return 0;

}
 