#include <Stdio.h>

void drawrect(int height,int width)
{
    for(int i=1; i<=height; i++)
    {
        for(int j=1; j<=width; j++)
        {
            if(i==1 || i==height || j==1 || j==width)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}

void prchar(char c,int n)
{
    for(int i=1; i<=n; i++)
        printf("%c",c);
}

void drawtri(int height,int type,int filled)
{
    switch(type)
    {
        int i;
    case 1:
        if(filled)
        {
            for(int i=1; i<=height; i++)
            {
                prchar('*',i);
                printf("\n");
            }
        }
        else
        {

            for(int i=1; i<=height; i++)
            {
                if(i==1 || i==height)
                {
                    prchar('*',i);
                    printf("\n");
                }
                else
                {

                    printf("*");
                    prchar(' ',i-2);
                    printf("*");
                    printf("\n");
                }
            }
        }

        break;
    case 2:
        if(filled)
        {
            for(int i=1; i<=height; i++)
            {
                prchar(' ',height-i);
                prchar('*',i);
                printf("\n");
            }
        }
        else
        {

            for(int i=1; i<=height; i++)
            {
                if(i==1 || i==height)
                {
                    prchar(' ',height-i);
                    prchar('*',i);
                    printf("\n");
                }
                else
                {
                    prchar(' ',height-i);
                    printf("*");
                    prchar(' ',i-2);
                    printf("*");
                    printf("\n");
                }
            }
        }


        break;
    case 3:
        if(filled)
        {
            for(int i=height; i>=1; i--)
            {
                prchar('*',i);
                printf("\n");
            }
        }
        else
        {

            for(int i=height; i>=1; i--)
            {
                if(i==1 || i==height)
                {
                    prchar('*',i);
                    printf("\n");
                }
                else
                {

                    printf("*");
                    prchar(' ',i-2);
                    printf("*");
                    printf("\n");
                }
            }
        }
        break;
    case 4:
        if(filled)
        {
            for(int i=1; i<=height; i++)
            {
                prchar(' ',i-1);
                prchar('*',height-i+1);
                printf("\n");
            }
        }
        else
        {

            for(int i=1; i<=height; i++)
            {
                if(i==1 || i==height)
                {
                    prchar(' ',i-1);
                    prchar('*',height-i+1);
                    printf("\n");
                }
                else
                {
                    prchar(' ',i-1);
                    printf("*");
                    prchar(' ',height-i-1);
                    printf("*");
                    printf("\n");
                }
            }
        }

        break;
    }
}



int main()
{
    while(1)
    {


        int choice = 0,width,height,type,filled;
        printf("main menu :\n");
        printf("1. Rectangle\n");
        printf("2. Vertical triangle\n");
        printf("3. Exit\n");
        printf("=> ");
        scanf("%d",&choice);
        if(choice==3)break;
        switch(choice)
        {
        case 1:
            printf("Enter height and width :");
            scanf("%d %d",&height,&width);
            drawrect(height,width);
            break;
        case 2:
            printf("Enter height,type,filled :");
            scanf("%d %d %d",&height,&type,&filled);

            drawtri(height,type,filled);
            break;
        }

    }
    return 0;
}
