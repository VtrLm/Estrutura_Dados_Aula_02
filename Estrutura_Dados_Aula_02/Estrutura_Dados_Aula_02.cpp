#include <iostream>
using namespace std;

int main()
/*{
	int numero = 0;
	cout << "Digite um numero ";
	cin >> numero;

	if ((numero % 2) == 0) {
		cout << "O numero e par";
	}
	else {
		cout << "O numero e impar";
	}



	return 0;
}*/

/*{
	double nota = 0;
	for (int i = 0; i < 10; i++) {

		cout << "Digite a nota do aluno(a) ";
		cin >> nota;
		cout << "A nota do aluno(a) = " << nota;
		cout << "\n";
	}

	return 0;
}*/

/*{
	int nota[10];
	for (int i = 0; i < 10; i++) {
		cout << "Digite a nota do aluno(a) " << i + 1 << ":";
		cin >> nota[i];
	}
	for (int i = 0; i < 10;i++) {
		cout << "\nA nota [" << i + 1 << "]:" << nota[i];
	}
}*/

/*{
	double nota1[10], nota2[10], media[10];

	for (int i = 0;i < 10;i++) {
		cout << "Digite a primeira nota do aluno " << i + 1 << ":";
		cin >> nota1[i];
		cout << "Digite a segunda nota do aluno " << i + 1 << ":";
		cin >> nota2[i];
		media[i] = ((nota1[i] + nota2[i]) / 2);
	}
	for (int i = 0; i < 10;i++) {
		cout << "\nA media do aluno [" << i + 1 << "]:" << media[i];
	}
}*/

/*{
	double temp[10], maiortemp, dia = 0;
	for (int i = 0;i < 10;i++) {
		cout << "Digite a temperatura do dia " << i + 1<<" em graus celsius ";
		cin >> temp[i];
	}
	maiortemp = temp[0];
	for (int i = 0;i < 10;i++) {
		if (temp[i] > maiortemp) {
			maiortemp = temp[i];
			dia = i + 1;
		}
	}
	cout << "A maior temperatura ocorreu no dia [" << dia << "] e foi de " << maiortemp << " graus.";
}*/

/*{
	double temp[10], maiortemp, menortemp, diamaior = 0, diamenor, media = 0;
	for (int i = 0;i < 10;i++) {
		cout << "Digite a temperatura do dia " << i + 1 << " em graus celsius ";
		cin >> temp[i];
	}
	maiortemp = temp[0];
	menortemp = temp[0];
	for (int i = 0;i < 10;i++) {
		if (temp[i] > maiortemp) {
			maiortemp = temp[i];
			diamaior = i + 1;
		}
		if (temp[i] < menortemp) {
			menortemp = temp[i];
			diamenor = i + 1;
		}
	}
	media = ((maiortemp + menortemp) / 2);
	cout << "A maior temperatura ocorreu no dia [" << diamaior << "] e foi de " << maiortemp << " graus";
	cout << "\nA menor temperatura ocorreu no dia [" << diamenor << "] e foi de " << menortemp << " graus";
	cout << "\nA media entre a maior e a menor temperatura e de " << media << "graus";
}*/

/*{
	double n[10], soma = 0;
	for (int i = 0; i < 10; i++) {
		cout << "Digite o numero:";
		cin >> n[i];
		soma = soma + n[i];
	}
	cout << "A soma dos valores = " << soma;
}*/

/*{
	int vetor[5], troca;
	for (int i = 0; i < 5; i++) {
		cout << "Digite o valor: ";
		cin >> vetor[i];
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (vetor[i] < vetor[j]) {
				troca = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = troca;
			}
		}
	}
	for (int i = 0; i < 5; i++) {
		cout << "\nVetor: " << vetor[i];
	}
}*/