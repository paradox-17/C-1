Requirements -  
probability
graph theory
linear algebra
statistics
calculus (2 variable)

gettimeofday() - it returns the epoch time
Epoch time - how much seconds have elapsed since the base time (1 Jan 1970)

#include<sys/time.h>		//for gettimeofday()
struct timeval start,end
gettimeofdat(start,NULL)
bubbleSort()
gettimeofday(end,NULL)
end.tv.sec*10^6+end.tv.sec
printf("%ld")

write pseudo code then start coding
1. create 2 arrays of 8000,16000
2. populate these in descending order
3. get start time for 8000 members
4. sorting 8000 using bubble sorting
5. getting end time for 8000
6. get time for sorting 8000 by doing end-start=t1
7. repeat sets 3-6 times for 16000 t2
8. print t2/t1

good coding practices
use spaces (prefer 4)
eg.
1.
void fn()
{
    if(i < j)
}

2.
x = 5;

3.
for(int i = 0; i < 10; i++)

4.
int a, b, c;	//use meaningfull names
int counter, time;

Q. [3, 4, 5] input
[20, 15, 12] output		//dont divide nd time nd space complexity O(n)
[4*5, 3*5, 3*4]

gaurav sir id - Kumar.garg@gmail.com
