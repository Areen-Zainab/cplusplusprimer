#include <iostream>
using namespace std;
int main()
{

int small, big;
cout << "enter two numbers; "<< endl;
cin >> small >> big;

while( small <= big)
{
cout << small <<endl;
++small;
}
 return 0;

}