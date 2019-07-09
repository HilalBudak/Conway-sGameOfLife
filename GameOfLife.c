#include <stdio.h>
#define satir 5
#define sutun 20


int matris[satir][sutun]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                            0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                            0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                            0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                            0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

int print()
{
    int i,j;
    for(i=0;i<satir;++i)
    {
        printf("\n");
        for(j=0;j<sutun;++j)
        {
            if(matris[i][j]==1)
                printf("*");
            else
                printf(" ");
                 
        }
    }
}


int main()
{ 
    //print();                          print fonksiyonu test edildi.
    int i,j,sayac=0,k=0;
    while (k<5)                         //kodun çalışmasını rahat gözlemlemek için while 5 ile sınırlandırıldı.
    {       
        for(i=0;i<satir;++i)
        {           
            for(j=0;j<sutun;++j)
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
                print();             
            }
        
        }           
        k++;
        printf("\n");              
    }
    
    
}