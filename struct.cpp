#include<iostream>
using namespace std;

struct student{
    int no;
    char name[5];
    char sex;
};
int main()
{
    student Student;
    scanf("%d %s %c",&Student.no,Student.name,&Student.sex);
    cout<<Student.no<<" "<<Student.name<<" "<<Student.sex;
}
