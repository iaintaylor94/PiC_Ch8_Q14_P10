// program to test if a number is prime

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Declare Functions
bool isPrime (int);

int main(void) {
  // Get input 
  int checkPrime;
  printf ("Enter a number to test if prime: ");
  scanf ("%d", &checkPrime);

  // Test whether "checkPrime" is prime
  bool isInputPrime = isPrime (checkPrime);

  // Print results
  if (isInputPrime == true)
    printf ("%d is prime\n", checkPrime);
  else if (isInputPrime == false)
    printf ("%d is not prime\n", checkPrime);
  
  return 0;
}

// Define Functions
bool isPrime (int inputNumber) {
  if (inputNumber == 2 || inputNumber == 3)
    return true;

  for (int testPrime = 3; testPrime < sqrt(inputNumber); testPrime += 2) {
    if (inputNumber % testPrime == 0)
      return false;
  }

  return true;
}