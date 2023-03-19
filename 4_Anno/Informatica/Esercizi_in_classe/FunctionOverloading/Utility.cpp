#include "Utility.h"


int max(int a, int b, int c)
{
	if (a>b){
		if (a>c){
			return a;
		}
		else {
			return c;
		}
	}	
	else
	{
		if (b>c)
		{
			return b;
		}
		else {
			return c;
		}
	}
	
}



float max(float a, float b, float c){
	float res;
	
	if (a>b){
		res =a;
	}
	else {
		res = b;
	}
	
	if (res<c){
		res = c;
	}
	
	return res;
}
