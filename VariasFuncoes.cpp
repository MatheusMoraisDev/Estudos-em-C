#include <iostream>
#include <math.h>
#include <cstdlib>
#include <string>

using namespace std;

int idade[] = { 5, 18, 19, 30, 45, 60 };
string nomes[6];
int maior = 0, menor = 0;
float media = 0;


void maiorMenor();
void principal ();
float MediaVetor();
void Mostrar();
void RegistrarNomes();


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
    cout << "\n1 Executar\n2 Sair\nitem>";
    cin >> item; 

    switch(item)
      {
        case 1: 
                RegistrarNomes();
                maiorMenor();
                media = MediaVetor(); // atribui o valor retornado da função à variável media
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
 
void RegistrarNomes(){
  int tamanho = 6;
  for(int i = 0; i < tamanho; i++){ 
      cout << "Digite o nome " << i+1 << ": ";
      cin >> nomes[i];
  }
}

float MediaVetor (){
  float media = 0;
  int tot = sizeof(idade)/sizeof(int);
  for (int i = 0; i< tot; i++){ 
      media += idade[i]; 
  }
  media /= tot;
  return media; // retorna o valor calculado da média
}

void Mostrar(){

  int tamanho = 6;
  for(int i = 0; i < tamanho; i++){

    cout << "\n" << nomes[i] << " - " << idade[i] << " anos";

  }
  cout << "\n\nMaior: " << maior << " anos";
  cout << "\nMenor: " << menor << " anos";
  cout << "\nMédia: " << media << " anos" << endl;
}
