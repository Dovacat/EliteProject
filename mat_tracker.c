/**
 * @file mat_tracker.c
 * 
 * @author Dovacat
 * 
 * @brief object file for ED mat tracker
 * 
 * @version 0.4
 * 
 * @date 2021-05-26
 */

#include "mat_tracker.h"

/**
 * @brief prints a linked list(either for ingredients or recipes)
 * @param head_i head node for ingredients
 * @param head_r head node for recipes
 */
void print_list(ingredient *head_i, recipe *head_r){
    if(head_i == NULL){
        recipe *temp = head_r;
        while(temp != NULL){
            printf("%s\n", temp->name);
            temp = temp->next;
        }
        return;
    }else{
        ingredient *temp = head_i;
        while(temp != NULL){
            printf("%s", temp->name);
            temp = temp->next;
        }
        return;
    }
    printf("nothing to list!\n");
    return;
}

/**
 * @brief Create a ingredient object
 * @param name name of the ingredient
 * @param head the head node for ingredient linked list
 * @return ingredient* 
 * 
 * @todo need to free memory, will create seperate function. need to make sure malloc successful 
 */
ingredient * create_ingredient(char name[32], ingredient *head){
    ingredient *new = malloc(sizeof(ingredient));
    strcpy(new->name, name);
    new->next = head;
    return new;
}