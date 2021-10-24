///////////////////////////////////////////////////////////////////////////
//
// Write a program which accept one number from user and count number of
// ON (1) bits in it without using % and / operator.
// Input  : 11    
// Output : 3
//
///////////////////////////////////////////////////////////////////////////
#include<stdio.h>

typedef unsigned int UINT;

UINT CountOne(UINT iNo)            
{                
   UINT ibit = 0, iCnt = 0;
                   
   while(iNo != 0)
   {
       ibit = (iNo & 1);
        if(ibit == 1)
       {
           iCnt++;
       }
       iNo = (iNo >> 1);
    }

   return iCnt;

}

int main()
{
    UINT iValue = 0;
    int iRet = 0;

    printf("Enter number:");
    scanf("%d",&iValue);
    

    iRet = CountOne(iValue);

    printf("%d\n",iRet);
    return 0;
}