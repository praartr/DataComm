#include <stdio.h>


int main (void)
{

char a[5] ="0123"; //a[4] as given in the question throws out error since the array consists of 5 characters including the null space at the end of the string
char *Ptr1 = a;
unsigned int myIPAddress = 0x01020304;
printf("\nquiz1: a[0]:%c,  a[0]:%x, *Ptr1:%c *Ptr2:%c \n",a[0], a[0],*Ptr1++,*(Ptr1+1));



myIPAddress = ((myIPAddress>>24)&0xff) | // moving byte 3 to byte 0
                    ((myIPAddress<<8)&0xff0000) | // moving byte 1 to byte 2
                    ((myIPAddress>>8)&0xff00) | // moving byte 2 to byte 1
                    ((myIPAddress<<24)&0xff000000); // moving byte 0 to byte 3

//Question 3 After the swap, what gets printed?
printf("\nquiz1: step 1: a[0]:%c,  a[0]:%x, a[0]:%d, myIPAddress:%x \n",a[0], a[0],a[0],myIPAddress);

return 0;
}


