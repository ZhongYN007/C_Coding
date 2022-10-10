#include<iostream>
using namespace std;
bool check(int*a,int p)
{
    int j =p-1;
    for(int i = 0;i< j;i++,j--)
        if(a[i] != a[j])
        {return false;}
    return true;
}
int main()
{
    int a[255]={0};
    int num;
    cin>>num;
    int p_num=0;
    while(num%10 !=0)
    {
        int la = num%10;
        num /= 10;
        a[p_num] = la;
        p_num++;
    }
    
    if(check(a,p_num))
        cout<<"yes";
    else
        cout<<"no";

}