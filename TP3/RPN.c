#include<RPN.h>

int RPN(char * oprt)
{
	int i = 0;
	int s = 0;
	while(oprt[i] != '\0')
	{
		if(oprt[0] <= 47 && oprt[0] >= 33)
				exit(EXIT_FAILURE);
		if (oprt[0] >= '9' || oprt[0] <= '0' || oprt[1] >= '9' || oprt[1] <= '0')
				exit(EXIT_FAILURE);
		if (oprt[i] == ' ')
			exit(EXIT_FAILURE); 
		if(oprt[i] <= '9' && oprt[i] >= '0')
		{
			pile p = NULL;
			char str = oprt[i];
			int inte = atoi(&str);
			empiler(inte,pile *P);
			inte = 0;
		} 
		else
		{	
				if(length(p) >= 2)
				{
					int l = depiler(p);
					int v = depiler(p);
					switch(oprt[i])
					{
					case '*':
						s = l * v;
						empiler(p,s);
						break;
					case '-':
						s = l - v;
						empiler(p,s);
						break;
				
					case '/':
						s = l / v;
						empiler(p,s);
						break;
					case '%':
						s = l % v;
						empiler(p,s);
						break;
					case '+':
						s = l + v;
						empiler(p,s);
						break;
					}
				}
		}
	return s;
	
}
