#include <stdio.h>

int main(void)
{
    int height = 8;
    int length = 12;
    int width = 10;

    int volume = length * height * width;

    int weight = (volume + 165)/166;
    
    printf("Weight %d",weight);
    return 0;
}



