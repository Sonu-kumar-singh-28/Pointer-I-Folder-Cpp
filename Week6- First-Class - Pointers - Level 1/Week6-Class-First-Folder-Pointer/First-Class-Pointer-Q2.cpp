#include<iostream>
using namespace std;
int main()
{
    int a = 5;
    int* p = &a;
    int* q = p;
    int* r = q;

    cout<< a << endl;
    cout<<&a <<endl;
    cout<< *p << endl;
    cout<<&p << endl;
    cout<<endl;
    cout<< q << endl;
    cout<<&q << endl;
    cout<<endl;
    cout<< q << endl;
    cout<<*q << endl;
    cout<<&q <<endl;
    cout<<endl;
    cout<<r<< endl;
    cout<< *r << endl;
    cout<<&r<< endl;


    cout<< (*p+*q+*r) << endl;
    cout<<(*p)*2 +(*q)*2 << endl;
    cout<< *p/2 + *q/2 << endl;
    
}

