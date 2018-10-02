#include <Stdio.h>

int main()
{
    while(1)
    {


        int choice = 0,width,height,type;
        printf("main menu :\n");
        printf("1. rectangle\n");
        printf("2. vertical triangle\n");
        printf("3. Exit\n");
        printf("=> ");
        scanf("%d",&choice);
        if(choice==3)break;
        switch(choice)
        {
        case 1:
            printf("Enter height and width :");
            scanf("%d %d",&height,&width);
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
            break;
        case 2:
            printf("Enter height and type :\n");
            scanf("%d %d",&height,&type);
            switch(type)
            {
            case 1:
                for(int i=1; i<=height; i++)
                {
                    for(int j=1; j<=i; j++)
                    {
                        if(i==height || j==1 || i==j)
                        {
                            printf("*");
                        }
                        else
                            printf(" ");
                    }
                    printf("\n");
                }

                break;
            case 2:
                for(int i=1; i<=height; i++)
                {
                    for(int j=height; j>=1; j--)
                    {
                        if(i==height || j==1 || i==j)
                        {
                            printf("*");
                        }
                        else
                            printf(" ");
                    }
                    printf("\n");
                }

                break;
            case 3:
                for(int i=1; i<=height; i++)
                {
                    for(int j=1; j<=height; j++)
                    {
                        if(i==1 || j==1 || i+j==height+1)
                        {
                            printf("*");
                        }
                        else
                            printf(" ");
                    }
                    printf("\n");
                }

                break;
            case 4:
                for(int i=1; i<=height; i++)
                {
                    for(int j=1; j<=height; j++)
                    {
                        if(i==1 || j==height || i==j)
                        {
                            printf("*");
                        }
                        else
                            printf(" ");
                    }
                    printf("\n");
                }

                break;
            }

            break;
        }

    }

    return 0;
}
