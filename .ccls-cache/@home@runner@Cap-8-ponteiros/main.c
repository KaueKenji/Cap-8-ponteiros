#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

#define ex6

#ifdef ex1
char str1[10], str2[10];
int main() { // principais do main  
  setlocale(LC_ALL, "Portuguese ");
  int cont;

  // entrada      
  char *p1 = &str1[0];
  char *p2;
  
  p2 = str2;
  // para o usuário escolher sair   
  do {
    // inicio projeto       
    system("cls");

    // alimentação
    printf("\nDigite a Primeira string: ");
    scanf("%s", p1);
    
    printf("\nDigite a Segunda string: ");
    scanf("%s", p2);

    // função e saída
    if(*p1 == *p2)
      printf("\nResultado: 1\nStrings iguais");
    else
      printf("\nResultado: 0\nStrings diferentes");


   

    // perguntar se o usuário quer finalizar  
    printf("\n \n deseja finalizar? (1-Sim / 2-Não)");
    scanf("%d", &cont);
    // evitar bugs de Enter
    getchar();
    if (cont == 1)
      break;

  } while (1 == 1);
}
#endif
#ifdef ex2
char str1[] = {'b','d','f','h','j','k','m','o','q','s','u','w','y'};
char pesquisa;

char Pesq( char l){
  int achei = 0;
    for(int i = 0; i<13; i++){
       if(l == str1[i])
         achei = 1;
   
      //fim for
    }
  return(achei);
  //fim função
}
int main() { // principais do main  
  setlocale(LC_ALL, "Portuguese ");
  int cont;

  // entrada      
  char p1 = pesquisa;
  
  // para o usuário escolher sair   
  do {
    // inicio projeto       
    system("cls");

    // alimentação
    printf("\nDigite o char que quer pesquisar: ");
    scanf("%c", &p1);
    

    // função
    int igual = Pesq(p1);

    //saida
    if(igual)
      printf("\n A letra %c está no vetor", p1);
    else
     printf("\n A letra %c não está no vetor", p1);
   


   

    // perguntar se o usuário quer finalizar  
    printf("\n \nDeseja finalizar? (1-Sim / 2-Não)");
    scanf("%d", &cont);
    // evitar bugs de Enter
    getchar();
    if (cont == 1)
      break;

  } while (1 == 1);
}
#endif


#ifdef ex3


int main() { // principais do main  
  setlocale(LC_ALL, "Portuguese ");
  int cont;

  // entrada      
  
  char c1 ;
  long ld1;
  int d1 ;
  float f1; 
  double lf1;
  unsigned char uc1;
  unsigned int u1;
  unsigned long lu1;
  
  char *c = &c1;
  long *ld = &ld1;
  int *d = &d1;
  float *f = &f1; 
  double *lf = &lf1;
  unsigned char *uc = &uc1;
  unsigned int *u = &u1;
  unsigned long *lu = &lu1;
   
 

  // para o usuário escolher sair   
  do {
    // inicio projeto       
    system("cls");

    // alimentação
    
    printf("\nDigite o valor do char: ");
  scanf("%c", c);
    

  printf("\nDigite o valor do long: ");
  scanf("%ld", ld);

  printf("\nDigite o valor do int: ");
  scanf("%d", d);

  printf("\nDigite o valor do float: ");
  scanf("%f", f);
    
   

  printf("\nDigite o valor do double: ");
  scanf("%lf", lf);
   

  getchar();
    
  printf("\nDigite o valor do unsigned char: ");
  scanf("%c", uc);

  printf("\nDigite o valor do unsigned int: ");
  scanf("%u", u);

  printf("\nDigite o valor do unsigned long: ");
  scanf("%lu", lu);
    
    // função
    
    // saída
     printf("\n        10        20%10d%10d%10d%10d\n", 30, 40, 50, 60);

  for (int x = 0; x < 6; x++) {

    printf("1234567890");
  }
  printf("\n    %-20d%-20ld%-20u", *d, *ld, *u);
  printf("\n              %-20.2f%-20.2lf%-20c", *f, *lf, *c);
  printf("\n         %-20lu%-20c", *lu, *uc);
    // perguntar se o usuário quer finalizar  
    printf("\n \nDeseja finalizar? (1-Sim / 2-Não)");
    scanf("%d", &cont);
    // evitar bugs de Enter
    getchar();
    if (cont == 1)
      break;

  } while (1 == 1);
}
#endif


#ifdef ex4

int main() { // principais do main  
  setlocale(LC_ALL, "Portuguese ");
  int cont;

  // entrada      
  float a, soma =0, ctt =0, media;
  float *p1 = &a, *p3 = &soma, *i = &ctt, *pao = &media;
  
  // para o usuário escolher sair   
  do {
    // inicio projeto       
    system("cls");
      *i =0;
    *p3 = 0;
      
    // função
    do{
      *i+= 1;
     // alimentação
      printf("\nDigite o %.0f° número: ", *i);
    scanf("%f", p1);
      if(*p1<0){
        break;
        //fim if
      }
      
      //calculo media
      *p3 += *p1;
      media = *p3 / *i;
      
    }while(1 == 1);
     
    // saída
    printf("\nA média final é: %.2f", *pao);
    
    // perguntar se o usuário quer finalizar  
    printf("\n \nDeseja finalizar? (1-Sim / 2-Não)");
    scanf("%d", &cont);
    // evitar bugs de Enter
    getchar();
    if (cont == 1)
      break;

  } while (1 == 1);
}
#endif

