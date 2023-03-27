#include <iostream>

using namespace std;
void imprimir(char arreglo[15][20]);
void instruciones();
void asientos(char cine[15][20]);

int main()
{
    char cine[15][20];
    int numero=1;
    for (int fila=0;fila<15;fila++) {
        for (int col=0;col<20;col++) {
            cine[fila][col]='-';
        }
    }
    while(numero!=0){
    cout << "MENU" << endl;
    cout << "presione 1 para visualizar"<<endl;
    cout << "presione 2 para reservar o cancelar"<<endl;
    cout << "presione 3 para instruciones"<<endl;
    cout << "presione 0 para salir"<<endl;
    {
        cout <<"Numero: ";
        cin >> numero;
        cout << endl;
        switch (numero) {
            case 1:
                imprimir(cine);
                break;
            case 2:
                asientos(cine);
                break;
            case 3:
                instruciones();
                break;
            default:
             if(numero!=0)
                 cout << "numero invalido" << endl << endl;
        }
    }
    }
    return 0;
}


void asientos(char cine[15][20])
{
    char fila;
    int asiento;
    string respuesta;
    cout << "ingrese la fila del A hasta O: ";
    cin >>fila;
    cout << "el numero del asiento del 1 al 20: ";
    cin >>asiento;

    if(cine[fila-65][asiento-1]=='-')
    {
       cout << endl<<endl;
       cout << "Asiento disponible" << endl;
       cout <<"Desea Reservarlo?: ";
       cin >> respuesta;
       cout << endl;
       if(respuesta == "si")
       {
          cine[fila-65][asiento-1]='+';
          cout <<"Asiento reservado"<<endl<<endl;
       }
    }
    else {
        cout << endl<<endl;
        cout << "Asiento NO disponible" << endl;
        cout <<"cancelar su reservacion?: ";
        cin >> respuesta;
        cout << endl;
        if(respuesta == "cancelar")
        {
           cine[fila-65][asiento-1]='-';
           cout <<"Revervaciona cancelada"<<endl<<endl;
        }
    }
}


void imprimir(char arreglo[15][20])
{
    //imprimir
    cout << "\n\n";
    for (int fila=0;fila<15;fila++) {
        for (int col=0;col<20;col++) {
            cout << arreglo[fila][col];
        }
        cout << "\n";
    }
    cout << "\n\n";
}


void instruciones()
{
    cout << endl << endl;
    cout << "presione 1 para visualizar"<<endl;
    cout << "presione 2 para reservar o cancelar"<<endl;
    cout << "presione 0 para salir"<<endl<<endl;
    cout << "para reversar un asiento escriba la fila y el numero del asiento deseado, ";
    cout << "mostrara si el asiento esta reservado o no, ";
    cout << "si el asiento esta disponible, solo debe ingresar escribir 'si' para reservarlo,  ";
    cout << "si desea cancelar escribir no,  ";
    cout << "si el asiento no esta disponible y desea cancelar su reservacion escribir 'cancelar',  ";
    cout << "de lo contrario escribir no.";
    cout << endl << endl;
}
