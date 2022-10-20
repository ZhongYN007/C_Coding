//输入5个数，其中2个数出现2次，1个数是出现1次，找出出现1次的那个数，例如输入的是8 5 3 5 8，输出的值为3
#include<iostream>
using namespace std;
int main()
{
  int label[10]={0};
  int in[5];
  for(int i = 0;i<5;i++)
  {
    cin>>in[i];
  }
  for(int i = 0;i<5;i++)
  {
    label[in[i]]++;
  }
  for(int i = 0;i<10;i++)
  {
    if(label[i] == 1)
      cout<<i;
  }
}