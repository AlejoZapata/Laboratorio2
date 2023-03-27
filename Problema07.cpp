#include <iostream>

using namespace std;

void eliminar_caracteresP7(char *A, int a);

int main()
{
    int a;
    char *cadena;
    cout << "Ingrese la longitud de la cadena: ";
    cin >> a;
    cadena = new char[a+1];
    fflush(stdin);
    cout <<"Ingrese la cadena de caracteres: ";gets(cadena);
    eliminar_caracteresP7(cadena,a);
    delete cadena;
}

void eliminar_caracteresP7(char *A, int a){
    char *nuevo=new char[a+1];
    nuevo[0]='\0';
    for(int i=0;A[i]!='\0';i++){
        for(int k=0;A[i]!=nuevo[k];k++){
            if(nuevo[k]=='\0'){
                cout << A[i];
                nuevo[k]=A[i];
                nuevo[k+1]='\0';
                break;
            }
        }
    }
    cout << endl;
}
