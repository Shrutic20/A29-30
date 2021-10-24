///////////////////////////////////////////////////////////////////////////
//
// Write a program which accept one number and position from user and on
// that bit. Return modified number.
// Input  : 10      3
// Output : 14
//
///////////////////////////////////////////////////////////////////////////
#include<stdio.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0x00000001;
    UINT iAns = 0;

    iMask = iMask << (iPos - 1);

    iAns = iNo ^ iMask;

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

    iRet = OnBit(iValue, iLoc);

    printf("%d\n",iRet);
    return 0;
}
