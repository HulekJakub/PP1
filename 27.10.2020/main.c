#include <stdio.h>
#include <stdbool.h>

int main()
{
    //deklaracja macierzy
    /*
    #define rozmiar 4
    double mac1[rozmiar][rozmiar]={{1,2,3,4},{4,5,6,7},{7,8,9,10},{10,11,12,13}};
    double mac2[rozmiar][rozmiar]={{11,12,13,14},{14,15,16,17},{17,18,19,20},{20,21,22,23}};
    double mac3[rozmiar][rozmiar];
    */

    // Dodawanie macierzy
    /*
    for(int i=0;i<rozmiar;i++)
    {
        for(int j=0;j<rozmiar;j++)
        {
            mac3[i][j]=mac1[i][j]+mac2[i][j];
            printf("%f ",mac3[i][j]);
        }
        printf("\n");
    }
    */

    //Mnożenie macierzy
    /*
    for(int i=0;i<rozmiar;i++)
    {
        for(int j=0;j<rozmiar;j++)
        {
            mac3[i][j]=0;
            for(int k=0;k<rozmiar;k++)
            {
                mac3[i][j]+=mac1[i][k]*mac2[k][j];
            }
            printf("%f ",mac3[i][j]);
        }
        printf("\n");
    }
    */

    //Zabawa ze wskaźnikami
    /*
    char *ws, tekst[12]="ala ma kota";
    int *ws1, *ws2, tab[12]={2,5,6,3,5,8};
    ws1 = tab;
    ws2 =tab+5;
    printf("%p\n", ws1);
    while(*ws1!=8)
    {
        ws1++;
    }
    printf("%p",ws1);
    */

    //Zamiana kolejności z użyciem wskaźników
    /*
    #define lng 12
    char *ws1, *ws2,temp, tab[lng]="ala ma kota";
    //char tab2[lng];
    ws1=ws2=tab;
    while(*ws2++){}
    ws2-=2;
    while(ws1<ws2)
    {
        temp=*ws2;
        *ws2=*ws1;
        *ws1=temp;
        ws1++;
        ws2--;
    }
    printf("%s ",tab);
    */

    //Wyszukiwanie wyrazów z użyciem wskaźników
    /*
    int wyst=0;
    
    char *ws,*ws1,*ws2, tekst[14]="akotma kotak";
    char znak[12]="kot";
    bool proces=true;
    ws=tekst;
    while(*ws++)
    {
        ws1=ws;
        ws2=znak;
        while(*ws1!=0)
        {
            if(*ws2==0)
            {
                break;
            }
            if(*ws2!=*ws1)
            {
                proces=false;
            }
            ws1++;
            ws2++;
        }

        if(*ws2!=0)
        {
            proces=false;
        }
        if(proces)
        {
            wyst++;
        } 

        proces=true;
    }
    printf("%d\n",wyst);
    */

    //Zabawa z pamięcią (wychodzenie poza tablicę)
    /*
    int w1;
    char tab[12]="ala ma kota";
    w1=0;
    tab[13]=2;
    printf("%d\n",w1);
    printf("%p\n%p\n",tab,&w1);
    */

    return 0;
}