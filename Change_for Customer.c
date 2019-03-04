/* simple program to show total number of 25 cent, 10 cent, 5cent and 1 cent coins needed to give customer*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void clear_stdin (void);
int main ()
{
	float p = 0; //float to be used for user input
      
	printf("Change owed without $ sign(e.g 8.25 or 8): "); //prompt user for float value

	float float_value = scanf("%fl",&p);  //assign float value into p address
	if (float_value == EOF) {   // handle EOF input
		fputs ("invalid input, closing.\n", stderr);
		return 1;}
	else if (float_value == 0) {    // handles user 0 input or scanf failure
		fputs ("error: invalid input\n", stderr);
		clear_stdin();} //empty stdin buffer

	    
	int coins = round(p * 100);
    
    	int a = coins;
	int e =0;
   
    	for (int i = 0; i < coins; i++){
        	if (a > 0 && a < 5){	
                	a  = a - 1;
                	e++;}
           	else if (a >= 5 && a < 10){
              		a  = a - 5;
              		e++;}
          	else if (a >= 10 && a < 25){
               		a  = a - 10;
              		e++;}
          	if (a >= 25 ){
          		a  = a - 25;
              		e++;}} 
	printf("Total coins needed: %i \n", e); //print out the total
}

//function to clear buffer if input failure occurs
void clear_stdin (void)
{
	int c = getchar(); 
	while (c != '\n' && c != EOF) //grabbing char by char whats left in stdin
        c = getchar();
}
