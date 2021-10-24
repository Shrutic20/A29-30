///////////////////////////////////////////////////////////////////////////
//
// Write a program which accept one number and position from user and off
// that bit. Return modified number.
// Input  : 10      2 
// Output : 8
//
///////////////////////////////////////////////////////////////////////////
#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0xfffffffe;
    UINT iAns = 0;

    iMask = iMask << (iPos - 1);

    iAns = iNo & iMask;

    return iAns;

}

int main()
{
    UINT iValue = 0, iLoc = 0;
    UINT iRet = 0;

    printf("Enter number:");
    scanf("%d",&iValue);
    printf("Enter position of bit:");
    scanf("%d",&iLoc);

    iRet = OffBit(iValue, iLoc);

    printf("%d\n",iRet);
    return 0;
}
