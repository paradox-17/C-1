Boolean Algebra
          32 bit            64 bit
word size 4 bytes           8 bytes
          2^32 = 4GB        2^64 very large memory space

address - 0xFF2C10
little endian     stores address in reverse order              eg 01 C2 FF
big endian        stores address in serial order    eg java    eg FF C2 01  first byte seedhi then reversed

how to find -x
-x = x' + 1
   = ~x + 1

-x = take 2's compliment

taking 2's compliment twice gives the number itself
-6 = 1010
-6 >> 1 = 1101


Q. To check if it is power of 2 or not
// Mera method 
num = 1;
n;
while(num <= n)
{
    num << 1;
}
res = num & n;
if (res==n)

// Simple
if ( ( n & (-n) ) == n)

range of signed int of 4 bit
-2^n-1  ->  (2^n-1)-1

