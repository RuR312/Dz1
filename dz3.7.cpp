#include <iostream>

main()
{
	int i=1;
	int sum=0;
	for(;i<100;i=i+1)
	{
		sum=sum+i;
		printf("%i+",i);
	}
	sum=sum+1;
	printf("%i+",i,sum);
}
