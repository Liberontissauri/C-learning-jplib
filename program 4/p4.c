//program 4 - Animal Counter

#include <stdio.h>

int main(void)
{
    int total_pets;
    int cats;
    int dogs;
    int ponies;
    int others;

    //set the number for each kind of pet
    cats = 2;
    dogs = 1;
    ponies = 1;
    others = 46;

    //calculate the total number of pets
    total_pets = cats + dogs + ponies + others;

    printf("We have %d pets in total.", total_pets); //output result
    return 0;
}