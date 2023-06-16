#include <iostream>
using namespace std;
void avg(int ,int ,int);
int main()
{
    float s1,s2,s3;
    cout<<"Enter three subjects";
    cin>>s1>>s2>>s3;
    avg(s1,s2,s3);
    return 0;
}
void avg(int s1,int s2,int s3)
{
    float a=(s1+s2+s3)/3;
    cout<<"Average is:--"<<a<<endl;
}
