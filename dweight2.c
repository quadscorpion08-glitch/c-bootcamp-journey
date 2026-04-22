/*Compute the dimensional weight of box from input provided by the user*/

#include <stdio.h>

int main(void)
{
    int height, length, width, volume, weight;
    printf("Enter the Height: ");
    scanf("%d", &height);

    printf("Enter the Length: ");
    scanf("%d", &length);

    printf("Enter the width: ");
    scanf("%d", &width);

    volume = length * height * width;

    weight = (volume + 165)/166;
    
    printf("Weight %d",weight);
    return 0;
}