#include <stdio.h>
int main() {
printf("Enter the three number:");
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
//Compare the numbers by using if else ladder.
if(a>b && a>c){
printf("%d",a);
}
else if(b>c){
printf("%d",b);
}
else {
printf("%d",c);}



return 0;

}
