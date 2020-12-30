/*

Este e um simples programa que utiliza as estruturas de condicao IF e ELSE
para simular um caixa.

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
