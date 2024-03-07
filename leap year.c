{
    int a;
    printf("enter a year to check leap year or not\n");
    scanf("%d",&a);

    if(a%4==0){
        if(a%100==0){
            if(a%400==0){
                printf("leap year");
            }
            else{
                printf("not a leap year");
            }
        }
        else{printf("leap year");
        }
    }
    else{
        printf("not a leap year");
    }
    return 0;
}
