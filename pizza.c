#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pizza {
    char name[50];
    float price;
};

void addPizza(struct Pizza pizzas[], int *count) {
    printf("\nAdding Pizza\n");
    printf("Enter pizza name: ");
    scanf("%s", pizzas[*count].name);
    printf("Enter pizza price: ");
    scanf("%f", &pizzas[*count].price);
    (*count)++;
}

void displayPizzas(struct Pizza pizzas[], int count) {
    printf("\nDisplaying Pizzas\n");
    for (int i = 0; i < count; i++) {
        printf("Pizza %d\n", i+1);
        printf("Name: %s\n", pizzas[i].name);
        printf("Price: %.2f\n", pizzas[i].price);
        printf("\n");
    }
}

int main() {
    struct Pizza pizzas[100];
    int count = 0;
    int choice;
    
    do {
        printf("Pizza Management System\n");
        printf("1. Add Pizza\n");
        printf("2. Display Pizzas\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                addPizza(pizzas, &count);
                break;
            case 2:
                displayPizzas(pizzas, count);
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
        
    } while(1);
    
    return 0;
}
