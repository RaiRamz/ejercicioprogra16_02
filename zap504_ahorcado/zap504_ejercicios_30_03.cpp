//Juego de ahorcado, triangulo de pascal, matriz, anagrama
#include <iostream>
#include <string.h>
#include <cstdlib>
#include <time.h>	

int main()
{
	srand((unsigned int)time(NULL));
	std::string palabras[5] = { "POLLO", "RELOJ", "MAPAS", "BANCO", "PASTA" };

	//variable para almacenar el intento de adivinanza del usuario
	char letraGuess;

	//variable para contar los aciertos del jugador
	int aciertos = 0;

	//variable para contar las vidas del jugador
	int vidas = 3;

	//palabra escogida al azar
	int randP = rand() % 5;

	//booleano para saber cuando terminar el juego
	bool enPartida = true;
	
	//booleano para saber si acerto
	bool acerto = false;

	//letra de la palabra escogida que se usara de pista
	int randL = rand() % palabras[randP].length();
	int randL2 = rand() % palabras[randP].length();
	do
	{
		int randL2 = rand() % palabras[randP].length();
	} while (randL2 == randL);
	
	std::cout << "Wola, este es un juego de ahorcado, tienes 3 intentos para adivinar la palabra, si fallas 5 veces, se acaba el juego." << std::endl;
	std::cout << "Te dare dos pista para ayudarte;))" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		if (i == randL) 
		{
			std::cout << " " << palabras[randP][randL] << " ";
		}
		else if(i == randL2)
		{
			std::cout << " " << palabras[randP][randL2] << " ";
		}
		else
		{
			std::cout << " _ ";
		}
	}
	std::cout << "Despues de ver la pista, comenzamos." << std::endl;
	do
	{
		std::cout << "\nEscribre una letra: ";
		std::cin >> letraGuess;
		for (int i = 0; i < 5; i++)
		{
			if (letraGuess == palabras[randP][i] && letraGuess != palabras[randP][randL] && letraGuess != palabras[randP][randL2])
			{
				acerto = true;
			}
		}
		if (acerto)
		{
			std::cout << "Acertaste:)\n";
			aciertos++;
		}
		else
		{
			std::cout << "Fallaste:(\n";
			vidas--;
		}
		std::cout << "La palabra va asi: \n";
		for (int i = 0; i < 5; i++)
		{
			if (i == randL)
			{
				std::cout << " " << palabras[randP][randL] << " ";
			}
			else if (i == randL2)
			{
				std::cout << " " << palabras[randP][randL2] << " ";
			}
			else if (letraGuess == palabras[randP][i])
			{
				std::cout << " " << letraGuess << " ";
			}
			else
			{
				std::cout << " _ ";
			}
		}
		std::cout << std::endl;
		if (vidas == 0)
		{
			std::cout << "Has perdidio:(\n";
			enPartida = false;
		}
		if (aciertos == 3)
		{
			std::cout << "Has ganado!!!\n";
			enPartida = false;
		}
		system("pause");
	} while (enPartida);
		


}

