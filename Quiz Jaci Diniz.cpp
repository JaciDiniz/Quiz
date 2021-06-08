/*
	Name: Jaci Diniz
	Copyright: 
	Author: 
	Date: 16-10-20 17:53
	Description: Quiz do Diniz
*/

#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>
#include<windows.h>

#define VERMELHO     "\x1b[31m"
#define VERDE   "\x1b[32m"
#define RESET   "\x1b[0m"
main(){
	setlocale(LC_ALL,"Portuguese");
Beep(293,250);
Beep(293,250);
Beep(220,250);
Beep(220,250);
Beep(293,250);
Beep(293,250);
Beep(330,250);

int op, usado=0; 
char resposta;

do{
int cont=0, acertou=0, errou=0;
system("cls") ;
do{
	printf("****");
	cont++;
}	while(cont<11);

printf("\n*  Quiz v1.0 - Jaci Diniz | Menu Inicial   *\n");
	
do{
	printf("****");
	cont--;
	
}	while(cont>1);
printf("2020\n\n");



printf("COMO JOGAR?\n");
printf("Esse é um jogo de perguntas e respostas de VERDADEIRO OU FALSO.\n");
printf("1º Escolha o nível de Jogo.\n");
printf("2º Responda as perguntas usando a tecla F para FALSO ou V para VERDADEIRO.\n");
printf("\nEscolha uma opção?\n 1-Nível Fácil\n 2-Nível Difícil\n 3-Sair\n\n");
do{
op=getche();
if(op!='1' && op!='2' && op!='3')
	printf(" ERRO!!! Escolha uma opção válida.\n\7");

}while(op!='1' && op!='2' && op!='3' );


system("cls") ;



switch(op){
	case'1':
		printf(" NÍVEL FÁCIL\n************\n\n");
		usado++;
		do{
		
		printf("1- O livro mais vendido no mundo é a Bíblia? ");
			resposta=getche();
				if(resposta=='V'||resposta=='v'){
					acertou++;
   					Beep (493, 200);
				printf(VERDE " Certa Resposta!\n"RESET);
				}else if(resposta=='F'||resposta=='f'){				
					errou++;			
					printf(VERMELHO " Resposta ERRADA!\n"RESET);
					Beep (329, 1000);
				}else{
					printf(" ERRO!!! Responda com V ou F\n\7");
				}	
				}while(resposta!='F' && resposta!='f' &&resposta!='v' &&resposta!='V' );
				
					do{
		
		printf("2- A China é o maior país do mundo? ");
			resposta=getche();
				if(resposta=='V'||resposta=='v'){
					errou++;							
					printf(VERMELHO " Resposta ERRADA!\n"RESET);
					Beep (329, 1000);
				}else if(resposta=='F'||resposta=='f'){	
					acertou++;
   					Beep (493, 200);
				printf(VERDE " Certa Resposta!\n"RESET);			
					
				}else{
					printf(" ERRO!!! Responda com V ou F\n\7");
				}	
				}while(resposta!='F' && resposta!='f' &&resposta!='v' &&resposta!='V' );
			
			do{
		
		printf("3- Os camaleões mudam de cor para se camuflar? ");
			resposta=getche();
				if(resposta=='V'||resposta=='v'){
					errou++;							
					printf(VERMELHO " Resposta ERRADA!\n"RESET);
					Beep (329, 1000);
				}else if(resposta=='F'||resposta=='f'){	
					acertou++;
   					Beep (493, 200);
				printf(VERDE " Certa Resposta!\n"RESET);			
					
				}else{
					printf(" ERRO!!! Responda com V ou F\n\7");
				}	
				}while(resposta!='F' && resposta!='f' &&resposta!='v' &&resposta!='V' );
				
				do{
		
		printf("4- O tipo sanguíneo AB são considerados doadores universais? ");
			resposta=getche();
				if(resposta=='V'||resposta=='v'){
					errou++;							
					printf(VERMELHO " Resposta ERRADA!\n"RESET);
					Beep (329, 1000);
				}else if(resposta=='F'||resposta=='f'){	
					acertou++;
   					Beep (493, 200);
				printf(VERDE " Certa Resposta!\n"RESET);			
					
				}else{
					printf(" ERRO!!! Responda com V ou F\n\7");
				}	
				}while(resposta!='F' && resposta!='f' &&resposta!='v' &&resposta!='V' );
				
				do{
		
		printf("5- O cromossomos Y determinam o sexo masculino? ");
			resposta=getche();
				if(resposta=='V'||resposta=='v'){
					acertou++;
   					Beep (493, 200);
				printf(VERDE " Certa Resposta!\n"RESET);
				}else if(resposta=='F'||resposta=='f'){				
					errou++;			
					printf(VERMELHO " Resposta ERRADA!\n"RESET);
					Beep (329, 1000);
				}else{
					printf(" ERRO!!! Responda com V ou F\n\7");
				}	
				}while(resposta!='F' && resposta!='f' &&resposta!='v' &&resposta!='V' );
				
				do{
		
		printf("6- A tradução de 'LOVE' para o Português significa 'AMOR'? ");
			resposta=getche();
				if(resposta=='V'||resposta=='v'){
					acertou++;
   					Beep (493, 200);
				printf(VERDE " Certa Resposta!\n"RESET);
				}else if(resposta=='F'||resposta=='f'){				
					errou++;			
					printf(VERMELHO " Resposta ERRADA!\n"RESET);
					Beep (329, 1000);
				}else{
					printf(" ERRO!!! Responda com V ou F\n\7");
				}	
				}while(resposta!='F' && resposta!='f' &&resposta!='v' &&resposta!='V' );
				
				do{
				printf("7- Barcelona é a capital da Espanha? ");
			resposta=getche();
				if(resposta=='V'||resposta=='v'){
					errou++;							
					printf(VERMELHO " Resposta ERRADA!\n"RESET);
					Beep (329, 1000);
				}else if(resposta=='F'||resposta=='f'){	
					acertou++;
   					Beep (493, 200);
				printf(VERDE " Certa Resposta!\n"RESET);			
					
				}else{
					printf(" ERRO!!! Responda com V ou F\n\7");
				}	
				}while(resposta!='F' && resposta!='f' &&resposta!='v' &&resposta!='V' );
				
				do{
		
		printf("8- (2 + 2) ,  2 x 2 e 2² dão o mesmo resultado.? ");
			resposta=getche();
				if(resposta=='V'||resposta=='v'){
					acertou++;
   					Beep (493, 200);
				printf(VERDE " Certa Resposta!\n"RESET);
				}else if(resposta=='F'||resposta=='f'){				
					errou++;			
					printf(VERMELHO " Resposta ERRADA!\n"RESET);
					Beep (329, 1000);
				}else{
					printf(" ERRO!!! Responda com V ou F\n\7");
				}	
				}while(resposta!='F' && resposta!='f' &&resposta!='v' &&resposta!='V' );
				
				do{
		
		printf("9- Quando estamos no ápice do verão no Hemisfério Sul, estamos no ápice do inverno no Hemisfério Norte. ");
			resposta=getche();
				if(resposta=='V'||resposta=='v'){
					acertou++;
   					Beep (493, 200);
				printf(VERDE " Certa Resposta!\n"RESET);
				}else if(resposta=='F'||resposta=='f'){				
					errou++;			
					printf(VERMELHO " Resposta ERRADA!\n"RESET);
					Beep (329, 1000);
				}else{
					printf(" ERRO!!! Responda com V ou F\n\7");
				}	
				}while(resposta!='F' && resposta!='f' &&resposta!='v' &&resposta!='V' );
				
				do{
		
		printf("10- Um ano bissexto tem 366 dias? ");
			resposta=getche();
				if(resposta=='V'||resposta=='v'){
					acertou++;
   					Beep (493, 200);
				printf(VERDE " Certa Resposta!\n"RESET);
				}else if(resposta=='F'||resposta=='f'){				
					errou++;			
					printf(VERMELHO " Resposta ERRADA!\n"RESET);
					Beep (329, 1000);
				}else{
					printf(" ERRO!!! Responda com V ou F\n\7");
				}	
				}while(resposta!='F' && resposta!='f' &&resposta!='v' &&resposta!='V' );
		
		
		
			printf("\nPretende ver o nº de respostas certas e erradas? S-SIM N-NÃO ");
			do{
			op=getche();
			if(op!='S' && op!='s' && op!='N' && op!='n')
			printf(" ERRO!!! Escolha uma opção válida.\n\7");
			}while(op!='S' && op!='s' && op!='N'&& op!='n');	
				
			if(op=='S'|| op=='s')
			printf("\n\nAcertou: %d\nErrou: %d\n",acertou,errou);
			break;
			
	case'2':
		printf(" NÍVEL DÍFIL\n************\n\n");
		usado++;
			do{
		
		printf("1- A primeira Copa do Mundo foi realizada em 193O? ");
			resposta=getche();
				if(resposta=='V'||resposta=='v'){
					acertou++;
   					Beep (493, 200);
				printf(VERDE " Certa Resposta!\n"RESET);
				}else if(resposta=='F'||resposta=='f'){				
					errou++;			
					printf(VERMELHO " Resposta ERRADA!\n"RESET);
					Beep (329, 1000);
				}else{
					printf(" ERRO!!! Responda com V ou F\n\7");
				}	
				}while(resposta!='F' && resposta!='f' &&resposta!='v' &&resposta!='V' );
				
					do{
		
		printf("2- A famosa frase “Penso, logo existo” é do filósofo Sócrates? ");
			resposta=getche();
				if(resposta=='V'||resposta=='v'){
					errou++;							
					printf(VERMELHO " Resposta ERRADA!\n"RESET);
					Beep (329, 1000);
				}else if(resposta=='F'||resposta=='f'){	
					acertou++;
   					Beep (493, 200);
				printf(VERDE " Certa Resposta!\n"RESET);			
					
				}else{
					printf(" ERRO!!! Responda com V ou F\n\7");
				}	
				}while(resposta!='F' && resposta!='f' &&resposta!='v' &&resposta!='V' );
				
					do{
				printf("3- Todos os quadrados são retângulos? ");
			resposta=getche();
				if(resposta=='V'||resposta=='v'){
					acertou++;
   					Beep (493, 200);
				printf(VERDE " Certa Resposta!\n"RESET);
				}else if(resposta=='F'||resposta=='f'){	
					errou++;							
					printf(VERMELHO " Resposta ERRADA!\n"RESET);
					Beep (329, 1000);
					}else{
					printf(" ERRO!!! Responda com V ou F\n\7");
				}	
				}while(resposta!='F' && resposta!='f' &&resposta!='v' &&resposta!='V' );
				
				do{
				printf("4- A pintura é arte chamada de 'sétima arte'? ");
			resposta=getche();
				if(resposta=='V'||resposta=='v'){
					errou++;							
					printf(VERMELHO " Resposta ERRADA!\n"RESET);
					Beep (329, 1000);
				}else if(resposta=='F'||resposta=='f'){	
					acertou++;
   					Beep (493, 200);
				printf(VERDE " Certa Resposta!\n"RESET);			
					
				}else{
					printf(" ERRO!!! Responda com V ou F\n\7");
				}	
				}while(resposta!='F' && resposta!='f' &&resposta!='v' &&resposta!='V' );
				
				do{
				printf("5- 8 minutos é o tempo que a luz do Sol demora para chegar à Terra. ");
			resposta=getche();
				if(resposta=='V'||resposta=='v'){
					acertou++;
   					Beep (493, 200);
				printf(VERDE " Certa Resposta!\n"RESET);
				}else if(resposta=='F'||resposta=='f'){	
					errou++;							
					printf(VERMELHO " Resposta ERRADA!\n"RESET);
					Beep (329, 1000);
					}else{
					printf(" ERRO!!! Responda com V ou F\n\7");
				}	
				}while(resposta!='F' && resposta!='f' &&resposta!='v' &&resposta!='V' );
				
				do{
				printf("6- Maquiavel é o autor do livro “O Príncipe”? ");
			resposta=getche();
				if(resposta=='V'||resposta=='v'){
					acertou++;
   					Beep (493, 200);
				printf(VERDE " Certa Resposta!\n"RESET);
				}else if(resposta=='F'||resposta=='f'){	
					errou++;							
					printf(VERMELHO " Resposta ERRADA!\n"RESET);
					Beep (329, 1000);
					}else{
					printf(" ERRO!!! Responda com V ou F\n\7");
				}	
				}while(resposta!='F' && resposta!='f' &&resposta!='v' &&resposta!='V' );
				
				do{
				printf("7- Apesar de serem os mais famosos, os morcegos não são os únicos mamíferos capazes de voar? ");
			resposta=getche();
				if(resposta=='V'||resposta=='v'){
					errou++;							
					printf(VERMELHO " Resposta ERRADA!\n"RESET);
					Beep (329, 1000);
				}else if(resposta=='F'||resposta=='f'){	
					acertou++;
   					Beep (493, 200);
				printf(VERDE " Certa Resposta!\n"RESET);			
					
				}else{
					printf(" ERRO!!! Responda com V ou F\n\7");
				}	
				}while(resposta!='F' && resposta!='f' &&resposta!='v' &&resposta!='V' );
				
				do{
				printf("8- O som viaja mais rápido pela água do que pelo ar? ");
			resposta=getche();
				if(resposta=='V'||resposta=='v'){
					acertou++;
   					Beep (493, 200);
				printf(VERDE " Certa Resposta!\n"RESET);
				}else if(resposta=='F'||resposta=='f'){	
					errou++;							
					printf(VERMELHO " Resposta ERRADA!\n"RESET);
					Beep (329, 1000);
					}else{
					printf(" ERRO!!! Responda com V ou F\n\7");
				}	
				}while(resposta!='F' && resposta!='f' &&resposta!='v' &&resposta!='V' );
				
				do{
				printf("9- Água cobre 96%% da superfície da Terra? ");
			resposta=getche();
				if(resposta=='V'||resposta=='v'){
					errou++;							
					printf(VERMELHO " Resposta ERRADA!\n"RESET);
					Beep (329, 1000);
				}else if(resposta=='F'||resposta=='f'){	
					acertou++;
   					Beep (493, 200);
				printf(VERDE " Certa Resposta!\n"RESET);			
					
				}else{
					printf(" ERRO!!! Responda com V ou F\n\7");
				}	
				}while(resposta!='F' && resposta!='f' &&resposta!='v' &&resposta!='V' );
				
				do{
				printf("10- Leonardo da Vinci pintou o teto da capela sistina? ");
			resposta=getche();
				if(resposta=='V'||resposta=='v'){
					errou++;							
					printf(VERMELHO " Resposta ERRADA!\n"RESET);
					Beep (329, 1000);
				}else if(resposta=='F'||resposta=='f'){	
					acertou++;
   					Beep (493, 200);
				printf(VERDE " Certa Resposta!\n"RESET);			
					
				}else{
					printf(" ERRO!!! Responda com V ou F\n\7");
				}	
				}while(resposta!='F' && resposta!='f' &&resposta!='v' &&resposta!='V' );
				
			printf("\nPretende ver o nº de respostas certas e erradas? S-SIM N-NÃO ");
			do{
			op=getche();
			if(op!='S' && op!='s' && op!='N' && op!='n')
			printf(" ERRO!!! Escolha uma opção válida.\n\7");
			}while(op!='S' && op!='s' && op!='N'&& op!='n');	
				
			if(op=='S'|| op=='s')
			printf("\n\nAcertou: %d\nErrou: %d\n",acertou,errou);
			break;
			case '3':
				printf("Obrigado por jogar o meu jogo %d vez(es) :)\n",usado);
			break;
			
			
			
}


			

if(op!='3' || op=='N' || op=='n'){

printf("\nPretende jogar novamente? S-SIM N-NÃO ");
op=getche();
}




}while(op=='S' || op=='s');

if(op=='N' || op=='n')
printf("\n\nObrigado por jogar o meu jogo %d vez(es) :)",usado);

Sleep(3000);





}
