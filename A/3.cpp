#include<iostream>
using namespace std;
int main()
{
    char* a = new char[10];
    char* c = a + 3;
    for (int i = 0; i < 9; i++) a[i] = 'a';
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    delete c;// c tro toi giua bo nho dong nen khi delete c hanh vi cua chuong trinh khong xac dinh
    cerr << "a after deleting c:" << "-" << a << "-" << endl;

}
