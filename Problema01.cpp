#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    while(true){
        cout << "ingrese una cantidad de dinero: "; cin>>a;
        b=100000;
        for(int i=0;i<=9;i++){
            c=i-3*(i/3);
            if (i%3==0) b/=10;
            d=(c*c-4*c+5)*b; //formula
            cout<<d<<" : "<<a/d<<endl;
            a=a%d;
        }
        cout<<"Restante: "<<a<<endl;
    }
}
