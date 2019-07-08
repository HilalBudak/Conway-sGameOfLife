#include <stdio.h>

int main()
{
    int matris[3][5]={1,0,1,0,0,
                      0,1,0,0,1,
                      1,1,1,0,1 };
    int i,j,sayac=0,k=0;
    while (k<5)
    {       
        for(i=0;i<3;++i)
        {
            printf("\n");
            for(j=0;j<5;++j)
            {
                sayac=0;

                if(matris[i][j+1]==1)
                    sayac++;
                if(matris[i+1][j]==1)
                    sayac++;
                if(matris[i+1][j+1]==1)
                    sayac++;
                if(i>0 && j>0 && matris[i-1][j-1]==1)
                    sayac++;
                if(i>0 && matris[i-1][j]==1)
                    sayac++;
                if(i>0 && matris[i-1][j+1]==1)
                    sayac++;
                if(j>0 && matris[i+1][j-1]==1)
                    sayac++;                

                if(matris[i][j]==1)
                {
                    if(sayac<2 || sayac>3)
                        matris[i][j]=0;
                    if(sayac==2 || sayac==3)
                        matris[i][j]=1;    
                }
                else
                {
                    if(sayac==3)
                        matris[i][j]==1;
                }               
                printf("%d",matris[i][j]);              
            }
        }    
        k++;
        printf("\n");              
    }
    
    
}