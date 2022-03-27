#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


// ************* STORE MANAGEMENT SYSTEM *************

/* void insert();
void display();
void search();
void delete();
void update();
void buy(); */
void main()
{
    int choice;
    do
    {
        printf("\n\t\t\t\t\t\t <------------> PRODUCT INFORMATION <------------>\n");
        printf("\n\t\t\t\t\t\tSelect Your Choise");
        printf("\n\t\t\t\t\t\t1. INSERT\n\t\t\t\t\t\t2. DISPLAY\n\t\t\t\t\t\t3. SEARCH\n\t\t\t\t\t\t4. DELETE\n\t\t\t\t\t\t5. UPDATE\n\t\t\t\t\t\t6. Buy\n\t\t\t\t\t\t7. Exit\n");
        printf("\t\t\t\t\t\t_____________________________");
        printf("\n\t\t\t\t\t\tEnter Your Choise : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
            search();
            break;

        case 4:
            delete ();
            break;

        case 5:
            update();
            break;
        case 6:
            buy();
            break;
        case 7:
            exit(1);
        default:
            printf("\t\t\t\t\t\tYou Entered Wrong Choise!");
            break;
        }
    } while (choice != 7);
}