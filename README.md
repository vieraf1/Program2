# Programa 2

Linguagem Utilizada: C++.

Programa que faz a leitura do perímetro de uma circunferência, calcula e retorna o diâmetro e a área dessa mesma circunferência.

Programa Desenvolvido no Dev c++ IDE. 

Código:

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
                         \n2 - Cálculos\
                         \n3 - Exibir\
                         \nESC - Sair\n\n\n";
                tecla = getch(); //Capturar(código)
    switch(tecla){
                 case '1':
                      {
                          system("cls");
                          cout << "\nPerímetro: ";cin >> p;
                          break;
                      }
                 
                 case '2':
                      {
                          d = p / pi;
                          r = d/2;
                          a = r * r * pi;
                          cout << "\nCalculando...";
                          Sleep(2000);
                          cout << "\nCálculo feito! ";
                          system("pause");
                          break;
                      }
                 
                 case '3':
                      {
                          system("cls");
                          cout << "\n **Tela Saída** \n";
                          cout << "\n";
                          cout << "\nPerímetro: " << p;
                          cout << "\nDiametro: " << setprecision(5) << d;
                          cout << "\nÁrea: " << setprecision(5) << a;
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
                
	
