#include<stdio.h>//Biblioteca de comunica��o com usu�rio
#include<stdlib.h>//Biblioteca de aloca��o de espaso em mem�ria
#include<locale.h>//Biblioteca de aloca��es de texto por regi�o
#include<string.h>//Biblioeca respons�vel por cuidar das string

int Registro()
{
    char arquivo[40];
    char cpf[40];
    char nome[40];
    char sobrenome[40];
    char cargo[40];
    
  printf("Digite o CPF a ser cadastrado: ");
  scanf("%s",cpf);
  
  strcpy(arquivo, cpf); //Responsavel por copiar os valores das string
  
  FILE *file; //cria o arquivo
  file = fopen(arquivo, "w"); //cria o arquivo
  fprintf(file,cpf); //salvo o valor da variavel
  fclose(file); //fecha o arquivo
  
  file = fopen(arquivo, "a");
  fprintf(file, ",");
  fclose(file);
  
  printf("Digite o nome a ser cadastrado: ");
  scanf("%s",nome);
  
  file = fopen(arquivo, "a");
  fprintf(file,nome);
  fclose(file);
  
  file = fopen(arquivo, "a");
  fprintf(file, ",");
  fclose(file);
  
  printf("Digite o sobrenome a ser cadastrado: ");
  scanf("%s",sobrenome);
  
   file = fopen(arquivo, "a");
   fprintf(file,sobrenome);
   fclose(file);
 
  
  file = fopen(arquivo, "a");
  fprintf(file, ",");
  fclose(file);
  
  printf("Digite o cargo a ser cadastrado: ");
  scanf("%s",cargo);
  
   file = fopen(arquivo, "a");
   fprintf(file,cargo);
   fclose(file);
   
   system("pause");
}

int Consulta()
{
	setlocale(LC_ALL,"Portuguese"); //definir linguagem
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file== NULL)
	{
        printf("N�o foi possivel abrir o arquivo,n�o localizado!.\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as informa��es do usu�rio: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system("pause");
	


}

int Deletar()
{
	 printf("Voc� escolheu Deletar nomes!\n");
	 system("pause");
	 
}


int main()
{
    int opcao=0; //definir vari�veis	    
    int laco=1;
    char senhadigitada[10]="a";
    int comparacao;
    
    printf("### Cart�rio da EBAC ###\n\n");
    printf("Login de adminstrador!\n\nDigite a sua senha: ");
    scanf("%s",senhadigitada);
    
    comparacao = strcmp(senhadigitada, "admin");
    
    if(comparacao == 0)
    {
	  system("cls");
    
          for(laco=1;laco=1;)
       {  
	      system("cls");
	     
       	  setlocale(LC_ALL,"Portuguese"); //definir linguagem
	
	      printf("### Cart�rio da EBAC ###\n\n"); //inicio do menu
	      printf("Escolha a op��o desejada do menu:\n\n");
	      printf("\t1 - Registrar nomes\n");
	      printf("\t2 - Consultar nomes\n");
	      printf("\t3 - Deletar nomes\n\n");
	      printf("\t4 - Sair do sistema\n\n"); //fim do menu
	
	      scanf("%d" ,&opcao); //armazenando a escolha do usu�rio
	
	      system("cls");
	     
	      switch(opcao)
	     {
	          case 1:	
	          Registro();
		      break;
		
		      case 2:	
	          Consulta();
		   	  break;
		
	          case 3:	
	          Deletar();
			  break;
		
			  case 4:
			  printf("Obrigado  por utilizar o sistema!\n");
			  return 0;
			  break;	
			
			
		
		
		      default:
	    	  printf("Essa op��o n�o est� dispon�vel\n");
			  system("pause");
   			  break;
	       }
   	    }
    }



else
      printf("Senha incorreta! ");	    
    
}
	
