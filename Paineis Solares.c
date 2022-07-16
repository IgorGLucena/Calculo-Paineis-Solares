#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	// Programa para Calculo de Quantos Paineis Solares para Consumo de Energia
	float consumo, hsp;
	float TamanhoSistema;
	int PotPlaca;
	float qtdPlacas, TamSis;
	
	printf("\n\t\t Software Desenvolvido por Igor Lucena \n");
	printf("\n\t\t\t     MENU INICIAL \n\n");
	printf("\n\n\t Vamos medir o Tamanho do Sistema");
	printf("\n\n\t Digite o Consumo KWh mes: ");
	scanf("%f",&consumo);
	printf("\n\t Digite o valor da Hora de Sol Pleno (Manaus = 5.5): ");
	scanf("%f",&hsp);
	printf("\n\t Digite a Potencia em W da placa solar que sera utilizada: ");
	scanf("%d",&PotPlaca);
	
	TamanhoSistema =  ((consumo / 30) / hsp) * 1.20;
	TamSis = TamanhoSistema * 1000;
	qtdPlacas = TamSis / PotPlaca;
	
	system("cls");
	printf("\n\n\t Consumo: %.0f KWh mes",consumo);
	printf("\n\n\t Hora de Sol Pleno: %.2f",hsp);
	printf("\n\n\t Potencia da Placa: %d W",PotPlaca);
	printf("\n\n\t Tamanho do Sistema nescessario: %.2f KWp",TamanhoSistema);
	printf("\n\n\t Tamanho do Sistema em Wp: %.0f Wp",TamSis);
	printf("\n\n\t Sera nescessario utilizar %.2f Placas de %d W",qtdPlacas,PotPlaca);
	
	getch();
	printf("\n\n\n\n\n\n");
	return 0;
}

