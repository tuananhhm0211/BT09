#include<iostream>
using namespace std;
int main()
{
    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p;// p2 truy mhap vung nho khong hop le
    *p2 = 100;
    cout << *p2;
    delete p2;


}
