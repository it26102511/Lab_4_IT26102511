#include <stdio.h>
int main (void)
{
	int f_m, r_m, a_c_v;
         
	printf("Enter fingerprint match (1 or 0)");
	scanf("%d", &f_m);

	printf("Enter retinal match (1 or 0)");
	scanf("%d", &r_m);

	printf("Enter the access card validity (1 or 0)");
	scanf("%d", &a_c_v);

	if((f_m && r_m)|| (f_m && a_c_v)||(r_m && a_c_v))
	{  printf ("access Granted");}
	else
	{printf("Access Denied");}
	return 0;
}

	
