#include <iostream>

using namespace std;

void separarP5(int x,int y,char *q);

int main()
{
    int a,b;
    char *p;
    cout << "Ingrese el tamanio del numero: "; cin>>b;
    p=new char(b);
    p[b]='\0';
    cout << "Ingrese el numero: "; cin>>a;
    separarP5(a,b,p);
    cout<<p<<endl;
    delete p;
}

void separarP5(int x,int y,char *q)
{
    int f;
    for(int i=y;i>0;x/=10, i--){
     f=x%10;
     q[i-1]=char(f+48);
    }
}
