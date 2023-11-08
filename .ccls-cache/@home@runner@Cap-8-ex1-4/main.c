#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

#define ex5

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
    
    printf("\nDigite a Primeira string: ");
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

void Imprimir(){

 
}
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

int main() { // principais do main  
  setlocale(LC_ALL, "Portuguese ");
  int cont;

  // entrada      

  // para o usuário escolher sair   
  do {
    // inicio projeto       
    system("cls");

    // alimentação

    // função

    // saída

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

#ifdef ex9

struct data {
  int dia;
  int mes;
  int ano;
  int dia_ano;
  char nome_mes[10];
};

/* declara um vetor de estrutura do tipo "struct data" de nome "calendario" com
3 elementos sendo cada um uma estrutura*/

struct data calendario[3] = {7,  9,  1822, 250, "setembro",
                             15, 11, 1889, 319, "novembro",
                             26, 1,  1839, 26,  "janeiro"};
main() {
  struct data *p;
  p = &calendario[0]; // ou p = calendario; // notacao simplificada

  printf("\nProclamacao da Independencia: ");
  printf("%d/", p[0].dia); // a notacao p[0]so' funciona usado o "." e nao a
                           // seta, fica: p[0].dia
  printf("%d/", p[0].mes);
  printf("%d, ", p[0].ano);
  printf("%d - ", p[0].dia_ano);
  printf("%s\n", p[0].nome_mes);

  printf("\nProclamacao da republica: ");
  printf("%d/", (p + 1)->dia);
  printf("%d/", (p + 1)->mes);
  printf("%d, ", (p + 1)->ano);
  printf("%d - ", (p + 1)->dia_ano);
  printf("%s\n", (p + 1)->nome_mes);

  printf("\nFundacao de Santos: ");
  printf("%d/", (p + 2)->dia);
  printf("%d/", (p + 2)->mes);
  printf("%d, ", (p + 2)->ano);
  printf("%d - ", (p + 2)->dia_ano);
  printf("%s\n", (p + 2)->nome_mes);
}
#endif
