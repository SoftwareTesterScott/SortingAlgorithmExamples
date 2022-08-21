#include <stdio.h>

  int MinValue = 0;
  int MinValueIndex = 0;
  int ArraySize = 6;
  int Array[6] = {14, 9, 17, 12, 9, 5};

void printArray(){
  for (int i=0; i < ArraySize; i++){
   printf (" Array index:%i value: %i \n", i, Array[i]);
  }
}

int main (){

  printArray();
  for (int i = 0; i < ArraySize; i++){
    MinValue = Array[i];
    MinValueIndex = i;
    for (int j = i+1; j < ArraySize; j++){

      if (Array[j] < MinValue){
        MinValue = Array[j];
        MinValueIndex = j;
      }
    }
    Array[MinValueIndex] = Array[i];
    Array[i] = MinValue;

  }
  printf ("\n Array has been sorted \n");
  printArray();
}
