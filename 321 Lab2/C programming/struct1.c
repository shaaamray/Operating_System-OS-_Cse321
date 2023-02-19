#include <stdio.h>
#include <string.h>

struct Breakfast{
    int quantity;
    int price;
};

int main(){
    struct Breakfast Paratha;
    struct Breakfast Vegetables;
    struct Breakfast Mineral;

    printf("Quantity of Paratha: ");
    scanf("%d", &Paratha.quantity);

    printf("Unit Price: ");
    scanf("%d", &Paratha.price);

    printf("Quantity of Vegetables: ");
    scanf("%d", &Vegetables.quantity);

    printf("Unit Price: ");
    scanf("%d", &Vegetables.price);

    printf("Quantity of Mineral: ");
    scanf("%d", &Mineral.quantity);

    printf("Unit Price: ");
    scanf("%d", &Mineral.price);
    int total;
    total = Paratha.quantity*Paratha.price + Vegetables.quantity * Vegetables.price + Mineral.quantity* Mineral.price;
    float per_person;
    printf("Enter people number: ");
    scanf("%f", &per_person);
    per_person = total/per_person;
    printf("Individual people will pay: %f\n", per_person);
    return 0;
}
