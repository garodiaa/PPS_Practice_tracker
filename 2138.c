#include<stdio.h>
int main()
{
    char a[1002];
    int i;
    
    while (scanf("%s",&a)!=EOF)
    {
        int s[10]={0,0,0,0,0,0,0,0,0,0};
        
        for ( i = 0; a[i]!='\0'; i++)
        {
            if (a[i]=='0'){s[0]++;}
            else if (a[i]=='1'){s[1]++;}
            else if (a[i]=='2'){s[2]++;}
            else if (a[i]=='3'){s[3]++;}
            else if (a[i]=='4'){s[4]++;}
            else if (a[i]=='5'){s[5]++;}
            else if (a[i]=='6'){s[6]++;}
            else if (a[i]=='7'){s[7]++;}
            else if (a[i]=='8'){s[8]++;}
            else if (a[i]=='9'){s[9]++;}
        }
        int temp=s[0],c=0;

        for ( i = 1; i < 10; i++)
        {
            if (s[i]>=temp)
             {
                temp=s[i];
                c=i;
             }
                
        }
        printf("%d\n",c);
        
        
    }
    

    return 0;
}