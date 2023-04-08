#include <iostream>
#include <locale.h>
#define max 3
using namespace std;
typedef struct lifo pilha;

struct lifo{ 
    int topo;
    string nome[max];
    int idade[max]; 
    float sal[max];
    };

string lerNome(){
    string nom;
    cout << "\nDigite o o seu nome: ";
    cin >> nom; 
    return nom; 
    }

int LerIdade(){
    int ida;
    cout << "\nDigite a sua idade: ";
    cin >> ida; 
    return ida;
}

float LerSalario(){
    float sa;
    cout <<"\nDigite o seu salário: ";
    cin>> sa;
    return sa;
}

bool pilhaCheia(pilha p){
     if (p.topo == max - 1)
        return true;
        return false; 
    }

bool pilhaVazia(pilha p){ 
    if (p.topo==-1)
        return true;
        return false; 
    }

pilha push (int ida, string nom, float sa, pilha p) {
    if ( pilhaCheia ( p ) == true) {
        cout << "\nPilha Cheia\n";
        system("pause");
        return p; 
    }
    p.topo ++;
    p.nome[p.topo] = nom;
    p.idade[p.topo] = ida;
    p.sal[p.topo] = sa;
    cout << "\nOs valores empilhados foram: \nNome: " << nom << "\nIdade: " << ida << "\nSalário" << sa << endl;
    system("pause");
    return p; 
    }

pilha pop (pilha p) {
    if (pilhaVazia(p) == true){
         cout << "\nA pilha já está vazia!";
        system("pause"); 
        return p; 
    }
    cout << "\nO valores desempilhados ser?o:" << p.nome[p.topo] <<"\n"<< p.idade[p.topo] <<"\n" << p.sal[p.topo] << endl;
    system("pause");
    p.nome[p.topo] = '\0';
    p.idade[p.topo] = '\0';
    p.sal[p.topo] = '\0';
    p.topo --; 
    return p; 
    }

void mostrarPilha (pilha p) {
    if (pilhaVazia(p) == true){ 
        cout << "\nA pilha está vazia!";
        system("pause"); 
        return; 
    }
    
    for (int i=p.topo; i>=0; i--){
        cout << "\n" << p.nome[i] << endl;
        cout << p.idade[i] << endl; 
        cout << p.sal[i] << endl;
        cout << "\n\n"; 
        system("pause");
    }
}

int tela() {
    int tecla;
    system("cls");
    cout << "\n Menu\n 1 Push\n 2 Pop\n 3 Mostrar pilha\n 4 Sair\n Item:";
    cin >> tecla; 
    return tecla; 
}

void controlarPilha (pilha p){
    int tecla, ida;
    float sa;
    string nom;
    pilha p1;
    p1.topo = -1;
    do { 
        tecla = tela();
        switch(tecla) {
            case 1:
                nom = lerNome();
                ida = LerIdade();
                sa = LerSalario();
                p1 = push(ida, nom, sa, p1);
                break;
            case 2: 
                p1 = pop(p1); 
                break;
            case 3: 
                mostrarPilha ( p1 ); 
        }
    } while (tecla != 4); 
    cout << "\nPrograma Finalizado...!\n"; }
    
    int main() { 
        setlocale(LC_ALL, "portuguese");
        pilha p1;
        controlarPilha (p1);
        return 0; 
    }