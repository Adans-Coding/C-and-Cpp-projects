// This program is created to tell user the total price & litres for the distance which he/she wants to cover in kilometers.
#include <stdio.h>
int main()
{
    printf("This program is created to tell total price & litres for the distance which he/she wants to cover in kilometers.\n");
    float price_per_kilometer, kilometer, litre_per_kilometer;
    int mileage, petrol_price;
    printf("\nEnter your vehicle's mileage :");
    scanf("%d", &mileage);
    printf("Enter the current price of petrol :");
    scanf("%d", &petrol_price);
my_goto:
    printf("\nEnter any value in kilometers :");
    scanf("%f", &kilometer);
    printf("\nKilometer = %.1f\n", kilometer);
    price_per_kilometer = (float)petrol_price / (float)mileage;
    float total_price = price_per_kilometer * kilometer;
    litre_per_kilometer = 1.0 / mileage;

    float total_litre = litre_per_kilometer * kilometer;
    printf("\nThe %.1f kilometers distance will be covered in %.0f rupees & the petrol litres will be %.2f litres. \n", kilometer, total_price, total_litre);
    char condition;
    printf("\nDo not depend on this program, your mileage will never be the same when you change the behaviour of you driving\n");
    printf("\nDo you want to run it again ? (Y/N)");
    condition = getch();
    if (condition == 'y' || condition == 'Y')
    {
        goto my_goto;
    }

    printf("\nThankx for using this program   (`_`) ");
    printf("\n");
    printf("                                 \\|");
    printf("\n                                  |\\");
    printf("\n                                  |");
    printf("\n                                 / \\");
    printf("\n\n");
    getche();
    return 0;
}
