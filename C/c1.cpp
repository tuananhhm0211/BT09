#include <iostream>
using namespace std;

int length(const char a[])
{
    int dem = 0;
    while (*(a + dem) != '\0') dem++;
    return dem;
}

char* revers(const char a[])
{
    int dai= length(a);
    char * kq=new char [dai];
    for (int i = 0; i < dai ; i++) kq[i]=a[dai-i-1];
    return kq;
}

char* delete_char (const char a[],const char c)
{
    int dem = 0;
    int dai = length(a);
    char * kq=new char [dai];
    for (int i = 0; i < dai; i++)
    {
        if(*(a+i)!=c)
       {
           *(kq + dem) = *(a+i);
           dem++;
       }

    }
    return kq;
}

char* pad_right(const char a[],const int n)
{
    int dai = length(a);
    char * kq=new char [n];
    for(int i=0; i<dai; i++)
    {
        *(kq + i) = *(a + i);
    }
    for (int i = dai; i < n; i++)
    {
        *(kq + i) = ' ';
    }
    return kq;
}

char* pad_left(const char a[],const int n)
{
    int dai = length(a);
    char * kq=new char [n];
    for(int i=0; i<dai; i++)
    {
        *(kq + i) = *(a + i);
    }
    while (dai < n)
    {
        for (int i = dai; i > 0; i--)
        {
            *(kq + i) = *(kq + i - 1);
        }
        dai++;
        *kq = ' ';
    }
    return kq;
}

char* truncate(const char a[],const int n)
{
    int dai=length(a);
    char * kq=new char [dai];
    for(int i=0; i<dai; i++)
    {
        *(kq + i) = *(a + i);
    }
    *(kq + n) = '\0';
    return kq;
}

bool is_palindrome(char a[])
{
    int dai = length(a);
    for (int i = 0; i < dai / 2; i++)
    {
        if (*(a + i) != *(a + dai - i - 1)) return false;
    }
    return true;
}

char* trim_left(const char a[])
{
    int dai = length(a);
    char * kq=new char [dai];
    for(int i=0; i<dai; i++)
    {
        *(kq + i) = *(a + i);
    }
    int i = 0;
    while (*(a + i) == ' ') i++;
    for (int j = 0; j < dai - i; j++) *(kq + j) = *(kq + i + j);
    *(kq + dai - i) = '\0';
    return kq;
}

char* trim_right(char a[])
{
    int i = 0;
    int dai=length(a);
    char * kq=new char [dai];
    for(int i=0; i<dai; i++)
    {
        *(kq + i) = *(a + i);
    }
    while (*(a + i) != ' ') i++;
    *(kq + i) = '\0';
    return kq;
}

int main()
{
    char a[100];
    cin >> a;
    cout << a << endl;
    cout << length(a) << endl;


    cout<< revers(a) << endl;


    cout << is_palindrome(a) << endl;


    cout<<  delete_char(a,'c') << endl;


    cout<< pad_right(a,10) << '-' << endl;

    cout<< '-' <<   pad_left(a,10) << endl;

    cout<< truncate(a,2)<< endl;

    cout<< trim_left(a) << endl;

    cout<< trim_right(a) << endl;
    return 0;
}
