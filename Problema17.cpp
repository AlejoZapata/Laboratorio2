#include <iostream>

using namespace std;

int sumaDiv(int a);
bool checkamigable(int a);

int main()
{
    while (true){
    int a,suma=0;
    cout <<"Ingrese un numero: ";cin>>a;
    for(int i=0;i<=a;i++){
        if (checkamigable(i)==true){
            suma+=i;
        }
    }
    cout <<"La suma de los numero amiglables es: "<<suma<<endl;
    }
}

bool checkamigable(int a){
    bool ban=false;
    int b=sumaDiv(a);
    if (sumaDiv(b)==a && sumaDiv(a)==b) ban=true;
    return ban;
}

int sumaDiv(int a){
    int suma=0;
    for (int i=1;i<a;i++){
        if (a%i==0) suma+=i;
    }
    return suma;
}
