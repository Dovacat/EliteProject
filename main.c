/**
 * @file main.c
 * 
 * @author Dovacat
 * 
 * @brief main code for Elite Dangerous Odyssey Material Tracker 
 * 
 * @version 0.1
 * 
 * @date 2021-05-26
 * 
 * @todo see readme
 */

#include "mat_tracker.h"


int main(void){
    int done = 0;
    int choice;
    char inpux[32];
    while(!done){
        printf("Welcome to the ED Oddyssey Material Tracker\n");
        printf("Please select what you would like to do\n");
        printf("1) Check needed materials\n");
        printf("2) Check for completed recipes\n");
        printf("3) Update number of ingredients\n");
        printf("4) Add a recipe to track\n");
        printf("5) Complete/remove a recipe\n");
        printf("6) Add a new ingredient\n");
        printf("7) Add a new recipe\n");
        printf("8) Exit\n");
        scanf("%d", &choice);

        switch(choice){
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
                printf("enter the name of the ingredient\n");
                
                break;
            case 7:
            case 8:
                printf("Exiting...\n");
                done++;
                break;
            default:
                printf("Unknown/invalic input, please input a number 1-8\n");
                break;
        }
    }

    return 1;
}