///////////////////////////////////////////////////////////////////////////
//
// Write a program which accept one number and position from user and
// check whether bit at that position is on or off. If bit is one return TURE
// otherwise return FALSE.
// Input  : 10      2 
// Output : TRUE
//
///////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0x00000001;
    UINT iAns = 0;

    iMask = iMask << (iPos - 1);

    iAns = iNo & iMask;

    if(iMask == iAns)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    UINT iValue = 0, iLoc = 0;
    bool  bRet = false;

    printf("Enter number:");
    scanf("%d",&iValue);
    printf("Enter position of bit:");
    scanf("%d",&iLoc);

    bRet = CheckBit(iValue, iLoc);

    if(bRet == true)
    {
        printf("Bit is ON!");
    }
    else
    {
        printf("Bit is OFF!");
    }
    return 0;
}
