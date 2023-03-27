#include <iostream>

using namespace std;

int estrellas(int (*foto)[8]);

int main()
{
    {
        int galaxia_NGC_1300[][8]={
                         {0, 3, 4, 0, 0, 0, 6, 8},
                        {5, 13, 6, 0, 0, 0, 2, 3},
                        {2, 6, 2, 7, 3, 0, 10, 0},
                        {0, 0, 4, 15, 4, 1, 6, 0},
                        {0, 0, 7, 12, 6, 9, 10, 4},
                        {5, 0, 6, 10, 6, 4, 8, 0}};
        int numero_estrellas =0;
        numero_estrellas= estrellas(galaxia_NGC_1300);
        cout << "El numero de estrellas encontradas es: " << numero_estrellas << endl;
    }
}

int estrellas(int (*foto)[8])
{
    float division=0;
    float suma=0;
    int contador =0;
    for (int f=1;f<5;f++) {
        for (int c=1;c<7;c++) {
            suma = foto[f][c]+foto[f][c-1]+foto[f][c+1]+foto[f-1][c]+foto[f+1][c];
            division = suma / 5 ;
            if (division > 6){
                contador++;
            }
        }
    }
    return contador;
}
