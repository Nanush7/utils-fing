/*
* Utilidades para manipular representaciones binarias.
*/

#include <stdio.h>

void printBits(char palabra, bool new_line=true, int length=8){
  for (char i = length-1; i >= 0; i--){
    printf("%d", (palabra >> i) & 1);
  }
  if (new_line) {
    printf("\n");
  }
}

void printBits(short palabra, bool new_line=true, int length=16) {
  for (char i = length-1; i >= 0; i--){
    printf("%d", (palabra >> i) & 1);
  }
  if (new_line) {
    printf("\n");
  }
}

void printBits(int palabra, bool new_line=true, int length=32) {
  for (char i = length-1; i >= 0; i--){
    printf("%d", (palabra >> i) & 1);
  }
  if (new_line) {
    printf("\n");
  }
}


// Overloads con el orden inverso de los parámetros.

void printBits(char palabra, int length=8, bool new_line=true){
  for (char i = length-1; i >= 0; i--){
    printf("%d", (palabra >> i) & 1);
  }
  if (new_line) {
    printf("\n");
  }
}

void printBits(short palabra, int length=16, bool new_line=true) {
  for (char i = length-1; i >= 0; i--){
    printf("%d", (palabra >> i) & 1);
  }
  if (new_line) {
    printf("\n");
  }
}

void printBits(int palabra, int length=32, bool new_line=true) {
  for (char i = length-1; i >= 0; i--){
    printf("%d", (palabra >> i) & 1);
  }
  if (new_line) {
    printf("\n");
  }
}


// Imprimir Signo | Exponente | Mantisa de un número en PF de 32 bits.
void printFP(int palabra, bool new_line=true) {
    printBits(palabra >> 31, 1, false);
    printf(" | ");
    printBits(palabra >> 23 & 0xFF, 8, false);
    printf(" | ");
    printBits(palabra & 0x7FFFFF, 23, false);
    if (new_line){
        printf("\n");
    }
}
