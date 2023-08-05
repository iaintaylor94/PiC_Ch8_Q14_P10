// program to test if a number is prime

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Global variables
int gInputNumber;
bool gIsInputPrime;

// Declare Functions
void isPrime (void);

int main(void) {
  // Get input 
  printf ("Enter a number to test if prime: ");
  scanf ("%d", &gInputNumber);

  // Test whether "gInputNumber" is prime
  isPrime ();

  // Print results
  if (gIsInputPrime == true)
    printf ("%d is prime\n", gInputNumber);
  else if (gIsInputPrime == false)
    printf ("%d is not prime\n", gInputNumber);
  
  return 0;
}

// Define Functions
void isPrime () {
  gIsInputPrime = true;
  
  if (gInputNumber == 2 || gInputNumber == 3)
    gIsInputPrime = true;

  else {
    for (int testPrime = 3; testPrime < sqrt(gInputNumber); testPrime += 2) {
      if (gInputNumber % testPrime == 0) {
        gIsInputPrime = false;
        break;
      }
    }
  }

}