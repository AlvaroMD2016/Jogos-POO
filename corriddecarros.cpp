//Corrida de carros
#include <iostream> 
#include <string>// Acessando a biblioteca do comando string
#include <ctime>// Permitindo gerar um numero aleatorio
using namespace std;

//Identificando a fun��o
void imprimir_espacos(int total1);

//fun��o principal do jogo
int main(int argc, char* args[])
{
	// Variavel boleana para usar no laco while
	bool sair = false;

	//Variavel string para salvar os nomes dos jogadores
	string jog1, jog2;

	//Variavel para definir a quantidade de espacos inicial de cada carrinho e tamb�m fazer uma adi��o a cada rodada
	int total1 = 0, total2 = 0;

	//Solicitando para que o primeiro jogador digite seu nome
	cout << "Digite o nome do jogador 1:" << endl;
	// Salvando o nome digitado na variavel jog1
	cin >> jog1;
	//Solicitando para que o segundo jogador digite seu nome
	cout << "Digite o nome do jogador 2:" << endl;
	// Salvando o nome digitado na variavel jog2
	cin >> jog2;

	//Usando o la�o para determinar a hora de parar.(Usando a variavel boleana como condi��o)
	while (sair == false)
	{
		// Variavel que define o tamanho da pista da corrida
		int total_espacos = 80;

		//Calculando para gerar um numero aleatorio
		srand((int)time(0));

		//Para o jogador 1: Gera um numero aleatorio entre 1 e 3
		total_espacos = rand() % 3 + 1;

		total1 = total1 + total_espacos;

		//Para o jogador 2: Gera um numero aleatorio entre 1 e 3
		total_espacos = rand() % 3 + 1;

		total2 = total2 + total_espacos;

		//Imprimindo na tela o carro, a chegada e o nome dos jogadores

		cout << "Formula 1" << endl;

		cout << "Saida:                                                               CHEGADA:" << endl;

		// Imprimindo o nome do primeiro jogador
		cout << "Piloto 1:" << jog1 << endl;
		//Usando o numero aleatorio gerado no Total1 para definir a qntd de espa�os
		imprimir_espacos(total1);
		// parte de cima do carro
		cout << "  _  " << endl;
		//Usando o numero aleatorio gerado no Total1 para definir a qntd de espa�os
		imprimir_espacos(total1);
		//Restante do carro
		cout << "-o--o>" << endl;
		//Imprimindo a pista 
		cout << "_______________________________________________________________________________" << endl;

		//Total de espa�os do piloto 1
		cout <<"Espa�os que andou: " << total1 << endl;

		// Imprimindo o nome do segundo jogador
		cout << "Piloto 2:" << jog2 << endl;
		//Usando o numero aleatorio gerado no Total2 para definir a qntd de espa�os
		imprimir_espacos(total2);
		// parte de cima do carro
		cout << "  _  " << endl;
		//Usando o numero aleatorio gerado no Total2 para definir a qntd de espa�os
		imprimir_espacos(total2);
		//Restante do carro
		cout << "-o--o>" << endl;
		//Imprimindo a pista 
		cout << "_______________________________________________________________________________" << endl;

		//Total de espa�os do piloto 2
		cout << "Espa�os que andou: " << total2 << endl;

		//Atualizando a tela a cada rodada
		system("cls");

		//Se sair n�o limpa a tela.
		//Condi��o para fazer a condi��o do la�o ficar falsa, e logo ap�s o jogo parar
		if (total1 >= 80 || total2 >= 80)
		{
			//Mudando o la�o
			sair = true;

		}

		//Se continuar limpa a tela.
		else system("cls");


	}

	//Quando sair do la�o mostra que o jogo acabou
	cout << "Poxa, o jogo chegou ao fim  :(  " << endl;

	//Define qual jogador ganhou, ou se tiver ocorrido empate

	//Caso o jog1 ganhe
	if (total1 >= 80) cout << jog1 << ", Parabens, voce venceu!" << endl;

	//Caso o jog 2 ganhe
	else if (total2 >= 80) cout << jog2 << ", Parabens, voce venceu !" << endl;

	//Em caso de empate
	else cout << "EMPATOU!" << endl;

	//Retorna ao inicio
	return 0;

}


//Usando o super poder void

void imprimir_espacos(int total)  
{
	// La�o for porque n�o sabe a hora que vai parar.
	for (int qntd_espacos = 0; qntd_espacos < total; qntd_espacos++)
	{
		//Espa�o que ser� impresso dependo do numero aleatorio escolhido
		cout << " ";


	}
}