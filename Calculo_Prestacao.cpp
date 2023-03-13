#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int linha = -1;
double valorprincipal [5]; int dias [5]; double ValorPagar [5], Total;
double _valorprincipal;
int _Dia;

void principal();
void novaLinha();
void mostrar();


int main(){
	
	setlocale(LC_ALL,"portuguese");
	principal();	
}

void principal() {
  int item=0;
  bool flag = true; 
  // controle de menu
  do 
  {
    system("cls");
    cout << "\n***Menu de Controle***";
    cout << "\n1 Adicionar Linha\n2 Finalizar\nitem>";
    cin >> item; 

    switch(item){
        case 1: novaLinha();
                break;
        
        case 2: flag = false;
        		break;
        
		default : cout << "\nErro de opção!\n";
                  break;
      }
  } while ( flag );
  
  mostrar();
}


float CalculoValorPagar(){
    if (dias[linha] >= 30){
        // Utilização de Juros Simples
        int meses_em_atraso = dias[linha] / 30.0;
        float multa = 1.0 + meses_em_atraso * 0.01;
        Total = (valorprincipal[linha] * (multa + 0.02));
        return Total;
    }
    else{
        Total = (valorprincipal[linha] * 1.02);
        return Total;  
    }
}

void novaLinha(){
	linha ++;
	cout << "Insira o valor a ser calculado: ";
	cin >> _valorprincipal;
	cout << "Insira a quantidade de dias em atraso: ";
	cin >> _Dia; 
	valorprincipal[linha] = _valorprincipal;
	dias[linha] = _Dia; 
    ValorPagar[linha] = CalculoValorPagar();
	}

void mostrar ( ) {

for ( int i = 0; i<=linha; i++){
 cout << endl << valorprincipal[i] << " - ";
 cout << dias[i] << " - " << ValorPagar[i]; 
 }

}

