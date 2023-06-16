#include<iostream>
using namespace std;
// W/A and W/NR
void avg(int s1,int s2,int s3)
{
 float a=(s1+s2+s3)/3;
 cout<<"average is:"<<a;
}
int main()
{
 float sub1,sub2,sub3;
 cout<<"Enter three Subjects Marks:";
 cin>>sub1>>sub2>>sub3;
 //avg=(sub1+sub2+sub3)/3;
 avg(sub1,sub2,sub3);
 return 0;
}
