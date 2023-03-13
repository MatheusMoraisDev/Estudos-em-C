//Crie um algoritmo que tenha um vetor explícito para armazenar 5 idades e um vetor não explícito para 
//armazenar 5 nomes. Ao final exiba o nome da pessoa de maior idade, menor idade, a média das idades 
//é o saldo das idades.

#include "iostream"
#include "math.h"
#include "cstdlib"
using namespace std;

int idade [] = { 5, 18, 19, 30, 45 };
string nomes[5];
int maior=0, menor=0;

 
void maiorMenor();
void principal ();
void Mostrar();


int main () 
{ 
  setlocale(LC_ALL, "Portuguese");
  principal();
  return 0; 
}

void principal() 
{
  int item=0;
  // controle de menu
  do 
  {
    system("cls");
    cout << "\n***Menu de Controle***";
    cout << "\n1 Registrar Nomes\n 2 Maior e Menor\n 3 Média\n0 Finalizar\nitem>";
    cin >> item; 

    switch(item)
      {
        case 1: maiorMenor();
                Mostrar();
                system("PAUSE");
                break;
        
        case 2: exit(0);
                break;
        
        default : cout << "\nErro de opção!\n";
                  break;
      }
  
  } while ( true );
}

void maiorMenor () 
{
  int tot = sizeof(idade)/sizeof(int);
  
  for (int i = 0; i< tot; i++) 
  {
    if ( idade[i] > maior || i == 0 ) 
    { 
      maior = idade[i];
    }
    
    if ( idade[i] <menor || i == 0 ) 
    {
      menor = idade[i];
    }
}
}

void Mostrar(){

cout << "\nMaior:" << maior;
cout << "\nMenor" << menor << endl;
}