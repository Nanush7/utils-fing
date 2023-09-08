/*
* Utilidades para manipular representaciones binarias.
*/

#include <stdio.h>

void printBits(char palabra, bool new_line=true){
  for (char i = 7; i >= 0; i--){
    printf("%d", (palabra >> i) & 1);
  }
  if (new_line) {
    printf("\n");
  }
}

void printBits(short palabra, bool new_line=true) {
  for (char i = 15; i >= 0; i--){
    printf("%d", (palabra >> i) & 1);
  }
  if (new_line) {
    printf("\n");
  }
}

void printBits(int palabra, bool new_line=true) {
  for (char i = 31; i >= 0; i--){
    printf("%d", (palabra >> i) & 1);
  }
  if (new_line) {
    printf("\n");
  }
}

// Imprimir Signo | Exponente | Mantisa de un número en OF de 32 bits.
void printFP(int palabra, bool new_line=true) {
    printBits(palabra >> 31, false);
    printf(" | ");
    printBits(palabra >> 23 & 0xFF, false);
    printf(" | ");
    printBits(palabra & 0x7FFFFF, false);
    if (new_line){
        printf("\n");
    }
}
