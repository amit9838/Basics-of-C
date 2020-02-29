    #include<stdio.h>
    main()
    {
        int a,b,c,sum;
        printf("Enter any three no.:   ");
        scanf("%d%d%d",&a,&b,&c);
        sum = calsum(a,b,c);
        printf("Sum = %d",sum);
        return 0;
    }
    int calsum(int a,int b,int c)
        {
            int d;
            d  = a+b+c;
            return (d);
        }
    