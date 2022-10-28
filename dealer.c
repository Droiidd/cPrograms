#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *ptr;
    double salary = strtod(argv[1], &ptr);

    // ===== THIS IS ALL STRUCTURAL =====

    struct vehicle
    {
        char manufacturer[15];
        char make[15];
        char model[22];
        double price;
    };

    struct vehicle toyotaCars[10];
    struct vehicle nissanCars[10];
    struct vehicle vwCars[10];
    struct vehicle bmwCars[10];
    struct vehicle chevorletCars[10];

    int i = 0;
    struct vehicle vehicle1 = {"Toyota", "Toyota", "Corolla", 21550};
    toyotaCars[i] = vehicle1;
    i++;
    struct vehicle vehicle2 = {"Toyota", "Toyota", "Camry", 25945};
    toyotaCars[i] = vehicle2;
    i++;
    struct vehicle vehicle3 = {"Toyota", "Toyota", "Avalon", 36825};
    toyotaCars[i] = vehicle3;
    i++;
    struct vehicle vehicle4 = {"Toyota", "Toyota", "Mirai", 49500};
    toyotaCars[i] = vehicle4;
    i++;
    struct vehicle vehicle5 = {"Toyota", "Toyota", "Sequoia", 58300};
    toyotaCars[i] = vehicle5;
    i++;
    struct vehicle vehicle6 = {"Toyota", "Toyota", "Tacoma", 27250};
    toyotaCars[i] = vehicle6;
    i++;
    struct vehicle vehicle7 = {"Toyota", "Toyota", "Tundra", 36965};
    toyotaCars[i] = vehicle7;
    i++;
    struct vehicle vehicle8 = {"Toyota", "Lexus", "IS", 40585};
    toyotaCars[i] = vehicle8;
    i++;
    struct vehicle vehicle9 = {"Toyota", "Lexus", "ES", 42490};
    toyotaCars[i] = vehicle9;
    i++;
    struct vehicle vehicle10 = {"Toyota", "Lexus", "GX", 57575};
    toyotaCars[i] = vehicle10;
    i = 0;
    struct vehicle vehicle11 = {"Chevrolet", "Chevy", "Trailblazer", 22100};
    chevorletCars[i] = vehicle11;
    i++;
    struct vehicle vehicle12 = {"Chevrolet", "Chevy", "Camaro", 26100};
    chevorletCars[i] = vehicle12;
    i++;
    struct vehicle vehicle13 = {"Chevrolet", "Chevy", "Equinox", 26600};
    chevorletCars[i] = vehicle13;
    i++;
    struct vehicle vehicle14 = {"Chevrolet", "Chevy", "Traverse", 34520};
    chevorletCars[i] = vehicle14;
    i++;
    struct vehicle vehicle15 = {"Chevrolet", "Chevy", "Tahoe", 54200};
    chevorletCars[i] = vehicle15;
    i++;
    struct vehicle vehicle16 = {"Chevrolet", "Chevy", "Suburban", 56900};
    chevorletCars[i] = vehicle16;
    i++;
    struct vehicle vehicle17 = {"Chevrolet", "Chevy", "Corvette", 64500};
    chevorletCars[i] = vehicle17;
    i++;
    struct vehicle vehicle18 = {"Chevrolet", "Chevy", "Spark", 13600};
    chevorletCars[i] = vehicle18;
    i++;
    struct vehicle vehicle19 = {"Chevrolet", "Chevy", "Trax", 21700};
    chevorletCars[i] = vehicle19;
    i++;
    struct vehicle vehicle20 = {"Chevrolet", "Chevy", "Malibu", 23400};
    chevorletCars[i] = vehicle20;
    i = 0;
    struct vehicle vehicle21 = {"Nissan", "Nissan", "Versa", 18990};
    nissanCars[i] = vehicle21;
    i++;
    struct vehicle vehicle22 = {"Nissan", "Nissan", "Sentra", 22700};
    nissanCars[i] = vehicle22;
    i++;
    struct vehicle vehicle23 = {"Nissan", "Nissan", "Altima", 35385};
    nissanCars[i] = vehicle23;
    i++;
    struct vehicle vehicle24 = {"Nissan", "Nissan", "Maxima", 43300};
    nissanCars[i] = vehicle23;
    i++;
    struct vehicle vehicle25 = {"Nissan", "Nissan", "Pathfinder", 50660};
    nissanCars[i] = vehicle25;
    i++;
    struct vehicle vehicle26 = {"Nissan", "Nissan", "Rogue", 38640};
    nissanCars[i] = vehicle26;
    i++;
    struct vehicle vehicle27 = {"Nissan", "Nissan", "Murano", 46910};
    nissanCars[i] = vehicle27;
    i++;
    struct vehicle vehicle28 = {"Nissan", "Infiniti", "Q50", 42650};
    nissanCars[i] = vehicle28;
    i++;
    struct vehicle vehicle29 = {"Nissan", "Infiniti", "QX55", 49150};
    nissanCars[i] = vehicle29;
    i++;
    struct vehicle vehicle30 = {"Nissan", "Infiniti", "QX80", 72700};
    nissanCars[i] = vehicle30;
    i = 0;
    struct vehicle vehicle31 = {"BMW", "BMW", "2 Series Coupe", 38050};
    bmwCars[i] = vehicle31;
    i++;
    struct vehicle vehicle32 = {"BMW", "BMW", "3 Series Sedan", 48220};
    bmwCars[i] = vehicle32;
    i++;
    struct vehicle vehicle33 = {"BMW", "BMW", "4 Series Convertible", 59320};
    bmwCars[i] = vehicle33;
    i++;
    struct vehicle vehicle34 = {"BMW", "BMW", "5 Series Sedan", 55175};
    bmwCars[i] = vehicle34;
    i++;
    struct vehicle vehicle35 = {"BMW", "BMW", "7 Series Sedan", 93400};
    bmwCars[i] = vehicle35;
    i++;
    struct vehicle vehicle36 = {"BMW", "BMW", "X1", 39700};
    bmwCars[i] = vehicle36;
    i++;
    struct vehicle vehicle37 = {"BMW", "BMW", "X3", 46050};
    bmwCars[i] = vehicle37;
    i++;
    struct vehicle vehicle38 = {"BMW", "BMW", "X4", 54050};
    bmwCars[i] = vehicle38;
    i++;
    struct vehicle vehicle39 = {"BMW", "BMW", "X5", 75400};
    bmwCars[i] = vehicle39;
    i++;
    struct vehicle vehicle40 = {"BMW", "BMW", "X7", 77850};
    bmwCars[i] = vehicle40;
    i++;
    i = 0;
    struct vehicle vehicle41 = {"Volkswagen", "VW", "Jetta", 18995};
    vwCars[i] = vehicle41;
    i++;
    struct vehicle vehicle42 = {"Volkswagen", "VW", "Passat", 23995};
    vwCars[i] = vehicle42;
    i++;
    struct vehicle vehicle43 = {"Volkswagen", "VW", "Arteon", 36995};
    vwCars[i] = vehicle43;
    i++;
    struct vehicle vehicle44 = {"Volkswagen", "Audi", "Q5", 43500};
    vwCars[i] = vehicle44;
    i++;
    struct vehicle vehicle45 = {"Volkswagen", "Audi", "Q3", 38700};
    vwCars[i] = vehicle45;
    i++;
    struct vehicle vehicle46 = {"Volkswagen", "Audi", "S6", 72700};
    vwCars[i] = vehicle46;
    i++;
    struct vehicle vehicle47 = {"Volkswagen", "Audi", "A6", 55900};
    vwCars[i] = vehicle47;
    i++;
    struct vehicle vehicle48 = {"Volkswagen", "Porsche", "Panamera", 132760};
    vwCars[i] = vehicle48;
    i++;
    struct vehicle vehicle49 = {"Volkswagen", "Porsche", "Macan", 69480};
    vwCars[i] = vehicle49;
    i++;
    struct vehicle vehicle50 = {"Volkswagen", "Porsche", "Cayenne", 92960};
    vwCars[i] = vehicle50;

    // Change this variable to change how many models of each car there are
    int modelAmount = 10;
    double temp;
    double temp2;
    for (int i = 0; i < modelAmount; i++)
    {
        for (int j = i + 1; j < modelAmount; j++)
        {
            temp = toyotaCars[i].price;
            temp2 = toyotaCars[j].price;
            if (temp > temp2)
            {
                struct vehicle tempV;
                tempV = toyotaCars[i];
                toyotaCars[i] = toyotaCars[j];
                toyotaCars[j] = tempV;
            }
        }
    }

    for (int i = 0; i < modelAmount; i++)
    {
        for (int j = i + 1; j < modelAmount; j++)
        {
            temp = nissanCars[i].price;
            temp2 = nissanCars[j].price;
            if (temp > temp2)
            {
                struct vehicle tempV;
                tempV = nissanCars[i];
                nissanCars[i] = nissanCars[j];
                nissanCars[j] = tempV;
            }
        }
    }
    for (int i = 0; i < modelAmount; i++)
    {
        for (int j = i + 1; j < modelAmount; j++)
        {
            temp = bmwCars[i].price;
            temp2 = bmwCars[j].price;
            if (temp > temp2)
            {
                struct vehicle tempV;
                tempV = bmwCars[i];
                bmwCars[i] = bmwCars[j];
                bmwCars[j] = tempV;
            }
        }
    }
    for (int i = 0; i < modelAmount; i++)
    {
        for (int j = i + 1; j < modelAmount; j++)
        {
            temp = vwCars[i].price;
            temp2 = vwCars[j].price;
            if (temp > temp2)
            {
                struct vehicle tempV;
                tempV = vwCars[i];
                vwCars[i] = vwCars[j];
                vwCars[j] = tempV;
            }
        }
    }
    for (int i = 0; i < modelAmount; i++)
    {
        for (int j = i + 1; j < modelAmount; j++)
        {
            temp = chevorletCars[i].price;
            temp2 = chevorletCars[j].price;
            if (temp > temp2)
            {
                struct vehicle tempV;
                tempV = chevorletCars[i];
                chevorletCars[i] = chevorletCars[j];
                chevorletCars[j] = tempV;
            }
        }
    }
    double interest;
    if (salary <= 30000)
    {
        interest = 0.1328;
    }
    if (salary > 45000 && salary < 80000)
    {
        interest = 0.0949;
    }
    if (salary > 80000 && salary <= 125000)
    {
        interest = 0.0655;
    }
    if (salary > 125000)
    {
        interest = 0.0479;
    }

    // for (int i = 0; i < modelAmount; i++)
    // {
    //     printf(" ===== CAR SLOT %d =====\n", i);
    //     printf("* * %s, %s - $%.2f\n", nissanCars[i].make, nissanCars[i].model, nissanCars[i].price);
    //     printf("* * %s, %s - $%.2f\n", bmwCars[i].make, bmwCars[i].model, bmwCars[i].price);
    //     printf("* * %s, %s - $%.2f\n", vwCars[i].make, vwCars[i].model, vwCars[i].price);
    //     printf("* * %s, %s - $%.2f\n\n", chevorletCars[i].make, chevorletCars[i].model, chevorletCars[i].price);
    // }

    // ===== BEGINNNING OF FORMATTING AND INPUT/OUTPUT CODE =====

    // === Taking user down payment ===
    printf("Enter a down payment: ");
    double downPayment;
    scanf("%lf", &downPayment);

    // Choosing a dealer
    // == DEALER VARIABLES ==
    double monthlyPay[10];
    double monthlyPayment;
    double percentOfSalary = 0.15 * (salary / 12);

    double principal;
    double principalList[5];
    double lowestVehicleCost[] = {toyotaCars[0].price, chevorletCars[0].price, nissanCars[0].price, bmwCars[0].price, vwCars[0].price};

    for (int i = 0; i < 5; i++)
    {
        principalList[i] = lowestVehicleCost[i] - downPayment;
        monthlyPay[i] = (principalList[i] + principalList[i] * interest * 5) / (5 * 12);
    }

    char manufacAvlb[50] = "";
    char toyotaName[] = "1.) Toyota  ";
    char chevorletName[] = "2.) Chevorlet  ";
    char nissanName[] = "3.) Nissan  ";
    char bmwName[] = "4.) BMW  ";
    char vwName[] = "5.) VW Group  ";
    if (monthlyPay[0] < percentOfSalary)
    {
        strcat(manufacAvlb, toyotaName);
    }
    if (monthlyPay[1] < percentOfSalary)
    {
        strcat(manufacAvlb, chevorletName);
    }
    if (monthlyPay[2] < percentOfSalary)
    {
        strcat(manufacAvlb, nissanName);
    }
    if (monthlyPay[3] < percentOfSalary)
    {
        strcat(manufacAvlb, bmwName);
    }
    if (monthlyPay[4] < percentOfSalary)
    {
        strcat(manufacAvlb, vwName);
    }

    // === User chooses a car make / model ===
    printf("Available manufacturers:\n");
    printf("%s\n", manufacAvlb);
    printf("Select manufacturer: ");
    int dealerChoice;
    int userIn;
    struct vehicle topVehicles[11];
    int j = 0;
    double topPriceList[11];
    int y = 0;
    scanf("%d", &dealerChoice);

    switch (dealerChoice)
    {
    case 1:

        // ===== Displaying the affordable models =====
        printf("Available Make/Model: \n");
        for (int i = 0; i < modelAmount; i++)
        {
            principal = toyotaCars[i].price - downPayment;
            monthlyPayment = (principal + principal * interest * 5) / (5 * 12);
            if (monthlyPayment <= percentOfSalary)
            {
                topVehicles[j] = toyotaCars[i];
                topPriceList[j] = monthlyPayment;
                j++;
            }
        }

        do
        {
            printf("%d) %s %s - $%.2f \n", y + 1, topVehicles[y].make, topVehicles[y].model, topVehicles[y].price);
            y++;
        } while (topPriceList[y] > 0);

        // ===== Handling the model choice =====
        printf("\nSelect a make/model:");

        scanf("%d", &userIn);
        printf("You selected the %s %s. Your monthly payment will be:\n ~~~  $%.2f\n", topVehicles[userIn - 1].make, topVehicles[userIn - 1].model, topPriceList[userIn - 1]);

        break;
    case 2:

        // ===== Displaying the affordable models =====
        printf("Available Make/Model: \n");
        for (int i = 0; i < modelAmount; i++)
        {
            principal = chevorletCars[i].price - downPayment;
            monthlyPayment = (principal + principal * interest * 5) / (5 * 12);
            if (monthlyPayment <= percentOfSalary)
            {
                topVehicles[j] = chevorletCars[i];
                topPriceList[j] = monthlyPayment;
                j++;
            }
        }

        do
        {
            printf("%d) %s %s - $%.2f \n", y + 1, topVehicles[y].make, topVehicles[y].model, topVehicles[y].price);
            y++;
        } while (topPriceList[y] > 0);

        // ===== Handling the model choice =====
        printf("\nSelect a make/model:");

        scanf("%d", &userIn);
        printf("You selected the %s %s. Your monthly payment will be:\n ~~~  $%.2f\n", topVehicles[userIn - 1].make, topVehicles[userIn - 1].model, topPriceList[userIn - 1]);

        break;
    case 3:

        // ===== Displaying the affordable models =====
        printf("Available Make/Model: \n");
        for (int i = 0; i < modelAmount; i++)
        {
            principal = nissanCars[i].price - downPayment;
            monthlyPayment = (principal + principal * interest * 5) / (5 * 12);
            if (monthlyPayment <= percentOfSalary)
            {
                topVehicles[j] = nissanCars[i];
                topPriceList[j] = monthlyPayment;
                j++;
            }
        }

        do
        {
            printf("%d) %s %s - $%.2f \n", y + 1, topVehicles[y].make, topVehicles[y].model, topVehicles[y].price);
            y++;
        } while (topPriceList[y] > 0);

        // ===== Handling the model choice =====
        printf("\nSelect a make/model:");

        scanf("%d", &userIn);
        printf("You selected the %s %s. Your monthly payment will be:\n ~~~  $%.2f\n", topVehicles[userIn - 1].make, topVehicles[userIn - 1].model, topPriceList[userIn - 1]);

        break;

    case 4:

        // ===== Displaying the affordable models =====
        printf("Available Make/Model: \n");
        for (int i = 0; i < modelAmount; i++)
        {
            principal = bmwCars[i].price - downPayment;
            monthlyPayment = (principal + principal * interest * 5) / (5 * 12);
            if (monthlyPayment <= percentOfSalary)
            {
                topVehicles[j] = bmwCars[i];
                topPriceList[j] = monthlyPayment;
                j++;
            }
        }

        do
        {
            printf("%d) %s %s - $%.2f \n", y + 1, topVehicles[y].make, topVehicles[y].model, topVehicles[y].price);
            y++;
        } while (topPriceList[y] > 0);

        // ===== Handling the model choice =====
        printf("\nSelect a make/model:");

        scanf("%d", &userIn);
        printf("You selected the %s %s. Your monthly payment will be:\n ~~~  $%.2f\n", topVehicles[userIn - 1].make, topVehicles[userIn - 1].model, topPriceList[userIn - 1]);

        break;
    case 5:

        // ===== Displaying the affordable models =====
        printf("Available Make/Model: \n");
        for (int i = 0; i < modelAmount; i++)
        {
            principal = vwCars[i].price - downPayment;
            monthlyPayment = (principal + principal * interest * 5) / (5 * 12);
            if (monthlyPayment <= percentOfSalary)
            {
                topVehicles[j] = vwCars[i];
                topPriceList[j] = monthlyPayment;
                j++;
            }
        }

        do
        {
            printf("%d) %s %s - $%.2f \n", y + 1, topVehicles[y].make, topVehicles[y].model, topVehicles[y].price);
            y++;
        } while (topPriceList[y] > 0);

        // ===== Handling the model choice =====
        printf("\nSelect a make/model:");

        scanf("%d", &userIn);
        printf("You selected the %s %s. Your monthly payment will be:\n ~~~  $%.2f\n", topVehicles[userIn - 1].make, topVehicles[userIn - 1].model, topPriceList[userIn - 1]);

        break;
    }
    // ===== End of switch =====

    return 0;
}