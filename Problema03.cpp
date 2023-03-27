#include <iostream>

using namespace std;
void retornoP3(char *a,char *b,int c, int d);
int main()
{
    {
        char *palabra1,*palabra2;
        palabra1= new char[5];
        palabra1="hola";
        int tama1=5;
        palabra2= new char[5];
        palabra2="hola";
        int tama2=5;
        retornoP3(palabra1 , palabra2 , tama1, tama2);
        delete [] palabra1,palabra2;
    }
}

void retornoP3(char *a,char *b,int c, int d)
{
   bool s=true;
   if (c!=d) s=false;

   else {
       for (int i=0;i<c;i++){
           if (*(a+i)!=*(b+i)) s=false;
       }
   }
   if (s==false) cout << "\n Las palabras son diferentes"<<endl;
   if (s==true) cout << "\ Las palabras son iguales" <<endl;
}
