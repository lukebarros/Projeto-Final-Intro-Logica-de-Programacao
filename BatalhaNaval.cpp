#include<iostream>
#include<cctype> 

using namespace std;

//Vetor de coordenadas
char coord[20];

//Definição de coordenadas do tabuleiro
void tabela(){
        for(char i='A';i<='P';i++)
            {
                //Quebra de Linha
                cout << i << coord[i] << "\t";
                    if (i == 'D' || i== 'H' || i=='L' || i=='P') 
                        cout << "\n"; 
            }
}
int main(){
    int vitoria = 0, agua = 0;
    char bomba;
    cout << "------ Batalha Naval 0.2 ------\n";
    for(int i = 0;i<16;i++) //Total de jogadas possíveis
        {
            tabela();//Exibe o tabuleiro com as coordenadas
            cout << "Digite as coordenadas de ataque: ";
            cin >> bomba;
            bomba = toupper(bomba); //converte variavel bomba em letra maiúscula, biblioteca cctype

             /* Condicionais para definir a posição dos navios, o código foi feito de forma que
              seja possível alterar a posição dos navios somente modificando (bomba == 'letra') */
            if (bomba == 'I'){
                cout << "\n--- Navio abatido (coordenada " << bomba << ") ---\n";
                vitoria += 1;
                coord[bomba] = '#'; 
            }
            else if (bomba == 'J'){
                cout << "\n--- Navio abatido (coordenada " << bomba << ") ---\n";
                vitoria +=1;
                coord[bomba] = '#';
            }
            else if (bomba == 'K'){
                cout << "\n--- Navio abatido (coordenada " << bomba << ") ---\n";
                vitoria +=1;
                coord[bomba] = '#';
            }
            else {
                cout << "\n------ AGUA (coordenada " << bomba << ") ------\n";
                agua +=1;
                coord[bomba]='~';
            }
        //Condição de vitória ou derrota
        if (vitoria == 3){
            tabela();
            cout << "\nParabens, voce destruiu todos os navios!\n";
            break; 
            }
        else if (agua == 10){
            tabela();
            cout << "\nVoce falhou em destruir os navios.\n";
            break;
            }
        } 
    system("pause");         
}
