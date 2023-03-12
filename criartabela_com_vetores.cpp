#include <iostream>
#include <locale.h>
using namespace std;

int linha = -1;
string nome [4]; int idade [4]; double salario [4];

void principal();
void novaLinha(string nom, int ida, double sal);
void mostrar();


int main(){
	
	setlocale(LC_ALL,"portuguese");
	principal();	
}

void principal() {
  int item=0;
  int media;
  bool flag = true; 
  // controle de menu
  do 
  {
    system("cls");
    cout << "\n***Menu de Controle***";
    cout << "\n1 Adicionar Linha\n2 Finalizar\nitem>";
    cin >> item; 

    switch(item){
        case 1: novaLinha("Matheus",19,1000.00);
                break;
        
        case 2: flag = false;
        		break;
        
		default : cout << "\nErro de opção!\n";
                  break;
      }
  } while ( flag );
  
  mostrar();
}

void novaLinha(string nom, int ida, double sal){
	linha ++;
	cout << "Insira o nome: ";
	cin >> nom;
	cout << "Insira a idade: ";
	cin >> ida;
	cout<< "Insira o salário: ";
	cin >> sal; 
	nome[linha] = nom;
	idade[linha] = ida;
	salario[linha]= sal; 
	}

void mostrar ( ) {

for ( int i = 0; i<=linha; i++){
 cout << endl << nome[i] << " - ";
 cout << idade[i] << " - " << salario [i]; 
 }
}