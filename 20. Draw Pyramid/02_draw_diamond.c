#include <stdio.h>

int main(){
    int i,j,rows=10;
    int star, spaces;
    star =1;
    spaces = rows-1;

    for(i=1;i<rows*2; i++){
        for(j=1; j <=spaces;j++){
            printf(" ");
        }
      for(j =1; j <star *2; j++){
        printf("*");
      }  
      printf("\n");
      if(i < rows){
      
        spaces--;
          star++;
      }else {
        spaces++;
        star--;
      }
    }
    return 0;
}

/*
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/