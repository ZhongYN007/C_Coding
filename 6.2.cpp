#include<iostream>
using namespace std;
//输入一个整型数，然后申请对应大小空间内存，然后读取一个字符串，字符串的输入长度小于最初输入的整型数大小，最//后输出输入的字符串即可

int main()
{
    int size = 0;
    cin>>size;
    char *p=new char[size];
    char ch = getchar();  //注意这里，需要用getchar吃掉上面cin输入的回车换行符
    cin.getline(p,size);
    cout<<p;
    delete []p;
}