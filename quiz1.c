#include <stdio.h>


int main (void)
{

char a[5] ="0123";
char *Ptr1 = a;

//Question 1 : what gets printed?

printf("\nquiz1: a[0]:%c,  a[0]:%x, *Ptr1:%c *Ptr2:%c \n",a[0], a[0],*Ptr1++,*(Ptr1+1));


//Question 2:  write "C" code that will swap the byte order of the variable myIPAddress
//   Hint:  an TCP/IP V4 IP address is 4 octets.  It is sent over the wire in network
//          byte order which is defined by TCP/IP to be big endian.  
//          An Intel PC machine is little endian.


unsigned int myIPAddress = 0xdeadbeef;
unsigned int  anIPAddress;
anIPAddress = ((myIPAddress>>24)&0xff) | // moving byte 3 to byte 0
                    ((myIPAddress<<8)&0xff0000) | // moving byte 1 to byte 2
                    ((myIPAddress>>8)&0xff00) | // moving byte 2 to byte 1
                    ((myIPAddress<<24)&0xff000000); // moving byte 0 to byte 3

//Question 3 After the swap, what gets printed?
printf("\nquiz1: step 1: a[0]:%c,  a[0]:%x, a[0]:%d, myIPAddress:%x \n",a[0], a[0],a[0],anIPAddress);

return 0;
}


