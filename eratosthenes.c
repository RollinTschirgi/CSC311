//eratosthenes.c
//Rollin Tschirgi
//CSC311 Systemas software
//23/Nov/2015

#include <stdio.h>
#include <stdlib.h>

//define variable Size so we don't have to type 1million every time
//program will find all primes less than SIZE
#define SIZE 1000000

int bitmap[SIZE];

//the main sieve function
void filter(){

  int i = 0;
  int j = 2;
  
  //initialize first two to 1 aka isPrime=true
  bitmap[0] = bitmap[1] = 1;
  
  //initialize the rest to zero
  for(i=2; i<SIZE; i++) {
  bitmap[i]=0;
  }
  
  //begin search at 2 could be in the form of a four loop
  i=2;
  while(i < SIZE){
  
  
  }

}
