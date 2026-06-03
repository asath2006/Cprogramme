#include <stdio.h>

enum Status {
    PENDING,
    SHIPPED,
    DELIVERED
};

void displayStatus(enum Status status) {
    switch(status) {
        case PENDING:
            printf("Order Status: PENDING\n");
            break;
        case SHIPPED:
            printf("Order Status: SHIPPED\n");
            break;
        case DELIVERED:
            printf("Order Status: DELIVERED\n");
            break;
    }
}

int main() {
    enum Status orderStatus = PENDING;
    int choice;

    printf("Current ");
    displayStatus(orderStatus);

    printf("\nUpdate Status:\n");
    printf("1. SHIPPED\n");
    printf("2. DELIVERED\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
        orderStatus = SHIPPED;
    else if (choice == 2)
        orderStatus = DELIVERED;
    else
        printf("Invalid choice!\n");

    printf("Updated ");
    displayStatus(orderStatus);

    return 0;
}
