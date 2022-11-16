//非常重要的指针知识点，一定要看！

#include<iostream>
using namespace std;

void modify(int **num)
{
    *num += 2;
}
int modify2(int *num)
{
    *num += 1;

}
void change(int *b)
{
    *b += 1;
}
int main()
{

    int test1[3] = {2,3,4};
    int *p = test1;
    cout<<"改变前："<<*p<<endl;
    modify2(test1);
    cout<<test1[0]<<endl;
    modify(&p);
    cout<<"改变后："<<*p<<endl;
    //cout<<*p;
    int a = 1;
    change(&a);
    cout<<a;
    //modify(test1);
    //modify2(&test2);
    //cout<<"test1:"<<test1<<endl;
   // cout<<"test2:"<<test2;
}