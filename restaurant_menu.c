
#include <stdio.h>

int main() 
{
    int choice, quantity;
    int price = 0;

    printf("===== RESTAURANT MENU =====\n");
    printf("1. Burger   - Rs. 100\n");
    printf("2. Pizza    - Rs. 200\n");
    printf("3. Sandwich - Rs. 80\n");
    printf("4. Coffee   - Rs. 50\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    switch (choice) {
        case 1:
            price = 100;
            break;
        case 2:
            price = 200;
            break;
        case 3:
            price = 80;
            break;
        case 4:
            price = 50;
            break;
        default:
            printf("Invalid choice!\n");
            return 0;
    }

    if (quantity <= 0) {
        printf("Invalid quantity!\n");
    } else {
        printf("Total bill = Rs. %d\n", price * quantity);
    }

    return 0;
}
