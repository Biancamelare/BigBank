#include <stdio.h>
#include <locale.h>
#include <string.h>
#define VALMAX 2000

void AcessarConta();
void Transferir();
void ConsultarSaldo();
void PagarContas();
void Investir();
void Emprestar();
void Solicitar();
void Depositar();
void verificaSaldo(float *valor);

float saldo;
float valor_emprestimo,juros,valor_pagar;
float valor_investimento=0;
    
int main()
{
    setlocale(LC_ALL, "portuguese");
    int menu_principal;
    char nome[50];
    char cpf[15];
    char senha[5];
    char senha_acesso[5];
    char usuario_acesso[20];
    char usuario[20];
    float saldo=0;
    int c,i;
    do{
    	_sleep(200);
    	system("cls");
    	system("color 0F");
    	printf("\n\n");   
    	printf("\t\t\t\t       BEM-VINDO AO BIG BANK \n\n");
printf("\t\t\t         _._._                       _._._\n");_sleep(200);
printf("\t\t\t        _|   |_                     _|   |_\n");_sleep(200);
printf("\t\t\t        | ... |_._._._._._._._._._._| ... |\n");_sleep(200); 
printf("\t\t\t        | ||| |  o    BIG BANK   o  | ||| |\n");_sleep(200);
printf("\t\t\t        |     |                     |     |\n");_sleep(200);
printf("\t\t\t   ())  |[-|-]| [-|-]  [-|-]  [-|-] |[-|-]|  ())\n");_sleep(200);
printf("\t\t\t  (())) |     |---------------------|     | (()))\n");_sleep(200);
printf("\t\t\t (())())|     |                     |     |(())())\n");_sleep(200);
printf("\t\t\t (()))()|[-|-]|  :::   .- -.   :::  |[-|-]|(()))()\n");_sleep(200);
printf("\t\t\t ()))(()|     | |~|~|  |_|_|  |~|~| |     |()))(()\n");_sleep(200);
printf("\t\t\t    ||  |_____|_|_|_|__|_|_|__|_|_|_|_____|  ||\n");_sleep(200);
printf("\t\t\t   ^~^~                                     ~^~^\n");_sleep(200);

        printf("1 ---> Abra sua conta\n");
        printf("2 ---> Acesse sua conta\n");
        printf("\nDigite sua op��o: \n->");
        scanf("%d", &menu_principal);
        switch(menu_principal)
        {
        	case 1:
        		_sleep(300);
    			system("cls");
        		printf("\nDigite seu nome: ");
        		fflush(stdin);gets(nome);
        		printf("\nDigite seu CPF: ");
        		fflush(stdin);gets(cpf);
        		printf("\nDigite seu nome de usu�rio(Ele deve estar no formato nome.sobrenome): ");
        		fflush(stdin);gets(usuario);
        		printf("\nDigite sua senha(Ela deve conter 4 caracteres): ");
        		//fflush(stdin);gets(senha);
        	i=0;
			while(i<4)
	        { 
	            fflush(stdin);
			    senha[i]=getch(); 
			    c=senha[i];
			    if(c==13) 
				    break; 
			    else 
				    printf("*"); 
			    i++;
		     }
        		saldo=0;
        		break;
        	case 2:
        		_sleep(300);
    			system("cls");
        		printf("Digite seu usu�rio: ");
        		fflush(stdin);gets(usuario_acesso);
        		printf("\nDigite sua senha: \n");
        		//fflush(stdin);gets(senha_acesso);
        		i=0;
        		while(i<4)
	        { 
	            fflush(stdin);
			    senha_acesso[i]=getch(); 
			    c=senha_acesso[i];
			    if(c==13) 
				    break; 
			    else 
				    printf("*"); 
			    i++;
		     }
        		if(strcmp(usuario,usuario_acesso)==0 && strcmp(senha,senha_acesso)==0)
        		{
        			printf("\nSua conta foi acessada com sucesso!");
        			sleep(2);
        			AcessarConta();
				}
				else 
				{
					printf("\nUsu�rio ou senha inv�lidos.");
				}	
				break;	
		}   
		} while (menu_principal == 1 || menu_principal== 2 );
		return 0;
}

