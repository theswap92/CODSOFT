#include<iostream>
using namespace std;

int main() {

    int a, b, c ,ch; 
    cout<<" Enter the value of first operand:";
    cin>>a;

    cout<<" Enter the value of second operand:";
    cin>>b;

    cout<<" Enter the operator you want to perform:";
    cin>>ch;

    switch (ch)
    {
    case 1 : c= a+b;
        cout<<"\n addition of two operand is a+b:"<<c<<endl;
        break;

    case 2 : c= a-b;
        cout<<"\n subtraction of two operand is a-b:"<<c<<endl;
        break;

    case 3 : c= a*b;
        cout<<"\n multiplecation  of two operand is a*b:"<<c<<endl;
        break;

    case 4 : c= a/b;
        cout<<"\n Division of two operand is a/b:"<<c<<endl;
        break;

    case 5 : c= a%b;
        cout<<"\n modulus of two operand is a%b:"<<c<<endl;
        break;
    
    default: 
        cout<<"you entered wrong choice";
        break;
    }

    

   return 0; 
}
