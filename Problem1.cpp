#include <iostream>
using namespace std;
 
class test
{
    public:
    double x,y,sum;

    void input()
    {
        cout<<"Enter two numbers\n";
        
    }
   
        
    
    int add()
    {
        sum=x+y;
        cout<<sum;
    }
    int minus()
    {
        sum=x-y;
        cout<<sum;
    }
    int mult()
    {
        sum=x*y;
        cout<<sum;
    }
    int divide()
    {
        if(x<y){
            cout<<"Cannot divide: first number is smaller than second number";
        }
        else{
        sum=x/y;
        cout<<sum;
        }
    }
};
 
 
int main()
{
    test z;
    char choice;
    z.input();
    cin>>z.x;
    cin>>z.y;
    cout<<"Enter operator";
    cin>>choice;
    switch (choice)
    {
        case '+':
        z.add();
        break;
 
        case '-':
        z.minus();
        break;
 
        case '*':
        z.mult();
        break;
 
        case '/':
        z.divide();
        break;
        
        default:
        cout<<"0";
    }
    
}
