#include <iostream>
#include <stdlib.h>
#include <time.h>

int main() {
	setlocale(LC_ALL, "Rus");
	
	float Avr_of_series = 0, Avr_of_all = 0, Sum_of_ser;
	
	srand(time(0));
	
	for(int i = 0; i < 10; i++)
	{
		Sum_of_ser = 0;
		for(int i = 1; i <= 1 ; i++)
		{
			Sum_of_ser += (float)rand()/RAND_MAX;
			if(i % 10 == 0) printf("%4.2f  ", (float)rand()/RAND_MAX);
			printf("%4.2f  ", (float)rand()/RAND_MAX);
			printf("%4.2f  ", (float)rand()/RAND_MAX);
			
		/*	if(i % 100 == 0) printf("\n");	
			if(i == 1000) 
			{
			Avr_of_series = Sum_of_ser/1000;
			printf("������� �������� ����� ����� = %f \n", Avr_of_series);
		    }*/
		}
	/*	Avr_of_all += Avr_of_series;
	}
	printf("������� �������� ���� ����� = %f \n", Avr_of_all/10);
*/}
	return 0;
}
