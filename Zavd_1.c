#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE* fp;
	char s[100];
	int n = 1;
	
	fp = fopen("file.txt", "r");	
	if(!fp) {
		printf("\nERROR!\n");
		return -1;
	}
	
	while(!feof(fp)) {
		fgets(s, 100, fp);
		printf("line %d, pos %d: %s", n, ftell(fp), s);
		n++;
	}	
	
	fclose(fp);
	
	system("pause");
	return 0;
}
