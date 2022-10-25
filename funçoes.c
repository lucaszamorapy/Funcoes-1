/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>
float calculodosalariobruto(float caixa, int vidro)

{
    return(caixa*vidro);
   
}
salarioliquido(float jonas, float paulo)
{
     printf("O valor do salário liquido é: %.2f \n",jonas-jonas*(paulo/100));
}
 float dadosinteiros()
{int auxint;
do
{
scanf("%i",&auxint);
if(auxint<=0)
printf("*******Valor digitado é inválido*******\n");
}while(auxint<=0);
return(auxint);
}
float dadosreais()
{float aux;
do
{
scanf("%f",&aux);
if(aux<=0)
printf("*******Valor digitado é inválido*******\n");
}while(aux<=0);
return(aux);
}
 main(){
     float inss,horal,salariobruto;
     int numal;
 setlocale(LC_ALL,"");
 printf("Digite o valor das horas de trabalho do professor: \n");
 horal=dadosreais();
 printf("Digite o números de aulas do professor: \n");
 numal=dadosinteiros();
 printf("Digite o desconto do INSS: \n");
 inss=dadosreais();
 salariobruto=calculodosalariobruto(horal,numal);
 printf("\n Salário Bruto= %.2f\n",salariobruto);
    printf("\n TAXA doINSS=%.2f\n",inss);
    printf("\n Valor do INSS %.2f\n",salariobruto*(inss/100));
    salarioliquido(salariobruto,inss);
 }
 
 


