/*Samir Cerrato
COMP211
Professor Manfredi
September 18, 2022
*/

#include <stdio.h>

int main(void){

  char lowercase;
  int shift;

  printf("Enter lower-case letter to encrypt: ");
  scanf(" %c", &lowercase);

  if (lowercase >= 'A' && lowercase <= 'Z')
  {
    printf("Error: user did not enter lower-case letter, exiting");
  }
  else{
    printf("Enter the shift amount for Caesar cipher: ");
    scanf(" %d", &shift);

    shift = shift % 26;
    lowercase = lowercase + shift;

    if (lowercase >= 'z')
    lowercase = lowercase - 26;
    printf("Ciphertext is %c ", lowercase);
  }
}
