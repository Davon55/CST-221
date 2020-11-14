/*
*Author:   Donnell Sample
*Date:  10/25/2020   
* Memory Management
*/




#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
 long binaryNumber, bit, num, maskedData;
 long myData = 0x80000000;
 //Asked user to enter a number 
  printf("Enter a number\n");
  scanf("%ld", &num);
//prints in binary 
  printf("%d in binary number system is:\n", num);
  //prints in HEX
  printf("0x08 in Hex:\n", num>>31);
  maskedData = (myData & 0x7FFFFFFF);
  maskedData >>= 31;
  //shifting the number 16 bits to the left, then mask out 
  printf("\nmyData masked and shifted 31 = 0x%08X", maskedData);
  if (num < 0 || num < 4095 )
  {
      return 0;
  }
  //convert decimal to binary
  for(bit = 31; bit >=0; bit-- )
  {
      binaryNumber = num >> bit;

      if(binaryNumber & 1)
        printf("1");
      else
        printf("0");
  }
  printf("\n");

  return 0;
}
