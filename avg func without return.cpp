#include <iostream>
using namespace std;
void avg(int ,int ,int);
int main()
{
    float sub1,sub2,sub3;
    cout<<"enter three subject";
    cin>>sub1>>sub2>>sub3;
    avg(sub1,sub2,sub3);
    return 0;
}

void avg(int s1,int s2,int s3)
{
    float a=(s1+s2+s3)/3;
    cout<<a<<endl;
}
