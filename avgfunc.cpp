#include <iostream>
using namespace std;
int cube(int);
int main()
{
    int num=10;
    int c=cube(num);
    cout<<c<<endl;
    return 0;
}

int cube(int num)
{
    int cube=num*num*num;
    return cube;
}
