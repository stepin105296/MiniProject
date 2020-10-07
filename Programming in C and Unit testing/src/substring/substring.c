#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "my_name_is_edcast_future_skills";
	int len = strlen(str);
	char delim[] = "_";

	char *ptr = strtok(str, delim);

	while(ptr != NULL)
	{
		printf("'%s'\n", ptr);
		ptr = strtok(NULL, delim);
	}

	return 0;
}
