#include <stdio.h>

int main() {
  int a[5];
  int n;

  int flag = 0; // Indica se algum contador é executador nessa iteração.

  int i=1; // Contador das iterações.

  int count = 0; // Variável de contador.

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

  for (i=1; i<=n; i++) 
  {
	for(count = 0; count <5; count++)
	{
		if(a[count] == 1) // Periodicidade 1.
		{
			flag = 1;
			
			printf("%d", count);
			
		}

		if((i % a[count] == 0) && (a[count]!=1)) // Demais periodicidades.
		{
			printf("%d", count);
		
			flag = 1;	

		}	


	} 
		
		
	if(!flag)
	{
		printf("-");

	}
	
	flag = 0;	

	printf("\n");
	
	
	
 }

  return 0;
}
