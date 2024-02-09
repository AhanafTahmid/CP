#include<stdio.h>
int main() {
	int T, N, P;
	scanf("%d", &T);
	while(T--) {
		int DD[10000] = {0}, i, x, ss;
		scanf("%d %d", &N, &P);
		for(i = 0; i < P; i++) {
			scanf("%d", &x);
            ss = x;
			while(x <= N)
				DD[x] = 1, x = x+ss;
		}
		int count = 0;
		for(i = 1; i <= N; i++)
			if(DD[i] == 1 && i% 7 != 0 && i%7 != 6)
				count++;
		printf("%d\n", count);
	}
    return 0;
}