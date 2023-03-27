/*Implemente una función que reciba 2 arreglos que representen los rectángulos A y B, y por referencia retorne un
rectángulo C (con la misma estructura descrita anteriormente) que corresponda a la intersección de A y B*/
#include <iostream>
#include<math.h>
#include<algorithm>

void EncontrarInterseccion(int*puntero1,int*puntero2,int*puntero3);
using namespace std;


int main()
{
    int puntero1[4]={0,0,8,4}, puntero2[4]={5,2,6,7}, puntero3[4]={};
    EncontrarInterseccion(puntero1,puntero2,puntero3);
    return 0;
}


void EncontrarInterseccion(int* puntero1,int *puntero2,int *puntero3){
    int x,y,ancho,alto;
    x= max(*puntero1,*puntero2);
    y= min(*(puntero1+1),*(puntero2+1));

    if(*puntero1<*puntero2)
    {
        ancho=*(puntero1+2)-abs(*puntero2-*puntero1);
    }
    else if(*puntero1>*puntero2)
    {
        ancho=*(puntero2+2)-abs(*puntero2-*puntero1);
    }
    else
    {
        cout<<"La intersección no es un rectángulo"<<endl;
        *(puntero1+1)=0;
        *(puntero2+1)=0;
    }

    if(*(puntero1+1)<*(puntero2+1))
    {
        alto=*(puntero2+3)-abs(*(puntero1+1)-*(puntero2+1));
    }
    else if(*(puntero1+1)>*(puntero2+1))
    {
         alto=*(puntero1+3)-abs(*(puntero1+1)-*(puntero2+1));
    }
    *puntero3=x;
    *(puntero3+1)=y;
    *(puntero3+2)=ancho;
    *(puntero3+3)=alto;
    cout<<"{"<<x<<" , "<<y<<" , "<< ancho<< " ," <<alto<<"}"<<endl;
}