//Entrar na fun��o Conta 
void AcessarConta()
{
	int menu_conta;
	do{
    	system("cls");
    	system("color 0F");
        printf("\tBIG BANK\n");
        printf("\n1-----> Depositar dinheiro");
        printf("\n2-----> Consultar o saldo");
        printf("\n3-----> Fazer um empr�stimo");
        printf("\n4-----> Investir seu dinheiro");
        printf("\n5-----> Solicitar cart�o de d�bito e cr�dito");
        printf("\n6-----> Pagar contas");
        printf("\n7-----> Transferir dinheiro");
        printf("\n0-----> Sair");
        printf("\nInsira aqui:\n-> ");
        scanf("%d", &menu_conta);
        switch(menu_conta)
        {
        	case 1:
        		Depositar();
        		break;
        	case 2:
        		ConsultarSaldo();
				break;	
			case 3:
				Emprestar();
				break;
			case 4:
				Investir();
				break;
			case 5:
				Solicitar();
				break;
			case 6:
				PagarContas();
				break;
			case 7:
				Transferir();
				break;
			case 0:
				break;
		}   
		getch();
		}while(menu_conta!=0);
}

//Entrar na Fun��o Depositar
void Depositar()
{
	int menu_deposito, resposta;
	float valor_deposito;
	
	do{
		system("cls");
		system("color 0F");
	    printf("\n Digite a quantidade que deseja depositar na conta: R$ ");
	    scanf("%f",&valor_deposito);
	    printf("\n Confirme o dep�sito de R$%2.f: \n 1 - Sim  2 - N�o \n-> ", valor_deposito);
	    scanf("%i", &menu_deposito);
		switch( menu_deposito)
	   {
	      case 1:
		     printf("\nDep�sito de R$%2.f confirmado!", valor_deposito);
		     saldo+= valor_deposito;
  		   	 //printf("\n O saldo da conta �: %.2f", saldo);
		  break;
	      case 2:
		     printf("\nDep�sito cancelado");
		  break;
	    }	 
	    printf("\n\nDeseja fazer novo dep�sito 1-Sim  2-N�o :\n->");
	    scanf("%i", &resposta);
		   
	}while( resposta==1);	
	//getch();
}


void ConsultarSaldo()
{
	system("cls");
	printf("\n\t\t CONSULTA DE SALDO");
	printf("\n O saldo da conta conta corrente � de: %.2f", saldo);
	printf("\n O saldo da conta poupan�a � de: %.2f", valor_investimento);
	getch();
}


