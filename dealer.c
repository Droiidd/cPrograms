#include <stdio.h>






int main(int argc, char *argv[])
{

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
    printf("THIS IS THE FIRST CAR:\n %s, %s, %.2f\n", toyotaCars[0].make, toyotaCars[0].model, toyotaCars[0].price);
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

    int count= 10;
    double temp;
    double temp2;
    for (int i = 0; i < count; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            temp = toyotaCars[i].price;
            temp2 = toyotaCars[j].price;
            if(temp > temp2){
                struct vehicle tempV;
                tempV = toyotaCars[i];
                toyotaCars[i] = toyotaCars[j];
                toyotaCars[j] = tempV;

            }
        }
        
    }
    for (int i = 0; i < 10; i++)
    {
        printf("==== %s, %s ====\n",toyotaCars[i].make, toyotaCars[i].model);
        printf("$$ %.2f %%\n", toyotaCars[i].price);
    }
    

    int salary;
    printf("Please enter your salary:\n");
    scanf("%d", &salary);

    double interest;
    if (salary <= 30000)
    {
        interest = 1.0479;
    }
    if (salary > 45000 && salary < 80000)
    {
        interest = 1.0655;
    }
    if (salary > 80000 && salary <= 125000)
    {
        interest = 1.0949;
    }
    if (salary > 125000)
    {
        interest = 1.1328;
    }
    printf("Enter a down payment:\n");
    int downPayment;
    scanf("%d", &downPayment);

    printf("Available makes and models:\n");
    printf("1. Toyota 2. Chevorlet 3. Nissan 4. VW Group\n");
    int dealerChoice;
    scanf("%d", &dealerChoice);

    // Choosing a dealer

    // 1.)Toyota 2.)Chevorlet 3.) Nissan 4.) VW Group"
    // double principal;
    double monthlyPayment;
    double percentOfSalary = 0.15 * salary;
    int t;
    double principal;

    printf("%d = test amount\n", t);
    

    switch (dealerChoice)
    {
    case 1:
        struct vehicle top3Vehicles[3];
        int j = 0;
        double monthlyPriceList[3];
        



        do{
            for (int i = 10; i > 0; i--)
            {
                //  principal = toyotaCars[i].price - downPayment;
                //  monthlyPayment = ((principal + principal * interest * 5) / (5 * 12));
                //  printf("Principal = %d, monthly = %d\n", principal, monthlyPayment);
                t = toyotaCars[i].price;
                principal = t - downPayment;
                printf("%.2f = T, %.2f = principal", t, principal);
                printf("%.2f\n",interest);
                monthlyPayment = ((principal + principal * interest * 5) / (5 * 12));
                printf("==== %s, %s ====\n",toyotaCars[i].make, toyotaCars[i].model);
                printf("Principal = %.2f, monthly = %.2f\n", principal, monthlyPayment);
                printf("%d = price, %d = down pament\n", t, downPayment);
                printf("%.2f - PoS\n", percentOfSalary);

                if (monthlyPayment < percentOfSalary)
                {
                    top3Vehicles[j] = toyotaCars[i];
                    j++;
                    monthlyPriceList[j] = monthlyPayment;
                    printf("j = %d\n", j);
                }
            }
        }
        while (j < 3); 
        
        for (int i = 0; i < 3; i++)
        {

            printf("%d .) %s, %s - $%.2f\n", i+1, top3Vehicles[i].make, top3Vehicles[i].model, top3Vehicles[i].price);
            //printf("\n%d = Dealer choice\n", dealerChoice);
        }
        printf("Select a make/model:");
        int userIn;
        scanf("%d",&userIn);
        printf("You selected thhe %s %s. Your monthly payment will be:\n ~~~  $%.2f\n", top3Vehicles[userIn-1].make,top3Vehicles[userIn-1].model,monthlyPriceList[userIn-1]);

        // five years (rate)

        break;
    case 2:

        break;
    case 3:

        break;

    case 4:

        break;
    }
    // ===== End of switch =====

    return 0;
}