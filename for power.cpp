#include <iostream>
using namespace std;
int main()
{
    int num,pow;
    cout<<"ENTER THE NUM:";
    cin>>num;
    cout<<"ENTER THE VALUE OF POWER:";
    cin>>pow;
    int p=1;
    for(int i=1;i<=pow;i++)
    {
        p=p*num;
    }
   cout<<p<<endl;
   return 0;
}