void Transferir()
{
	int conta_transferencia;
    char conta_poupreceptora[10];
    char conta_correntereceptora[7];
    float valor_transferido;
    int confirma;
    system("cls");
	    printf("\n Selecione o tipo de conta para a qual deseja realizar a transfer�ncia: ");
	    printf("\n 1 - Conta poupan�a \n 2 - Conta corrente ");
	    printf("\nDigite sua op��o: \n-> ");
        scanf("%d", &conta_transferencia);
	    switch(conta_transferencia)
	    {
		   case 1: 
		   system("cls");
		//solicita os digitos da conta poupan�a e o valor que ser� transferido 
		printf("Digite os 9 digitos da conta poupan�a (Ex: xxxxxxxxxx): ");
		fflush(stdin);gets(conta_poupreceptora);
		
		printf("Qual valor deseja transferir para a conta %c: ", conta_poupreceptora);
		scanf("%f", &valor_transferido);
		if(valor_transferido>saldo)
		{
			printf("Transfer�ncia negada. Saldo insuficiente!");
		}
		else
		{
				printf("\n Confirma a transfer�ncia de %.2f para a conta %c? \n 1 - Sim \n 2 - N�o:\n-> ", valor_transferido, conta_poupreceptora);
				scanf("%i",&confirma);
				
				if(confirma == 1){
					
					printf("\n Transfer�ncia realizada com sucesso!");
					saldo-=valor_transferido;
				} 
				else {
					
					printf("\n Transfer�ncia cancelada");
				}
	   }
		break;
		
		case 2: 
		system("cls");
		printf("Digite os 5 digitos da conta corrente (Ex: xxxxxx): ");
		fflush(stdin);gets(conta_correntereceptora);
		
		printf("Qual valor deseja transferir para a conta %c: ", conta_correntereceptora);
		scanf("%f", &valor_transferido);
		if(valor_transferido>saldo)
		{
           printf("Transfer�ncia negada. Saldo insuficiente!");
	    }
	    else
	    {
		
				printf("\n Confirma a transfer�ncia de %f para a conta %c? \n 1 - Sim \n 2 - N�o \n->", valor_transferido, conta_correntereceptora);
				scanf("%i",&confirma);
				
					if(confirma == 1){	
					printf("\n Transfer�ncia realizada com sucesso! :) ");
					saldo-=valor_transferido;
				} 
				else {
					printf("\n Transfer�ncia cancelada");
				}
		}
				break;	
	}
		getch(); 
}

void PagarContas()
{
	int sel_conta, confirma_pagamento;
	float valor_conta;
	char codigo[10];
	
	system("cls");
	printf("\n Selecione abaixo qual tipo de conta deseja pagar?");
	printf("\n 1 - �gua						    2 - Luz");
	printf("\n 3 - Internet						4 - Mercado");
	printf("\n 5 - Netflix						6 - Outras(n�o vinculadas)");
	printf("\nInsira aqui:\n-> ");
	scanf("%i",&sel_conta);
	
	switch (sel_conta)
	{
		case 1: 
		printf("\n Voc� selecionou: conta de �gua \n Digite o valor da conta de �gua: R$");
		scanf("%f",&valor_conta);
		printf("\n Processando....");
		sleep(2);
		printf("\n\n Confirma o pagamento de R$%.2f da conta de �gua? \n 1 - SIM \n 2 - N�o: \n-> ", valor_conta);
		scanf("%d", &confirma_pagamento);
		
		if (confirma_pagamento == 1)
		{
		    verificaSaldo(&valor_conta);
	    }
		else 
		{
			printf("\n Pagamento cancelado!");
		}
		break;
		
		case 2: 
		printf("\n Voc� selecionou: conta de luz \n Digite o valor da conta de luz: R$");
		scanf("%f",&valor_conta);
		printf("\n Processando....");
		sleep(2);
		printf("\n\n Confirma o pagamento de R$%.2f da conta de luz? \n 1 - Sim \n 2 - N�o \n->", valor_conta);
		scanf("%d", &confirma_pagamento);
			
		if (confirma_pagamento == 1)
		{
			verificaSaldo(&valor_conta);
	    }
		else 
		{
			printf("\n Pagamento cancelado!");	
		}
		break;
		
		case 3: 
		printf("\n Voc� selecionou: conta de internet \n Digite o valor da conta de internet: R$");
		scanf("%f",&valor_conta);
		printf("\n Processando....");
		sleep(3);
		printf("\n\n Confirma o pagamento de R$%.2f da conta de internet? \n 1 - Sim \n 2 - N�o \n-> ", valor_conta);
		scanf("%d", &confirma_pagamento);
			
		if (confirma_pagamento == 1)
		{
			verificaSaldo(&valor_conta);
	    }
		else 
		{
			printf("\n Pagamento cancelado!");
	
		}
		break;
		
		case 4: 
		printf("\n Voc� selecionou: conta de mercado \n Digite o valor da conta de mercado: R$ ");
		scanf("%f",&valor_conta);
		printf("\n Processando....");
		sleep(2);
		printf("\n\n Confirma o pagamento de R$%.2f da conta de mercado? \n 1 - Sim \n 2 - N�o \n->", valor_conta);
		scanf("%d", &confirma_pagamento);
			
		if (confirma_pagamento == 1)
		{
			verificaSaldo(&valor_conta);
	    }
		else 
		{
			printf("\n Pagamento cancelado!");
		}
		break;
		
		case 5: 
		printf("\n Voc� selecionou: conta de netflix \n Digite o valor da conta de netflix: R$ ");
		scanf("%f",&valor_conta);
		printf("\n Processando....");
		sleep(3);
		printf("\n\n Confirma o pagamento de R$%.2f da conta de netflix? \n 1 - Sim \n 2 - N�o \n-> ", valor_conta);
		scanf("%d", &confirma_pagamento);
			
		if (confirma_pagamento == 1)
		{
			verificaSaldo(&valor_conta);
	    }
		else 
		{
			printf("\n Pagamento cancelado!");
		}
		break;
		
		case 6: 
		printf("\n Voc� selecionou: outra conta (n�o vinculada). \n Digite o c�digo de barras da conta:");
		fflush(stdin);gets(codigo);
		printf("\n Digite o valor da conta:R$ ");
		scanf("%f",&valor_conta);
		printf("\n\n Processando....");
		sleep(2);
		printf("\n\n Confirma o pagamento de R$%.2f \n 1 - Sim \n 2 - N�o \n-> ", valor_conta);
		scanf("%d", &confirma_pagamento);
			
		if (confirma_pagamento == 1)
		{
			verificaSaldo(&valor_conta);
	    }
		else 
		{
			printf("\n Pagamento cancelado!");
			
		}
		break;	
		default: 
			printf("\nOp��o Inv�lida\n");
		break;
		
	}
	getch();	
}


