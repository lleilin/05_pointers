#include<stdio.h>

int main() {

// 1. Declare and initialize variables of types char, int, and long.
  char c = 'D';
  int i = 218;
  long l = 12381;

// 2. Print out the addresses of each variable in hex and decimal.
// Do you notice anything about the addresses?
// &i and &c are 1 apart
// &i and &l are 4 apart

  printf("&c hex:\t%p\n", &c);
  printf("&c dec:\t%d\n", &c);

  printf("&i hex:\t%p\n", &i);
  printf("&i dec:\t%d\n", &i);

  printf("&l hex:\t%p\n", &l);
  printf("&l dec:\t%d\n\n", &l);

// 3. Declare and initialize pointers for each of your variables.
  char *cp = &c;
  int *ip = &i;
  long *lp = &l;

// 4. Print out the values of each pointer.
  printf("*cp:\t%p\n", cp);
  printf("*ip:\t%p\n", ip);
  printf("*lp:\t%p\n\n", lp);

// 5. Use the pointers to modify the values of the original variables and print out the new values.
  *cp = 'Q';
  *ip = 1234;
  *lp = 498941;

  printf("c:\t%c\n", c);
  printf("i:\t%i\n", i);
  printf("l:\t%ld\n\n", l);

// 6. Declare and initialize an unsigned int variable and 2 pointers that point to it, one should be an int * and the other should be a char *
  unsigned int ui = 155123;
  int *iui = &ui;
  char *cui = &ui;

// 7. Print out the value of each pointer (this should be the memory address), and de-reference each pointer to print out the value each points to.
  printf("iui: %p points to *iui: %d\n", iui, *iui);
  printf("cui: %p points to *cui: %d\n\n", cui, *cui);

// 8. Print out your unsigned int in decimal and hex.
  printf("ui hex:\t%x\n", ui);
  printf("ui dec:\t%u\n", ui);

// 9. Use the char * to print out each individual byte of your unsigned int.
  printf("byte 0: %hhu\n", *cui);
  printf("byte 1: %hhu\n", *(cui + 1));
  printf("byte 2: %hhu\n", *(cui + 2));
  printf("byte 3: %hhu\n\n", *(cui + 3));

// 10. Use the char * to increment each byte of the unsigned int by 1. Print out the unsigned int in both hex and decimal after each modification.
// When done, print out each byte like in step 9. You may need to reset the char * so that it points to the unsigned int, depending on how you
// wrote step 4 out.
  int n;
  for (n = 0; n < 4; n++) {
    *cui = *cui + 1;
    printf("byte %d hex:\t%hhx\n", n, *cui);
    printf("byte %d dec:\t%hhu\n\n", n, *cui);
    cui++;
  }

// 11. Perform the same operation as in step 10, except add 16 to each byte.
 cui = &ui;
 for (n = 0; n < 4; n++) {
   *cui = *cui + 1;
   printf("byte %d hex:\t%hhx\n", n, *cui);
   printf("byte %d dec:\t%hhu\n\n", n, *cui);
   cui += 16;
 }
  return 0;
}
