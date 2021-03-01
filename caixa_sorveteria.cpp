/*
Pequeno programa  que utiliza as estruturas de condição IF e ELSE para simular um caixa de sorveteria.
*/

/*
* Author:  Igor Vinicius Freitas de Souza
* GitHub: https://github.com/igor1043
* E-mail: igorviniciusfreitasouza@gmail.com
*/
#include<iostream>

using namespace std;
int t1=0;
int t2=0;
int t3=0;
int quant;
int tipo;

int main()
{
	while(tipo<0)

		cout<<"\nDigite o tipo";
		cin>> tipo;
		cout<<"\nDigite a quantidade";
		cin>> quant;

		if(tipo=1)
			t1=t1+quant;
		else
			if(tipo=2)
				t2=t2+quant;
			else
				if(tipo=3)
					t3=t3+quant;

	cout<<"\n\n";
	return 0;

}
