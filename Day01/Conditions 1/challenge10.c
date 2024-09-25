
int main() {


char Month;
int day,year;

    printf("Entrez une date jj/moin/nnnn : ");
    scanf("%d/%d/%d",&day, &Month,&year);


    switch (Month)
    {
    case 1:
       printf("%d-January-%d\n" , day ,year);
        break;

    case 2:
         printf("%d-Ferbruary-%d\n" , day ,year);
        break;

    case 3:
        printf("%d-march-%d\n" , day ,year);
        break;

    case 4:
        printf("%d-April-%d\n" , day ,year);
        break;

    case 5:
        printf("%d-May-%d\n" , day ,year);
        break;

    case 6:
        printf("%d-June-%d\n" , day ,year);
        break;
    case 7:
         printf("%d-July-%d\n" , day ,year);
        break;
    case 8:
         printf("%d-August-%d\n" , day ,year);
        break;
    case 9:
         printf("%d-September-%d\n" , day ,year);
        break;
    case 10:
        printf("%d-octobre-%d\n" , day ,year);
        break;
    case 11:
         printf("%d-November-%d\n" , day ,year);
        break;
    case 12:
       printf("%d-Decembre-%d\n" , day ,year);
        break; 

    }

    return 0;
}