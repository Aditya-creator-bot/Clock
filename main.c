#include<stdio.h> // including standard input/output
#include<windows.h> // including windows funciton

int main(){ 
    
    int h,m,s; // variables for time
    int d=1000; // delay in time change
    printf("Set Hr, Min and Sec"); 
    scanf("%d%d%d",&h,&m,&s);

    if (h>12 || m>60 || s>60)  // checking input 
    {
        printf("ERROR !\n");
        exit(0);
    }
    while (1)   // taking time change to infinite loop
    {
        s++;
        if (s>59)
        {
            m++;
            s=0;
        }
        if (m>59)
        {
            h++;
            m=0;
        }
        if (h>12)
        {
            h=1;
        }
        printf("\n Clock :");
        printf("\n %02d:%02d:%02d",h,m,s);
        Sleep(d); 

        system("cls"); // clearing screen
        
    }
    
    return 0;
}