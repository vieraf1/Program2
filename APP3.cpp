#include "iostream"
#include "cstdlib"
#include "math.h"
#include "string.h"
#include "conio.h"
#include "windows.h" 
#include <iomanip>
#define pi 3.14
using namespace std;
int main(){
    double p,r,d,a;
    setlocale (LC_ALL, "portuguese");
    
	char tecla = '0';
	
	while(tecla != 27)
	
	{
                system("cls");
                cout << "\n1 - Ler\
                         \n2 - C�lculos\
                         \n3 - Exibir\
                         \nESC - Sair\n\n\n";
                tecla = getch(); //Capturar(c�digo)
    switch(tecla){
                 case '1':
                      {
                          system("cls");
                          cout << "\nPer�metro: ";cin >> p;
                          break;
                      }
                 
                 case '2':
                      {
                          d = p / pi;
                          r = d/2;
                          a = r * r * pi;
                          cout << "\nCalculando...";
                          Sleep(2000);
                          cout << "\nC�lculo feito! ";
                          system("pause");
                          break;
                      }
                 
                 case '3':
                      {
                          system("cls");
                          cout << "\n **Tela Sa�da** \n";
                          cout << "\n";
                          cout << "\nPer�metro: " << p;
                          cout << "\nDiametro: " << setprecision(5) << d;
                          cout << "\n�rea: " << setprecision(5) << a;
                          cout << "\n";
                          system("pause");
                          break;
                      }                      
                 case '4': 
                         break; 
    }
    }
    system("pause");
    return 0;
}
                
	
