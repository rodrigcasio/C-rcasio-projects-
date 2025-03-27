#include <stdio.h>

int main(){

    int appleQuantity = 23;
    double applePrice = 1.49;
    float appleReview = 82.5;
    int appleReviewDisplay;
    const char appleLocation = 'F';

    appleReviewDisplay = (int)appleReview;

    printf("An apple costs: $%.2f, there are %d in inventory. Found in section: %c, and your customers gave it an avergae review of %d%%!\n", applePrice, appleQuantity, appleLocation, appleReviewDisplay);


    return 0;
}
