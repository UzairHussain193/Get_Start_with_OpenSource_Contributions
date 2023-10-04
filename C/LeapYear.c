/**
 * C program to check leap year using conditional operator
 */

#include <stdio.h>

int main()
{
    int year;
 
    /*
     * Input year from user
     */
    printf("Enter any year: ");
    scanf("%d", &year);

    /*
     * If year%4==0 and year%100==0 then
     *     print leap year
     * else if year%400==0 then
     *     print leap year
     * else
     *     print common year 
     */
    (year%4==0 && year%100!=0) ? printf("LEAP YEAR") :
        (year%400 ==0 ) ? printf("LEAP YEAR") : printf("COMMON YEAR");

    return 0;
}