void Investir()
{
	double juros;
	int aceitar_investimento;
	system("cls");
	printf("\n Bem vindo a poupan�a!!");
	printf("\n\nDigite o valor que deseja investir R$:");
	scanf("%f",&valor_investimento);
	if(valor_investimento>saldo)
	{
		printf("Investimento negada. Saldo insuficiente!");
	}
	else
	{
		printf("\n Deseja completar o investimento? \n 1 - SIM \n 2 - N�O \n-> ");
		scanf("%i",&aceitar_investimento);
		
		if (aceitar_investimento == 1 )
		{
			printf("\n Parab�ns seu investimento foi aprovado!! ");
			saldo-=valor_investimento;
		}
		else
		{
			printf("\n Investimento cancelado!");
		}	
   }
	getch();
}


void Emprestar()
{
	int meses;
	int  confirmar_investimento;
	system("cls");
	printf("Digite o valor do empr�stimo:R$");
	scanf("%f",&valor_emprestimo);
	printf("O valor do empr�stimo ser� pago ap�s quantos meses? ");
	scanf("%i",&meses);
	if(valor_emprestimo>VALMAX)
	{
		printf("Empr�stimo negado. O valor m�ximo do empr�stimo � de R$2000.00");
	}
	else
	{
	
		juros=valor_emprestimo*0.10*meses;
		valor_pagar=valor_emprestimo+juros;
		printf("\nA taxa de juros a ser cobrada � de 0.1%% ao m�s. Voc� pagar� R$:%.2f de juros.",juros);
		printf("\n\nO valor a ser pago ap�s %i meses ser� de R$ %.2f",meses,valor_pagar);
		printf("\nConfirma o empr�stimo de R$%.2f a ser pago ap�s %i meses? \n 1- SIM 2- N�O \n->  ",valor_emprestimo,meses);
		scanf("%i",&confirmar_investimento);
		if (confirmar_investimento == 1 )
		{
			printf("\n Empr�stimo realizado com sucesso!!");
			saldo+=valor_emprestimo;
		}
		else
		{
			printf("\n Empr�stimo cancelado!");
		}	
    }
	getch();
}

