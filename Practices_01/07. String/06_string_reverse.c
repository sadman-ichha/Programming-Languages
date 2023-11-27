#include <stdio.h>
#include <string.h>

int main()
{
   char my_string[] = "Hello, World!";
   // Find the length of the my_stringing
   int length = 0;
   while (my_string[length] != '\0')
   {
      length++;
   }
   printf("String Length : %d\n", length);
   printf("Original String: %s\n", my_string);

   int start = 0;
   int end = length - 1;
   char temp;
   while (start < end)
   {
      // Swap characters at start and end indices
      temp = my_string[start];
      my_string[start] = my_string[end];
      my_string[end] = temp;

      // Move indices towards the center of the My_string
      start++;
      end--;
   }
   printf("Reversed String: %s\n",my_string);

   return 0;
}