/**
 * @file main.c
 * 
 * @author Dovacat
 * 
 * @brief main code for Elite Dangerous Odyssey Material Tracker 
 * 
 * @version 0.4
 * 
 * @date 2021-05-26
 * 
 * @todo see readme
 */

#include "mat_tracker.h"


int main(void){
    int done = 0; //used for main while loop
    int choice; //used for main menu selection
    char input[32]; //input for names and other strings, size 32 is arbitrary and might be changed later
    //------------------------------------- linked list setup, I dont like linked lists but idk a better solution for this rn
    ingredient *head_i = NULL;
    recipe *head_r = NULL;
    ingredient *temp_i = NULL; //no idea if I need these temp nodes but Ill just leave them for now
    recipe *temp_r = NULL;
    //-------------------------------------
    int c; //var used to clear input buffer
    while(!done){ //main loop
        printf("Welcome to the ED Oddyssey Material Tracker\n");
        printf("Please select what you would like to do\n");
        printf("1) Check needed materials\n");
        printf("2) Check for completed recipes\n");
        printf("3) Update number of ingredients\n");
        printf("4) Add a recipe to track\n");
        printf("5) Complete/remove a recipe\n");
        printf("6) Add a new ingredient\n");
        printf("7) Add a new recipe\n");
        printf("8) list ingredients\n");
        printf("9) list recipes\n");
        printf("10) Exit\n");
        scanf("%d", &choice);
        while((c = getchar()) != '\n' && c != EOF){} //clears input buffer
        memset(input, 0, strlen(input)); //clears input string
        switch(choice){
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
                printf("Enter the name of the ingredient\n");
                fgets(input, 32, stdin); //uses terminal(stdin) to get a string of size 32 and puts it into input
                head_i = create_ingredient(input, head_i);
                printf("Ingredient created\nPlease exit from the main menu to save changes\n\n\n\n"); //newlines are to make things easier to see
                sleep(1);//sleeps for 1 seconds to give ppl a chance to read stuff(no idea if this will stay in main release)
                break;
            case 7:
            case 8:
            printf("Ingredients are:\n");
                print_list(head_i, NULL);
                sleep(5);//sleeps for 5 seconds to give ppl a chance to read stuff(no idea if this will stay in main release)
                printf("\n\n\n\n");
                break;
            case 9:
                printf("Recipes are:\n");
                print_list(NULL, head_r);
                sleep(5);//sleeps for 5 seconds to give ppl a chance to read stuff(no idea if this will stay in main release)
                printf("\n\n\n\n");
                break;
            case 10:
                printf("Exiting...\n");
                done++; //increments done to a non zero value, ending the main loop.
                break;
            default: //minor exception handling for invalid input
                printf("Unknown/invalid input, please input a number 1-10\n");
                break;
        }
        //file saving and garbage collection will go here
    }

    return 1;
}