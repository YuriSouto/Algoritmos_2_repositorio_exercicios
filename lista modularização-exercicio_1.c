/******************************************************************************

Feito por: Yuri Calil Souto

Data: 15/03/2023

Faça um programa que receba os três lados de um triângulo e faça as seguintes atividades:
retornar se os três lados realmente formam um triângulo e que tipo de triângulo é este.
Cada uma destas atividades deve ser uma função.

*******************************************************************************/
#include <stdio.h>

int formaTriangulo(float a, float b, float c){
    
    int ret;
    
    if((a+b)>c && (a+c)>b && (b+c)>a){
        
        printf("Forma um triangulo\n");
        ret = 1;
        
    }
    else{
        
        printf("Não forma triangulo\n");
        ret = 0;
        
    }
    
    return ret;
    
}

void retornaTipo(float a, float b, float c){
    
    if(a == b && b==c && a==c){
        
        printf("Triangulo equilatero");
        
    }
    
    else if(a != b && b!=c && a!=c){
        
        printf("Triangulo escaleno");
        
    }
    else if(a == b || b == c || a == c){
    
        printf("Triangulo isoceles");
    
    }
    
}

int main()
{
    float a,b,c;
    
    printf("Insira a medida de lados para um triangulo:\n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    
    if(formaTriangulo(a,b,c) == 1){
    
    retornaTipo(a,b,c);
    
    }
    return 0;
}

