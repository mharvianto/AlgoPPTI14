#include <stdio.h>
#include <string.h>

int main(){
	
	char kata[100];
	int arr[128] = {0};
	scanf("%[^\n]", kata); getchar();
	int len = strlen(kata);
	
	for(int i = 0; i < len; i++){
		if(arr[kata[i]] == 0){
			printf("%c", kata[i]);
			arr[kata[i]] = 1;
		}
	}
	printf("\n");
	return 0;
}