#include <stdio.h>
#include <stdlib.h>

typedef struct polynomial
{
    int coff, exp;
    struct polynomial *next;
} poly;

poly *head1 = NULL, *head2 = NULL, *head3 = NULL, *newnode = NULL;
poly *t1 = NULL, *t2 = NULL, *t3 = NULL;

void main()
{
    int term, e, c;
    int i, j;
    printf("\n Enter the totel term of polynomial first equation ");
    scanf("%d", &term);

    for (i = 0; i < term; i++)
    {
        newnode = (poly *)malloc(sizeof(poly));
        if (newnode == NULL)
        {
            printf("\n Not enough data");
            exit(1);
        }
        printf("\n Enter term %d", i + 1);
        printf("\n Enter the cofficient: ");
        scanf("%d", &c);
        printf("\n Enter the exponent: ");
        scanf("%d", &e);
        newnode->coff = c;
        newnode->exp = e;
        newnode->next = NULL;
        if (head1 == NULL)
        {
            head1 = newnode;
        }
        else
        {
            t1 = head1;
            while (t1->next != NULL)
            {
                t1 = t1->next;
            }
            t1->next = newnode;
        }
        
    } // end of for loop

    printf("\n First polynomial exp. is: ");
    t1 = head1;
    while (t1 != NULL)
    {
        printf("%d X %d \t ", t1->coff, t1->exp);
        t1 = t1->next;
    } //end of while

 //for second polynomial equation.....

    printf("\n\n Enter the totel term of polynomial second equation ");
    scanf("%d", &term);

    for (i = 0; i < term; i++)
    {
        newnode = (poly *)malloc(sizeof(poly));
        if (newnode == NULL)
        {
            printf("\n Not enough data");
            exit(1);
        }
        printf("\n Enter term %d", i+1);
        printf("\n Enter the cofficient: ");
        scanf("%d", &c);
        printf("\n Enter the exponent: ");
        scanf("%d", &e);
        newnode->coff = c;
        newnode->exp = e;
        newnode->next = NULL;
        if (head2 == NULL)
        {
            head2 = newnode;
        }
        else
        {
            t1 = head2;
            while (t1->next != NULL)
                t1 = t1->next; 
        t1->next = newnode;
        }
    } // end of for loop


        printf("\n Second polynomial exp. is: ");
        t1 = head2;
        while (t1 != NULL)
        {
            printf("%d X %d \t ", t1->coff, t1->exp);
            t1 = t1->next;
        }//end of while

//addition of two polynomial equation....
        t1 = head1;
        t2 = head2;

        while ((t1 != NULL) || (t2 != NULL))
        {
            if (t1->exp > t2->exp)
            {
                c = t1->coff;
                e = t1->exp;
                t1 = t1->next;
            }
            else if (t1->exp < t2->exp)
            {
                c = t2->coff;
                e = t2->exp;
                t2 = t2->next;
            }
            else
            {
                c = t1->coff + t2->coff;
                e = t1->exp;
                t1 = t1->next;
                t2 = t2->next;
            }

            newnode = (poly *)malloc(sizeof(poly));
                if (newnode == NULL)
                {
                    printf("\n Memory not enough: ");
                    exit(1);
                }
                newnode->coff = c;
                newnode->exp = e;
                newnode->next = NULL;
                if (head3 == NULL)
                    head3 == newnode;
                else
                {
                    t3 = head3;
                    while (t3->next != NULL)
                        t3 = t3->next;
                t3->next = newnode;
                } // end of while
        } // end of while

        printf("\n Addition of polynomial exp. is: ");
        t1 = head3;
        while (t1 != NULL)
        {
            printf("%d X %d \t ", t1->coff, t1->exp);
            t1 = t1->next;
        } // end of while
    }//end of main...
