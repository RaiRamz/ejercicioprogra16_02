
#include <iostream>
#include <math.h>

int main()
{
	/*
	//Fibonacci
	int num = 0; //variable para saber hasta donde llega la sucesion
	int fibo = 0; //esta y la variable de abajo se usan para hacer funcionar la sucesion
	int uno = 1;
	std::cout << "Hola, hasta que numero quieres que llegue la sucesion de fibonacci?" << std::endl; //pregunto hasta que numero llegara la sucesion de fibonacci
	std::cin >> num;
	do
	{
		std::cout << fibo << std::endl; //imprimo la sucesion
		uno += fibo; //aqui sumo fibo mas uno
		fibo = uno - fibo; // y le resto uno a fibo
	} while (num >= fibo);

	//Area de rombo
	std::cout << "Listo!, ahora pasemos al area del rombo." << std::endl;
	int dmen, dmay, a; //el area de un rombo se calcula multiplicando diagonal mayor por diagonal menor entre dos, aqui lo declaro.
	std::cout << "Dame la diagonal mayor del rombo: " << std::endl;
	std::cin >> dmay; //aqui pido diagonal mayor
	std::cout << "Dame la diagonal menor del rombo: " << std::endl;
	std::cin >> dmen; //aqui la menor
	a = dmay * dmen; //multiplico ambas
	a /= 2; //el resultado lo divido entre dos
	std::cout << "El area es: " << a << std::endl;

	//Numero par e impar
	std::cout << "Listo!, ahora pasemos a numeros par e impar." << std::endl;
	int num = 0;
	std::cout << "Dame un numero: " << std::endl;
	std::cin >> num;
	if (num % 2 == 0) //aqui uso el simbolo % que es para hacer la operacion modular, se checa que el residuo de la operacion modular sea 0, si es el caso, es par, pues un par divido entre 2 siempre da residuo, en caso contrario es impar.
	{
		std::cout << "Tu numero es par" << std::endl;
	}
	else
	{
		std::cout << "Tu numero es impar" << std::endl;
	}

	//Factoriales
	std::cout << "Listo!, ahora pasemos a las factoriales" << std::endl;
	*/
	int fact = 1; //inicializo el resultado en uno, para que se multiplique desde 1
	int factlenght = 0; //el numero hasta el que se va a multiplicar, o sea, el numero al que le vamos a sacar factorial
	std::cout << "Dame el numero que quieres que le saque factorial." << std::endl;
	std::cin >> factlenght;
	for (int i = 1; i <= factlenght; i++) //se iniclializa i en 1 porque lo vamos a multiplicar i por fact, se pone <= que el factorial pedido para que hasta que i llegue a ese numero se siga multiplicando y no pare uno antes.
	{
		fact *= i; //mi resultado lo multiplico por i, que va sumando 1 cada vez
	}
	std::cout << "El resultado es: " << fact;

	//Problema 5
	double	n = 0, m = 0, r = 0; //declaro como double en caso de que el resutlado de decimales.
	std::cout << "Resolveremos esta operacion (y/x)^(x+y)/√y" << std::endl;
	std::cout << "Digete un x pls" << std::endl;
	std::cin >> n;
	std::cout << "Digete un y pls" << std::endl;
	std::cin >> m;
	
	r = m / n;
	r = pow(r, m + n); //pow se usa para potencias, primero pones el numero que quieres que se potencie y luego el exponente
	r /= sqrt(m); //sqrt se usa para raiz cuadrada, se pone el dato que quieres que se le saque la raiz
	std::cout << "El resultado es: " << r;
}