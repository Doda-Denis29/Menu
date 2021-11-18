#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#define swappus(x,y) (x ^= y ^= x)
typedef struct Parts {
    char cpu[25], MOBO[50], cpuC[50], gpu[25], hdd[25], ssd[25], Case[75], ram[10], fans[5], hdd_size[20], ssd_size[20];
};
void delay(int number_of_seconds);
int main() {
    int op, num, ver, s = 0;
    char addr[150], b[1];
    struct Parts n;
    do
    {
        struct Parts n;
        system("cls");
        printf("Discount PC part picker \n");
        printf("1.Add the new pc part list \n");
        printf("2.Modify the pc part list \n");
        printf("3.Delete the pc part list \n");
        printf("4.Print your pc part list \n");
        printf("5.To see the current price of this pc part list \n");
        printf("6.Estimate the amount of money required for building this pc \n");
        printf("7.To build your pc \n");
        printf("8.Give up and get a laptop \n");
        printf("Press any other key if you're a mac user \n");
        printf("Select your option: ");
        scanf("%d", &op);
        if (op == 1) {
            system("cls");
            gets(&n.cpu);
            printf("Your cpu of choice is: ");
            gets(&n.cpu);
            fflush(stdin);
            printf("Your motherboard of choice is: ");
            gets(n.MOBO);
            fflush(stdin);
            printf("Your cpu cooler of choice is: ");
            gets(n.cpuC);
            fflush(stdin);
            printf("Your graphics card of choice is: ");
            gets(n.gpu);
            fflush(stdin);
            printf("Your hard disk of choice is: ");
            gets(n.hdd);
            fflush(stdin);
            printf("Your ssd of choice is: ");
            gets(n.ssd);
            fflush(stdin);
            printf("Your computer case of choice is: ");
            gets(n.Case);
            fflush(stdin);
            printf("How much ram should it have(GB): ");
            gets(n.ram);
            fflush(stdin);
            printf("How many fans should it have: ");
            gets(n.fans);
            fflush(stdin);
            printf("How much hard disk space should it have(GB): ");
            gets(n.hdd_size);
            fflush(stdin);
            printf("How much ssd space should it have(GB): ");
            gets(n.ssd_size);
            fflush(stdin);
            printf("PC parts list successfully added! \n");
            printf("Do you want to change something in the list? \n");
            printf("y/n ? \n");
            gets(b);
            fflush(stdin);
            ver = 1;
            if (b[s] == 'y' || b[s] == 'Y') {
                system("cls");
                printf("Loading");
                for (int i = 0; i < 4; i++) {
                    printf(".");
                    delay(1);
                }
                printf("Loaded \n");
                getch();
                system("cls");
            yes:printf("What computer part would you like to change? \n");
                delay(1);
                printf("1-Cpu \n");
                delay(1);
                printf("2-Motherboard \n");
                delay(1);
                printf("3-Cpu cooler \n");
                delay(1);
                printf("4-Graphics card \n");
                delay(1);
                printf("5-Hdd \n");
                delay(1);
                printf("6-Ssd \n");
                delay(1);
                printf("7-Case \n");
                delay(1);
                printf("8-Ram \n");
                delay(1);
                printf("9-Number of fans \n");
                delay(1);
                printf("10-Hard disk space \n");
                delay(1);
                printf("11-Ssd space \n");
                delay(1);
            changer:scanf("%d", &num);
                if (num == 1) {
                    gets(&n.cpu);
                    printf("Type your cpu of choice: ");
                    gets(&n.cpu);
                    fflush(stdin);
                }
                if (num == 2) {
                    gets(&n.MOBO);
                    printf("Type your motherboard of choice: ");
                    gets(&n.MOBO);
                }
                if (num == 3) {
                    gets(&n.cpuC);
                    printf("Type your cpu cooler of choice: ");
                    gets(&n.cpuC);
                }
                if (num == 4) {
                    gets(&n.gpu);
                    printf("Type your graphics card of choice: ");
                    gets(&n.gpu);
                }
                if (num == 5) {
                    gets(&n.hdd);
                    printf("Type your hard disk of choice: ");
                    gets(&n.hdd);
                }
                if (num == 6) {
                    gets(&n.ssd);
                    printf("Type your ssd of choice: ");
                    gets(&n.ssd);
                }
                if (num == 7) {
                    gets(&n.Case);
                    printf("Type your computer case of choice: ");
                    gets(&n.Case);
                }
                if (num == 8) {
                    gets(&n.ram);
                    printf("Type how much ram should it have(GB): ");
                    gets(&n.ram);
                }
                if (num == 9) {
                    gets(&n.fans);
                    printf("Type how many fans should it have: ");
                    gets(&n.fans);
                }
                if (num == 10) {
                    gets(&n.hdd_size);
                    printf("Type how much hard disk space should it have(GB): ");
                    gets(&n.hdd_size);
                }
                if (num == 11) {
                    gets(&n.ssd_size);
                    printf("Type how much ssd space should it have(GB): ");
                    gets(&n.ssd_size);
                }
                printf("Do you want to change something else? ");
                gets(b);
                if (b[s] == 'y' || b[s] == 'Y')
                    goto changer;
                else if (b[s] == 'n' || b[s] == 'N') {
                    printf("Press any key to return to the main menu.. ");
                    getch();
                }
            }
            else if (b[s] == 'n' || b[s] == 'N') {
                printf("Press any key to return to the main menu.. ");
                getch();
            }
        }
        if (op == 2) {
            if (ver == 1) {
                system("cls");
                printf("Loading");
                for (int i = 0; i < 4; i++) {
                    printf(".");
                    delay(1);
                }
                printf("Loaded \n");
                getch();
                system("cls");
                printf("What computer part would you like to change? \n");
                delay(1);
                printf("1-Cpu \n");
                delay(1);
                printf("2-Motherboard \n");
                delay(1);
                printf("3-Cpu cooler \n");
                delay(1);
                printf("4-Graphics card \n");
                delay(1);
                printf("5-Hdd \n");
                delay(1);
                printf("6-Ssd \n");
                delay(1);
                printf("7-Case \n");
                delay(1);
                printf("8-Ram \n");
                delay(1);
                printf("9-Number of fans \n");
                delay(1);
                printf("10-Hard disk space \n");
                delay(1);
                printf("11-Ssd space \n");
                delay(1);
            altchanger:scanf("%d", &num);
                if (num == 1) {
                    gets(&n.cpu);
                    printf("Type your cpu of choice: ");
                    gets(&n.cpu);
                    fflush(stdin);
                }
                if (num == 2) {
                    gets(&n.MOBO);
                    printf("Type your motherboard of choice: ");
                    gets(&n.MOBO);
                }
                if (num == 3) {
                    gets(&n.cpuC);
                    printf("Type your cpu cooler of choice: ");
                    gets(&n.cpuC);
                }
                if (num == 4) {
                    gets(&n.gpu);
                    printf("Type your graphics card of choice: ");
                    gets(&n.gpu);
                }
                if (num == 5) {
                    gets(&n.hdd);
                    printf("Type your hard disk of choice: ");
                    gets(&n.hdd);
                }
                if (num == 6) {
                    gets(&n.ssd);
                    printf("Type your ssd of choice: ");
                    gets(&n.ssd);
                }
                if (num == 7) {
                    gets(&n.Case);
                    printf("Type your computer case of choice: ");
                    gets(&n.Case);
                }
                if (num == 8) {
                    gets(&n.ram);
                    printf("Type how much ram should it have(GB): ");
                    gets(&n.ram);
                }
                if (num == 9) {
                    gets(&n.fans);
                    printf("Type how many fans should it have: ");
                    gets(&n.fans);
                }
                if (num == 10) {
                    gets(&n.hdd_size);
                    printf("Type how much hard disk space should it have(GB): ");
                    gets(&n.hdd_size);
                }
                if (num == 11) {
                    gets(&n.ssd_size);
                    printf("Type how much ssd space should it have(GB): ");
                    gets(&n.ssd_size);
                }
                printf("Do you want to change something else? ");
                gets(b);
                if (b[s] == 'y' || b[s] == 'Y')
                    goto altchanger;
                else if (b[s] == 'n' || b[s] == 'N') {
                    printf("Press any key to return to the main menu.. ");
                    getch();
                }
            }
            else {
                system("cls");
                printf("There is no list to modify.. \n");
                printf("Press any key to return to the main menu..");
                getch();
            }
        }
        if (op == 3) {
            n.cpu[25] = '\0';
            n.MOBO[50] = '\0';
            n.cpuC[50] = '\0';
            n.gpu[25] = '\0';
            n.hdd[25] = '\0';
            n.ssd[25] = '\0';
            n.Case[75] = '\0';
            n.ram[10] = '\0';
            n.fans[5] = '\0';
            n.hdd_size[20] = '\0';
            n.ssd_size[20] = '\0';
            system("cls");
            printf("Pc part list succesfully deleted \n");
            printf("Press any key to return to the main menu.. ");
            getch();
        }
        if (op == 4) {
            system("cls");
            printf("Cpu : %s \n", &n.cpu);
            printf("Motherboard : %s \n", &n.MOBO);
            printf("Cpu cooler : %s \n", &n.cpuC);
            printf("Graphics card : %s \n", &n.gpu);
            printf("Hard disk : %s \n", &n.hdd);
            printf("Ssd : %s \n", &n.ssd);
            printf("Case : %s \n", &n.Case);
            if (n.ram[10] == '\0')
                printf("How much RAM does it have : 0 GB \n");
            else
                printf("How much RAM does it have : %s GB \n", &n.ram);
            if (n.fans[5] == '\0')
                printf("How many fans does it have : 0 \n");
            else
                printf("How many fans does it have : %s \n", &n.fans);
            if (n.hdd_size[20] == '\0')
                printf("How big is the hard disk space : 0 GB \n");
            else
                printf("How big is the hard disk space : %s GB \n", &n.hdd_size);
            if (n.ssd_size[20] == '\0')
                printf("How big is the ssd space : 0 GB \n");
            else
                printf("How big is the ssd space : %s GB \n", &n.ssd_size);
            printf("Press any key to return to the main menu.. ");
            getch();
        }
        if (op == 5) {
            float a = strlen(n.MOBO) * 2 * strlen(n.cpu), b = strlen(n.gpu), c = strlen(n.hdd_size), d = 1000.00;
            const float ab = a * b;
            const float ac = a * c;
            const float bc = b * c;
            const float aa = a * a;
            const float bb = b * b;
            const float cc = c * c;
            system("cls");
            printf("Calculating");
            for (int i = 0; i < 4; i++) {
                printf(".");
                delay(1);
            }
            printf("Calculated! \n");
            delay(2);
            printf("Cpu's cost is : %.2f $ \n", a);
            printf("Motherboard's cost is : %.2f $ \n", ac);
            printf("Cpu Cooler's cost is : %.2f $ \n", ab);
            printf("Graphics card's cost is : %.2f $ \n", d);
            printf("Hard disk's cost is : %.2f $ \n", cc);
            printf("Ssd's cost is : %.2f $ \n", bb);
            printf("Case's cost is : %.2f $ \n", ab);
            printf("RAM's cost is : %.2f $ \n", bc);
            printf("Fan's cost are : %.2f $ \n", ab);
            printf("Press any key to return to the main menu.. ");
            getch();
        }
        if (op == 6) {
            float a = strlen(n.MOBO) * 2 * strlen(n.cpu), b = strlen(n.gpu), c = strlen(n.hdd_size), d = 1000.00;
            const float ab = a * b;
            const float ac = a * c;
            const float bc = b * c;
            const float aa = a * a;
            const float bb = b * b;
            const float cc = c * c;
            const float F = a + ac + ab * 3 + d + cc + bb + bc + strlen(n.Case) * 3;
            system("cls");
            printf("Calculating");
            for (int i = 0; i < 5; i++) {
                printf(".");
                delay(1);
            }
            printf("Calculated! \n");
            printf("Your estimated value sits at : %.2f $ \n", F);
            printf("Press any key to return to the main menu.. ");
            getch();
        }
        if (op == 7) {
            system("cls");
            gets(addr);
            printf("Type your shipping address below \n");
            gets(addr);
            system("cls");
            printf("Building your computer");
            for (int i = 0; i < 5; i++) {
                printf(".");
                delay(1);
            }
            printf(" \n");
            srand(time('\0'));
            int q = rand(), w = rand(), r;
            if (q > w) {
                swappus(q, w);
            }
        timeskip:r = rand();
            if (r % 2 == 0) {
                printf(" \n");
                printf("(\\_/) \n");
                printf("(>_<) \n");
                printf("/> >\\ \n");
                printf("Your pc is ready for shipping at %s \n", addr);
                delay(2);
                printf("Now you only have to wait between %d and %d hours,thank you for choosing the discount PC part list \n", q, w);
                getch();
                break;
            }
            else
                printf("Sorry for the inconvenience but this option is not working at the moment please come back in %d hours \n", w);
            printf("Press any key to time skip");
            getch();
            goto timeskip;
        }
        if (op == 8) {
            system("cls");
            printf("You sad sad person \n");
            printf("Go back and select 1 \n");
            getch();
        }
    } while (op >= 1 && op <= 8);
    printf("Thank you for using the discount PC part picker \n");
    printf("Have a nice day :) \n");
    printf(" \n");
    printf(" \n");
}
void delay(int number_of_seconds) {
    int milli_seconds = 1000 * number_of_seconds;
    clock_t start_time = clock();
    while (clock() < start_time + milli_seconds);
}