void Solicitar()
{
	system("cls");
	int opcao_cartao;
	int aceitar_cartao;
	char cep[10];
	char casa[5];
	
	printf("\n Ol�, pronto para solicitar o seu novo cart�o?\n Selecione abaixo a op��o desejada!");
	printf("\n 1 - Cart�o de cr�dito \n 2 - Cart�o de d�bito \n 3 - Cart�o de d�bito e cr�dito \n ");
	scanf("%i", &opcao_cartao);
	
	switch (opcao_cartao)
	{
		
		case 1: 
		printf("\n Voc� j� conhece o cart�o de cr�dito big bank?\n Com ele � poss�vel parcelar suas compras e pagar apenas no fechamento da fatura!!");
		printf("\n Deseja prosseguir com a solicita��o do cart�o de cr�dito big bank? \n 1 - SIM \n 2 - N�O \n-> ");
		scanf("%i",&aceitar_cartao);
		
		if(aceitar_cartao == 1)
		{	
		    printf("Digite seu CEP: ");
        	fflush(stdin);gets(cep);
        	printf("\nDigite o n�mero da sua resid�ncia: ");
        	fflush(stdin);gets(casa);
			printf("\n Parab�ns seu cart�o de cr�dito big bank foi aprovado.\n Em at� 7 dias voc� o receber� em sua resid�ncia.");
		}
		else 
		{
			printf("\n Solicita��o de cart�o de cr�dito big bank cancelada!");
		}
		break;
		
		case 2:
		printf("\n Voc� j� conhece o cart�o de d�bito big bank?\n Com ele � poss�vel fazer compras a qualquer momento em qualquer lugar!!");	
		printf("\n Deseja prosseguir com a solicita��o do cart�o de d�bito big bank? \n 1 - SIM \n 2 - N�O \n->");
		scanf("%i",&aceitar_cartao);
		if(aceitar_cartao == 1)
		{
			printf("Digite seu CEP: ");
        	fflush(stdin);gets(cep);
        	printf("\nDigite o n�mero da sua resid�ncia: ");
        	fflush(stdin);gets(casa);
			printf("\n Parab�ns seu cart�o de d�bito big bank foi aprovado. \n Em at� 7 dias voc� receber� ele em sua resid�ncia.");
			
		}
		else
		{
			printf("\n Solicita��o de cart�o de d�bito big bank cancelada!");
				
		}
		break;
		
		case 3:
		printf("\nVoc� j� conhece o cart�o de cr�dito e d�bito big bank?");
		printf("\nCom ele � poss�vel fazer compras a qualquer momento em qualquer lugar e ainda parcelar suas compras e pagar apenas no fechamento da fatura!!");
		printf("\n Deseja prosseguir com a solicita��o do cart�o cr�dito e d�bito big bank? \n 1 - SIM \n 2 - N�O \n->");
		scanf("%i",&aceitar_cartao);
		
		if(aceitar_cartao == 1)
		{
			printf("Digite seu CEP: ");
        	fflush(stdin);gets(cep);
        	printf("\nDigite o n�mero da sua resid�ncia: ");
        	fflush(stdin);gets(casa);
			printf("\n Parab�ns seu cart�o de cr�dito e d�bito big bank foi aprovado.\n Em at� 7 dias voc� o receber� em sua resid�ncia.");
			
		}
		else 
		{
			printf("\n Solicita��o de cart�o de d�bito e cr�dito big bank cancelada!");
				
		}
		break;
		
	getch();
}
}

void verificaSaldo(float *valor)
{
		if(*valor > saldo)
		{
			printf("Opera��o negada. Saldo insuficiente!");
		}
		else 
		{
			printf("\n Pagamento conclu�do!");
			saldo = saldo - *valor;
	    }	
    	getch();
}




