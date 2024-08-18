//path_travel

#include <stdio.h>

int main(void){
	
	int size, i, flag = 1, path, now, temp;
	int map[101] = {0};
	
	scanf("%d", &size);
	for(i=1; i<=size; i++){
		scanf("%d", &map[i]);
	}
	
	path = 0;
	now = 1;
	while(flag){
		if(map[now]){
			path = path + map[now];
			temp = map[now];
			map[now] = 0;
			now = temp;
		}
		else{
			flag = 0;
		}
	}
	
	printf("%d\n", path);
	return 0;
}
