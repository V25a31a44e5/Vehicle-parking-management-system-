#include <stdio.h>

int main() {
    int totalSlots, occupied = 0, choice;

    printf("Enter Total Parking Slots: ");
    scanf("%d", &totalSlots);

    while (1) {
        printf("\n--- Vehicle Parking Management System ---\n");
        printf("1. Park Vehicle\n");
        printf("2. Remove Vehicle\n");
        printf("3. Display Status\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (occupied < totalSlots) {
                    occupied++;
                    printf("Vehicle Parked Successfully!\n");
                } else {
                    printf("Parking Full!\n");
                }
                break;

            case 2:
                if (occupied > 0) {
                    occupied--;
                    printf("Vehicle Removed Successfully!\n");
                } else {
                    printf("No Vehicles in Parking!\n");
                }
                break;

            case 3:
                printf("Total Slots     : %d\n", totalSlots);
                printf("Occupied Slots  : %d\n", occupied);
                printf("Available Slots : %d\n", totalSlots - occupied);
                break;

            case 4:
                printf("Exiting Program...\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}