#include <stdio.h>
#include <string.h>

#define MAX_SEATS 20

int main() {
    int seats[MAX_SEATS] = {0}; // 0 = available, 1 = booked
    int choice, seatNo;

    do {
        printf("\n--- Ticket Booking Menu ---\n");
        printf("1. View available seats\n");
        printf("2. Book a seat\n");
        printf("3. Cancel a seat\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Available seats: ");
            for (int i = 0; i < MAX_SEATS; i++)
                if (!seats[i]) printf("%d ", i + 1);
            printf("\n");
        } else if (choice == 2) {
            printf("Enter seat number to book (1-%d): ", MAX_SEATS);
            scanf("%d", &seatNo);
            if (seatNo < 1 || seatNo > MAX_SEATS)
                printf("Invalid seat number.\n");
            else if (seats[seatNo - 1])
                printf("Seat already booked.\n");
            else {
                seats[seatNo - 1] = 1;
                printf("Seat %d booked successfully.\n", seatNo);
            }
        } else if (choice == 3) {
            printf("Enter seat number to cancel: ");
            scanf("%d", &seatNo);
            if (seatNo >= 1 && seatNo <= MAX_SEATS && seats[seatNo - 1]) {
                seats[seatNo - 1] = 0;
                printf("Seat %d cancelled.\n", seatNo);
            } else
                printf("Invalid operation.\n");
        }
    } while (choice != 4);

    return 0;
}
