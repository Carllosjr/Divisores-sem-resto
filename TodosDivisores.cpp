#include <iostream>
using namespace std;

int main()
{
	int numero, i, resto;
	
	do{
		cout << "Digite um numero positivo ou -1 para sair: ";
		cin >> numero;
			
			//enquanto a condição for positiva ela continua
		for (i = 1; i <= numero; i++){
			
			//resto recebe o resto da divisão pelo contador i
			resto = numero % i;
			
			// se o resto for igual a 0 cai nessa condição
			if (resto == 0){
				cout << i << "-";
			}
		}
		cout << endl;
	}
	//sai somente quando o usuário digitar -1
	while (numero != -1);	
}
