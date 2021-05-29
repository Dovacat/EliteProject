/**
 * @file mat_tracker.h
 * 
 * @author Dovacat
 * 
 * @brief header file for ED mat tracker
 * 
 * @version 0.4
 * 
 * @date 2021-05-26
 */
#ifndef MAT_TRACKER_H
#define MAT_TRACKER_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

typedef struct ingredient_t{
    char name[32];
    int obtained;
    struct ingredient_t *next;
}ingredient;

typedef struct recipe_t{
    int num_active;
    char name[32];
    char ingredient_1[32];
    int needed_1;
    char ingredient_2[32];
    int needed_2;
    char ingredient_3[32];
    int needed_3;
    char ingredient_4[32];
    int needed_4;
    char ingredient_5[32];
    int needed_5;
    char ingredient_6[32];
    int needed_6;
    struct recipe_t *next;
}recipe;

void print_list(ingredient *head_i, recipe *head_r);

ingredient * create_ingredient(char name[32], ingredient *head);


#endif