#ifdef ex5

// dia mes
int validaDiames(int d, int m) {
  int dia = d;
  if ((m == 2 || m == 4 || m == 6 || m == 9 || m == 11 )) {
    while(dia > 30){
    printf("\n1Digite o dia novamente: ");
    scanf("%d", &dia);
      //fim whi
    }

  } else {
    while (dia > 31){
      printf("\n2Digite o dia novamente: ");
    scanf("%d", &dia);
    }
  }
  

  return dia;
}
// ano bissextos
int validaDiabi(int d, int m, int a) {
  int dia = d;
  if (d == 29 && m == 2) {
    if (a % 4 == 0)
      printf("\nDia bissexto");

    else {while(dia > 28){
      printf("\nNão é dia bissexto \nDigite o dia novamente: ");
      scanf("%d", &dia);
    }
          //fim else
      }
  }
  return dia;
}
struct data {
  int dia;
  int mes;
  int ano;
};

int main() { // principais do main  
  setlocale(LC_ALL, "Portuguese ");
  int cont, dia, mes, ano;

  // entrada 
  struct data calen[2];
  struct data *p;
  p = &calen[0];
  // para o usuário escolher sair   
  do {
    // inicio projeto       
    system("cls");

    // alimentação
    for(int i =0; i<2; i++)
      {
        printf("\nDigite o dia da %dª data: ", i+1);
        scanf("%d", &p[i].dia);
        printf("\nDigite o mês da %dª data: ", i+1);
        scanf("%d", &p[i].mes);
        printf("\nDigite o ano da %dª data: ", i+1);
        scanf("%d", &p[i].ano);

        // validar mes
        while(p[i].mes < 1 || p[i].mes > 12){
           printf("\nDigite o mês novamente: ", i+1);
        scanf("%d", &p[i].mes);
          //fim while
        }
        //validar dia do mes
      p[i].dia = validaDiames(p[i].dia, p[i].mes);
    // ano bissextos
    p[i].dia = validaDiabi(p[i].dia, p[i].mes, p[i].ano);
        ///fim for
      }
    // função

    dia =  p[1].dia -  p[0].dia;
    mes =  p[1].mes -  p[0].mes;
    ano = p[1].ano -  p[0].ano;


    // saída
    printf("\nA diferença é de: %d anos, %d meses, %d dias.", ano, mes, dia); 
    for(int i =0; i<2; i++)
      {
        printf("\n%dª data: %d/%d/%d", i+1, p[i].dia, p[i].mes, p[i].ano);
      
        
        
        ///fim for
      }
    
    // perguntar se o usuário quer finalizar  
    printf("\n \nDeseja finalizar? (1-Sim / 2-Não)");
    scanf("%d", &cont);
    // evitar bugs de Enter
    getchar();
    if (cont == 1)
      break;

  } while (1 == 1);
}
#endif

#ifdef ex6
struct dados {
  char nome[25];
  char end[50];
  char cidade[50];
  char estado[50];
  int cep;
};
int main() { // principais do main  
  setlocale(LC_ALL, "Portuguese ");
  int cont;

       
  // criar struct de 4 elementos
  struct dados usuario[4];
  // para o usuário escolher sair   
  do {
    // inicio projeto       
    system("cls");

    //entrada
    struct dados *pont = &usuario[0];
    // alimentação
    for (int i = 0; i < 4; i++) {
      printf("\nDigite o %d° nome: ", i+1);
      scanf("%s", pont[i].nome);

      printf("\nDigite o %d° endereço: ", i+1);
      scanf("%s", pont[i].end);

      printf("\nDigite a %d° cidade: ", i+1);
      scanf("%s", pont[i].cidade);

      printf("\nDigite o %d° estado: ", i+1);
      scanf("%s", pont[i].estado);

      printf("\nDigite o %d° CEP: ", i+1);
      scanf("%d", &pont[i].cep);
      // fim for
    }
    // função

    // saída
    for (int i = 0; i < 4; i++) {
      printf("\n\nNome: %s\nEndereço: %s\nCidade: %s\nEstado: %s\nCEP: %d",
             pont[i].nome, pont[i].end, pont[i].cidade,
             pont[i].estado, pont[i].cep);
      // fim for
    }
    // perguntar se o usuário quer finalizar  
    printf("\n \n deseja finalizar? (1-Sim / 2-Não)");
    scanf("%d", &cont);
    // evitar bugs de Enter
    getchar();
    if (cont == 1)
      break;

  } while (1 == 1);
}

#endif
