#include<stdio.h>
#include<conio.h>

int MAXSTACK;
typedef int itemtype;

typedef struct
{
    itemtype item[300];
    int count;
} stack;

void initializestack(stack *s)
{
    s->count = 0;
}

int empty (stack *s)
{
    return (s->count == 0);
}

int full(stack *s)
{
    return (s->count == MAXSTACK);
}

void push (itemtype x, stack *s)
{

    if(full(s))
        printf("stack geguh !\n");
    else {
        s->item[s->count]=x;
        ++(s->count) ;
    }
}

int pop (stack *s)
{
    if (empty (s))
        printf("stack kosqug\n");
    else
    {
        --(s->count) ;
        return (s->item[s->count]);
    }
    return 0;

}

int i, n, m, o,p,pilih;
int input;
stack tumpukan;
void biner (){
    for (o=1,n=input;n>0;n=n/2,o++)
    {
        MAXSTACK=o;
        m=n%8;
        push (m, &tumpukan) ;
    }
    for (i=MAXSTACK;i>0;i--)
    {
        printf("%d", pop (&tumpukan));
    }
}

void oktal (){
     for (o=1,n=input;n>0;n=n/8,o++)
     {
         MAXSTACK=o;
         m=n%8;
         push (m, &tumpukan) ;
     }
     for (i=MAXSTACK;i>0;i--)
     {
        printf("%d", pop (&tumpukan));
     }
}

void heksa() {
    for (o=1,n=input;n>0;n=n/16, o++)
    {
        MAXSTACK=o;
        m=n%16;
        push (m, &tumpukan) ;
    }
    for (i=MAXSTACK;i>0;i--)
    {
        p=pop (&tumpukan) ;
        if (p<=9)
            printf ("%d",p);
        else if (p==10) printf("A");
        else if (p==11) printf("B");
        else if (p==12) printf("C");
        else if (p==13) printf("D");
        else if (p==14) printf("E");
        else if (p==15) printf("F");
    }
 }

main ()
{
    printf("-----konversi desimal ke biner oktal dan heksadesimal------\n");
    initializestack(&tumpukan) ;
    printf ("\nmasukkan Ridangan desimal = ");
    scanf ("%d", &input);
    printf("\n---MENU---\n") ;
    printf("1 untuk konversi ke biner\n");
    printf("2 untuk konversi ks oktal\n");
    printf("3 untuk konversi ks heksa\n");
    printf ("4 untuk keluar");
    while (pilih<4) {
        printf ("\n\npilih : ");
        scanf ("%d", &pilih);
        switch(pilih)
        {
            case 1:
                printf ("Bilangan binernya\n");
                biner ();break;
            case 2:
                printf ("Bilangan oktalnya\n");
                oktal ();break;
            case 3:
                printf ("Bilangan heksadesimalnya\n");
                heksa () ;break;
            case 4:
                printf ("--silahkan tekan enter sekali lagi");
    }}
}
