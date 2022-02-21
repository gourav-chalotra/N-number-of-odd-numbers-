#include <stdio.h>

int main()
{
    // crating 2 varibales first for user input secound varibales help in while loop
    int user;
    int scoure = 0;
    // taking input from users
    printf("Enter the number of odd natural number you want to print \n");
    scanf("%d", &user);
    // creating a new varibale for while loop condition
    int i = 0;
    // making a Infinite loop conftion 
    while (i > i - 1)
    {
        i++;
        // usning modulas operater to find the odd number or not 
        if (i % 2 == 1)
        {
            printf("%d\n", i);
            // incrementing scourse which help to know that how much value will get printed 
            scoure++;
            // add a condtion for compayer scource get equal to user input (THEN BREAK THE LOOP) 
            if (scoure == user)
            {
                break;
            }
        }
    }
    return 0;
}