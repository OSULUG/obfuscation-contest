// needed for putchar()
#include <stdio.h>

int main(){
  
  // "Hello, World!" encoded as 2 long values, this was derived by defining a
  // character array and typecasting it to a long array, then printing the
  // values.
  // ONLY WORKS ON LITTLE ENDIAN SYSTEMS, BIG ENDIAN NEEDS A DIFFERENT VALUE
  long longarray[]={0x77202c6f6c6c6548,0x00000a21646c726f};
  
  // Typecast long array to character array
  // 1 'long' can produce 8 'chars'
  char* chararray = ((char*) longarray);
  
  // While the character pointed to by the array base =! 0 (NULL terminator)
  while (*chararray) {
    // Put a character from the array base, then increment the pointer
    // THIS LEAKS MEMORY AND BREAKS THE POINTER
    putchar(*chararray++);
  }

  // Since we have been incrementing the pointer until it hit 0,
  // this will always return 0.
  return chararray[0];
}
