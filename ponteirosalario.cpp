#include <iostream>
#include <cstdlib>
#include <locale.h>
#define n 2
using namespace std;
typedef struct Myfuncionarios funcionarios;
struct Myfuncionarios
{
    string nome[n];
    string gen[n];
    int idade[n];
    double salario[n];
    double salarioNovo[n];
};

void ler_nome();
void ler_idade();
void ler_sexo();
void ler_salario();
void getAumento();

funcionarios tb;
funcionarios *ptb = &tb;
int linha = -1;
void newLinha(){
    ++linha;
    ler_nome();
    ler_idade();
    ler_sexo();
    ler_salario();
    getAumento();
    
}

void ler_idade(){
    int ida;
        cout << "Idade:";
        cin >> ida;
        ptb -> idade[linha] = ida;
}

void ler_nome(){
    string nom;
        cout << "Nome:";
        cin >> nom;
        ptb -> nome[linha] = nom;
}

void ler_sexo(){
    string sex;
        cout << "Sexo:";
        cin >> sex;
        ptb -> gen[linha] = sex;
}

void ler_salario(){
    double sal;
        cout << "Salário:";
        cin >> sal;
        ptb -> salario[linha] = sal;
}

void getAumento(){
    double salnovo;
    salnovo = ptb -> salario[linha] * 1.10;
    ptb->salarioNovo[linha] = salnovo;
}

void exibir() {

system("cls");
cout << "*** Exibição de Dados ***\n";
for (int i = 0; i <= linha; i++){

    cout<< "\n" << ptb -> nome[i] << "\nIdade: "<< ptb -> idade[i] << "\nSexo: " << ptb -> gen[i] << "\nSalário: " << ptb -> salario[i] << "\nSalário Novo: " <<ptb -> salarioNovo[i] << endl;
    system("PAUSE");
    system("cls");
}

}

int menu() {
    int tecla;
    do{
        system("cls");
        cout << "\n Menu\n 1 Nova Linha\n 2 Mostrar\n 3 Sair \nOpção: ";
        cin >> tecla; 
        switch (tecla)
        {
        case 1:
            system("cls");
            newLinha();
            break;
        
        case 2:
            exibir();
            break;
        
        default:
            cout << "Erro de Opção!";
            system("PAUSE");
            break;
        } 
    }while (tecla != 3);
    system("CLS");
    cout << "\nPrograma Finalizado...!\n";
}

int main(){

    setlocale(LC_ALL, "portuguese");
    menu();
    return 0;
}