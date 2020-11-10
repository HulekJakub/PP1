//Podawanie wskaźnika do funkcji
/*
#include <stdlib.h>

void f2(double *a)
{
    *a*=2;
    return;
}
int main()
{
    double w;
    w=21;
    f2(&w);
    printf("%lf\n",w);

    return 0;
}
*/


//Funkcje tabliczne
/*
#include <stdlib.h>

void odwroc(char *t)
{
    char *a,temp;
    a=t;
    while(*++a){}
    a--;
    while(a>t)
    {
        temp = *a;
        *a = *t;
        *t = temp;
        a--;
        t++;
    }
    return;
}
void strcpy(char *t2, char *t1)
{
    while(*t2++=*t1++){}
    return;
}
void strcat(char *t3, char *t4)
{
    while(*t3)t3++;
    while(*t3++=*t4++){}
    return;
}
int strlen(char *t5)
{
    char *a;
    a=t5;
    while(*a)a++;
    return a-t5;
}
int strcmp(char *t6, char *t7)
{
    while(*t6==*t7)
    {
        if(!*t6)    return 1;
        t6++;
        t7++;
    }
    return 0;
}

int main()
{
    char tab2[100]="poczatek", tab1[100]="ala ma kota";
    
    strcat(tab2,tab1);
    printf("%s\n",tab2);

    printf("%d\n",strlen(tab2));
    printf("%d\n",strcmp(tab2, tab1));

    strcpy(tab2,tab1);
    printf("%s\n",tab2);
    printf("%d\n",strcmp(tab2, tab1));

    odwroc(tab1);
    printf("%s\n",tab1);

    return 0;
}
*/

//Sortowanie i wyświetlanie tablicy intów na wskaźnikach
/*
#include <stdlib.h>
void wypisz(int *t, int r)
{
    while(r--)
    {
        printf("%d ",*t);
        t++;
    }
    printf("\n");
    return;
}
void sortuj(int *t, int r, int malejaco)
{
    int temp, *a;
    
    for(int i=0;i<r;i++)
    {
        a=t;
        while(a!=(t+r-i-1))
        {
            if(*(a+1)<*a)
            {
                temp=*a;
                *a=*(a+1);
                *(a+1)=temp;
            }
            a++;
        }
        
    }
    if(!malejaco)
    {
        int *b,temp;
        b=t;
        b=t+r-1;
        while(b>t)
        {
            temp = *b;
            *b = *t;
            *t = temp;
            b--;
            t++;
        }
    }
    return;
}

int main()
{
    #define rozmiar_tablicy 20
    int tab[rozmiar_tablicy]={2,5,0,3,5,8,2,5,0,3,5,8,4,1,6,2,4,1,2,56};
    int kierunek = 1;
    wypisz(tab, rozmiar_tablicy);
    sortuj(tab, rozmiar_tablicy, kierunek);
    wypisz(tab, rozmiar_tablicy);
    kierunek =0;
    sortuj(tab, rozmiar_tablicy, kierunek);
    wypisz(tab, rozmiar_tablicy);

    return 0;
}
*/

//
/*
#include <stdlib.h> 

int zamien_na_duze(char *t)
{
    int changed=0;
    while(*t)
    {
        if(*t>='a' && *t<='z')
        {
            *t+='A'-'a';
            changed++;
        }
        t++;
    }
    return changed;
}

int main()
{
    char tab[100]="ala ma kota";
    printf("%s\n",tab);
    zamien_na_duze(tab);
    printf("%s\n",tab);
    return 0;
}
*/

//zabawa ze wskaźnikami
/*
#include <stdlib.h>

int main()
{
    int a, *w1, **w2, ***w3, ****w4, *****w5, ******w6, *******w7, ********w8, *********w9, **********w10;
    a=5;
    w1=&a;
    w2=&w1;
    w3=&w2;
    w4=&w3;
    w5=&w4;
    w6=&w5;
    w7=&w6;
    w8=&w7;
    w9=&w8;
    w10=&w9;

    printf("%d\n",a);
    ******w6=77;
    printf("%d\n",a);
    **********w10=21;
    printf("%d\n",a);
    return 0;
}
*/

//Funkcje dodawania i mnożenia na wskaźnikach
/*
#include <stdlib.h>
#define rozmiar 3

void dodawanie_mac(double m1[rozmiar][rozmiar], double m2[rozmiar][rozmiar], double m3[rozmiar][rozmiar])
{
    for(int i=0;i<rozmiar;i++)
    {
        for(int j=0;j<rozmiar;j++)
        {
            *(*(m3+i)+j)=*(*(m1+i)+j)+*(*(m2+i)+j);
        }
    }
    return;
}

void mnozenie_mac(double m1[rozmiar][rozmiar], double m2[rozmiar][rozmiar], double m3[rozmiar][rozmiar])
{
    for(int i=0;i<rozmiar;i++)
    {
        for(int j=0;j<rozmiar;j++)
        {
            m3[i][j]=0;
            for(int k=0;k<rozmiar;k++)
            {
                *(*(m3+i)+j)+=*(*(m1+i)+k) * *(*(m2+k)+j);
            }
        }
    }
    return;
}

void wypisz(double m4[rozmiar][rozmiar])
{
    for(int i=0;i<rozmiar;i++)
    {
        for(int j=0;j<rozmiar;j++)
        {
            printf("%lf ",m4[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return;
}

int main()
{
    
    double mac1[rozmiar][rozmiar]={{1,2,3},{4,5,6},{7,8,9}};
    double mac2[rozmiar][rozmiar]={{11,12,13},{14,15,16},{17,18,19}};
    double mac3[rozmiar][rozmiar];

    dodawanie_mac(mac1, mac2, mac3);
    wypisz(mac3);

    mnozenie_mac(mac1, mac2, mac3);
    wypisz(mac3);

    return 0;
}
*/

