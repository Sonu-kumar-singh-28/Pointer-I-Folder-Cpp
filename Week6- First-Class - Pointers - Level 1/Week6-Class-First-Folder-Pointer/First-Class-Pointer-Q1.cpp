#include<iostream>
using namespace std;
int main()
{
    // int a = 5;
    // int b = 5;

    // cout<<a << endl;

    // cout<< &a << endl;
    // cout<< &b << endl;



    // int a =5;
    // int* ptr = &a; 

    // cout<<&a << endl;
    // cout<<ptr << endl;
    // cout<< *ptr << endl;
    // cout<<&ptr << endl;
    


    int a = 3;
    int* ptr = &a;

    cout<< sizeof(ptr) << endl;

    char ch = 'a';

    char* pr = &ch;
    cout<< sizeof(pr) << endl;

    double d = 1.23;
    double* pt = &d;
    cout<< sizeof(pt) <<endl;



    // bad practices 
    int* ppp ;

    cout<< *ppp << endl;
    // ans is sagementation Fault or Run time error 


    // null pointer 
    int* ptrr= 0;
    cout<< *ptrr << endl;

    return 0;
}
