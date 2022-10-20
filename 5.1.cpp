//输入N个数（N小于等于100），输出数字2的出现次数；
#include<iostream>
using namespace std;
int main()
{
    int num = 0;
    int sum;
    cin>>sum;
    int*array = new int[sum];
    for(int i = 0;i<sum;i++)
    {
        cin>>array[i];
    }
    for(int i = 0;i<sum;i++)
    {
        if(array[i] == 2)
        {
            num++;
        }
    }
    cout<<num;
}