#include <iostream>
#include<string>
#include <ctime>
using namespace std;

int main()
{
	//declarando variaveis
	bool sair = false;
	string jog1, jog2;
	int vida1 = 20, vida2 = 20;
	int atqmax1 = 3, atqmax2 = 3;
	int def1 = 1, def2 = 1;

	//perguntar o nome do jogador 1
	cout << "Digite o nome do jogador 1:" << endl;
	cin >> jog1;

	//perguntar o nome do jogador 2
	cout << "Digite o nome do jogador 2:" << endl;
	cin >> jog2;

	//loop de repetição para continuar as partidas
	while (sair == false)
	{
		//criando corpos dos personagens
		cout << " o                        o" << endl;
		cout << ".T./                    \\.T." << endl;
		cout << " ^                        ^" << endl;
		cout << jog1 << "                    " << jog2 << endl;
		
		cout << "Vida: " << vida1 << "                 " << "Vida: " << vida2 << endl;
		cout << "Defesa: " << def1 << "		 " << "Defesa: " << def2 << endl;
		cout << "Ataque maximo: " << atqmax1 << "         " << "Ataque maximo: " << atqmax2 << endl;
		system("pause");
		system("cls");

		//adicionando variavel
		int dado6;

		//Adicionando semente ao gerador de números aleatórios.
		srand((int)time(0));
		// A variável dado 6 recebe um valor aletório entre 1 e 6.
		dado6 = rand() % 6 + 1;
		//informando que é a vez do jogador 1 jogar
		cout << "Vez do jogador 1" << endl;
		system("pause");
		system("cls");

		//Duelo: se o dado for maior que 4 ou dado for igual a 0 o jogador errou o alvo.
		if (dado6 > 4 || dado6 == 0) {
			cout << "Que pena, voce errou" << endl;
			cout << jog1 << " espere sua proxima jogada..." << endl;
			system("pause");
			system("cls");
		}

		//Se o do for menor ou igual a 4 com exceção do 0 o jogador 1 acertou o oponente.
		else if (dado6 <= 4) {
			dado6 = dado6 - def2;
			cout << " \\o/ Voce acertou! //" << " - " << dado6 << " pontos de vida ao jogador: " << jog2 << endl;
			vida2 = vida2 - dado6;
			cout << jog1 << " espere sua proxima jogada" << endl;
			system("pause");
			system("cls");
		}

		// Mesma coisa para o jogador 2
		dado6 = rand() % 6 + 1;

		cout << "Vez do jogador 2" << endl;
		system("pause");
		system("cls");

		if (dado6 > 4) {
			cout << "Que pena, voce errou" << endl;
			cout << jog2 << " espere sua proxima jogada..." << endl;
			system("pause");
			system("cls");
		}

		else if (dado6 <= 4) {
			dado6 = dado6 - def1;
			cout << "\\o/ Voce acertou! //" << " - " << dado6 << " pontos de vida ao jogador: " << jog1 << endl;
			vida1 = vida1 - dado6;
			cout << jog2 << " espere sua proxima jogada" << endl;
			system("pause");
			system("cls");
		}

		// Atualização da vida dos dois jogadores.
		cout << "O jogador 1 tem: " << vida1 << " pontos de vida." << "    /     " << "O jogador 2 tem: " << vida2 << " pontos de vida." << endl;
		system("pause");
		system("cls");

		//Encerrando o laço caso a vida de algum jogador seja 0.
		if (vida1 <= 0 || vida2 <= 0)
		{
			sair = true;
		}
	}
	//Resultado final.
	if (vida1 > 0)
	{
		cout << "Parabens " << jog1 << " voce venceu! " << endl;
	}

	else if (vida2 > 0)
	{
		cout << "Parabens " << jog2 << " você venceu! " << endl;
	}

	else {
		cout << "Os dois perderam" << endl;
	}

	return 0;
}