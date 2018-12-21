#include <stdio.h>
#include <stdlib.h>


void temperature()
{
  int c;
  FILE *temp;
  temp = fopen("capteur.txt","r");
  printf("La temperature est de : ");
  while ((c = fgetc(temp)) != EOF)
  {
      printf("%c",c);
  }
  printf(" degre celcius\n");
}

int main()
{
    temperature();
    return 0;
}
