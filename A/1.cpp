#include<iostream>
#include<cstring>
using namespace std;
char* concat(const char* a, const char* b)
{
    char *kq= new char [strlen(a)+strlen(b)];
    strcpy(kq,a);
    strcat(kq,b);
    return kq;

}
int main()
{
    cout << concat("hello","world");
}
