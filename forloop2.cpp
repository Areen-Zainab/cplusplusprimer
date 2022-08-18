#include <iostream>
using namespace std;
int main()
{
 int sum = 0, val;
 cout << " enter the number till sum has to be claculated " <<endl;
 cin >> val;
  for( int i = 0; i <=val; ++i)
    {  sum += i;}

    cout << " the sum of 1 to " << val << " is " << sum <<endl;
    return 0;

}