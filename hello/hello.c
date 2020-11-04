#include <stdio.h>
#include <cs50.h>

int main(void)
{   
    //Asks for the name 
    string name = get_string("What is your name?\n");
    
    //Prints out Hello with the name you entered
    printf("Hello, %s\n", name);
}  