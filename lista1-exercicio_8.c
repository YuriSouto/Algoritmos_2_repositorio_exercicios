/******************************************************************************

Feito por: Yuri Calil Souto

Data: 15/02/2023

Ler 2 valores, calcular e escrever a soma dos inteiros existentes entre os 2 valores lidos (incluindo os valores
lidos na soma).

*******************************************************************************/
#include <stdio.h>

int
main ()
{

  int x, y, soma = 0, maior = 0, i, resultado = 0;
  printf ("Escaneie um numero:");
  scanf ("%d", &x);

  printf ("Escaneie um numero:");
  scanf ("%d", &y);

  if (x < y)
    {

      maior = y;
      soma = x;
    }
  else
    {
      maior = x;
      soma = y;
    }
  for (i = soma; i <= maior; i++)
    {
      printf ("%d", i);
      resultado = resultado + i;
    }

  printf ("\nResultado e: %d", resultado);

  return 0;
}

