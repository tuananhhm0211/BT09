#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *p=&a;
    delete p;
    cerr  << *p;
    //p van tro den a
}
