/*
* Utilidades para manipular representaciones binarias.
*/

#include <stdio.h>

//=======================================================//
// Procedimientos para mostrar representaciones binarias //
//=======================================================//

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

void printBits(long palabra, bool new_line=true, int length=64) {
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

void printBits(long palabra, int length=64, bool new_line=true) {
  for (char i = length-1; i >= 0; i--){
    printf("%d", (palabra >> i) & 1);
  }
  if (new_line) {
    printf("\n");
  }
}

// Imprimir Signo | Exponente | Mantisa de un número en PF.
void printFP(short palabra, bool new_line=true) {
    printBits(palabra >> 15, 1, false);
    printf(" | ");
    printBits(palabra >> 10 & 0x1F, 5, false);
    printf(" | ");
    printBits(palabra & 0x3FF, 10, false);
    if (new_line) printf("\n");
}

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

void printFP(long palabra, bool new_line=true) {
    printBits(palabra >> 63, 1, false);
    printf(" | ");
    printBits(palabra >> 52 & 0x7FF, 11, false);
    printf(" | ");
    printBits(palabra & 0xFFFFFFFFFFFFF, 52, false);
    if (new_line){
        printf("\n");
    }
}
