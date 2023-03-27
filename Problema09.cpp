#include <iostream>

using namespace std;

int main()
{
    char cadena[50];
    char numeros[50];
    int numero,longitud=0,contador=0,suma=0, numerogenerado=0;
    int potencia10=10;
    cout <<"Escriba un numero: ";
    cin >> numero;
    cout << "Escriba un numero grande: ";
    cin >> cadena;
    for (int i=0; ;i++){//Longitud de la frase.
        if (cadena[i]=='\0'){break;}
        longitud++;
    }
    for(int i=longitud; i<50 ;i++){//eliminar basura
         cadena[i]='\0';
    }
    for(int i=longitud-1; i>=0 ;i--){
        contador ++;
        if(numerogenerado==0)
        {
            numerogenerado = numerogenerado*10+(cadena[i]-48);
        }
        else {

            numerogenerado = ((cadena[i]-48)*potencia10)+numerogenerado;
            potencia10 *= 10;
        }
        if(contador==numero)
        {
            contador=0;
            suma += numerogenerado;
            numerogenerado=0;
            potencia10=10;
        }
        if(i==0) { //el ultimo numero generado que sobra se suma
            suma += numerogenerado;
        }
    }

    cout <<"Suma: " <<  suma << "\n\n";
    return 0;
}
