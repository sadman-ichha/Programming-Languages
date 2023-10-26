#include <stdio.h>
#include <stdbool.h>

int main(void)
{

    bool has_nid = false; // 0
    bool is_adult = true; // 1
     bool has_passport = true; // 1

    // its logical && operator its check two logic must be true
    bool is_permitted = has_nid && is_adult;


    // just Check its true or flase
    if (is_permitted == 0)
    {
        printf("Its's False.... \n"); // 0 -- False
    }
    else
    {
        printf("It's True..... \n"); // 1 -- true
    }
   
    printf("Permission - %d \n", is_permitted);


    // ******Logical or Operator******
    bool is_permitted_two = has_nid || has_passport;
    printf("Permission - %d \n", is_permitted_two);
    // logical !not oparator 
    printf("Permission - %d \n", !is_permitted_two);

    return 0;
}