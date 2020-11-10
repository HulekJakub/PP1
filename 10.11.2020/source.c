#include <stdio.h>
#include <stdbool.h>
//Rekurencja silnia
/*
int silnia(int a)
{
    if(a==1)    return 1;
    return a*silnia(a-1);
}

int main()
{
    int num=5;
    printf("%d", silnia(num));

    return 0;
}
*/

//Rekurencja zabawa
/*
long f2(long b);
long f1(long a);

int main()
{
    int num=6;
    printf("%d\n", f1(num));

    return 0;
}

long f1(long a)
{
    printf("Wewnatrz f1(%ld)\n", a);
    if(a==1)    return 1;
    return a + f2(a-1);
}

long f2(long b)
{
    printf("Wewnatrz f2(%ld)\n", b);
    if(b==1)    return -1;
    return f1(b-1) - b;
}
*/

//Ciąg Fibbonaciego
/*
long fib_r(long n)
{
    if(n==1)    return 1;
    if(n==2)    return 2;
    return fib_r(n-2) + fib_r(n-1);
}

long fib(long n)
{
    int res=0, n1=1,n2=2,temp;
    if(n<3)    return n;
    n-=2;
    while(n--)
    {
        temp = n1+n2;
        n1 = n2;
        n2 = temp;
    }
    return temp;
}
int main()
{
    int num=30;
    
    printf("%d\n", fib(num));
    printf("%d\n", fib_r(num));
    return 0;
}
*/

//Kółko i krzyżyk
/*
void wypisz(char t[3][3] , int odst)
{
    for(int i=0;i<3;i++)
    {
        for(int i=0;i<odst;i++) printf("    ");
        for(int j=0;j<3;j++)
        {
            printf("%c ", t[i][j]);
        }
        printf("\n");
    }
}

int ocena(char t[3][3])
{
    bool pro_wyg=true, pro_przeg=true;
    for(int i=0;i<3;i++)
    {
         for(int j=0;j<3;j++)
        {
            if(t[i][j] != 'x')
            {
                pro_wyg=false;
            }
            if(t[i][j] != 'o')
            {
                pro_przeg=false;
            }
        }
        if(pro_wyg) return 1;
        if(pro_przeg) return -1;
        pro_wyg = true;
        pro_przeg = true;
    }
    for(int j=0;j<3;j++)
    {
         for(int i=0;i<3;i++)
        {
            if(t[i][j] != 'x')
            {
                pro_wyg=false;
            }
            if(t[i][j] != 'o')
            {
                pro_przeg=false;
            }
        }
        if(pro_wyg) return 1;
        if(pro_przeg) return -1;
        pro_wyg = true;
        pro_przeg = true;
    }
    return 0;
}

void ruch_x(char t[3][3], int it)
{
    for(int i=0;i<3;i++)
    {
         for(int j=0;j<3;j++)
        {
            if(t[i][j] == ' ')
            {
                t[i][j] = 'x';
                wypisz(t, it+1);

                for(int k=0;k<(it+1);k++)   printf("    ");
                printf("%d\n",ocena(t));

                if(ocena(t) == 0)
                {
                    //for(int k=0;k<(it+2);k++)   printf("  ");
                    //printf("{\n");

                    ruch_o(t, it+1);

                    //for(int k=0;k<(it+2);k++)   printf("  ");
                    //printf("}\n");
                }

                t[i][j] = ' ';
            }
        }
    }
}

void ruch_o(char t[3][3], int it)
{
    for(int i=0;i<3;i++)
    {
         for(int j=0;j<3;j++)
        {
            if(t[i][j] == ' ')
            {
                t[i][j] = 'o';
                wypisz(t, it+1);

                for(int k=0;k<(it+1);k++)   printf("    ");
                printf("%d\n",ocena(t));

                if(ocena(t) == 0)
                {
                    //for(int k=0;k<(it+2);k++)   printf("  ");
                    //printf("{\n");

                    ruch_o(t, it+1);

                    //for(int k=0;k<(it+2);k++)   printf("  ");
                    //printf("}\n");
                }
                t[i][j] = ' ';
            }
        }
    }
}


int main()
{
    char pl[3][3]={"oox"," x ","x  "};
    wypisz(pl, 0);
    printf("\n");
    ruch_x(pl,0);
    char a;
    scanf("%c",&a);
    return 0;
}

*/