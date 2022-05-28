#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

int niz[MAX][MAX];


// void napravi_matricu(int n){
//     int number = 0;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             niz[i][j] = 0;
//         }
//     }
//     for(int dijagonala = 0; dijagonala<n; dijagonala++){
//         if(dijagonala % 2 == 0){ 
//             for(int i = dijagonala; i>=0; i--){
//                 for(int j = 0; j<=dijagonala; j++){
//                     if(j + i == dijagonala){
//                         niz[i][j] = number++;
//                     }
//                 }
//             }
//         }
//         else{
//             for(int i = 0; i<=dijagonala; i++){
//                 for(int j = 0; j<=dijagonala; j++){
//                     if(j + i == dijagonala){
//                         niz[i][j] = number++;
//                     }
//                 }
//             }
//         }
//     }
    



//     niz[1][4] = 15;
//     niz[2][3] = 16;
//     niz[3][2] = 17;
//     niz[4][1] = 18;
//     niz[4][2] = 19;
//     niz[3][3] = 20;
//     niz[2][4] = 21;
//     niz[3][4] = 22;
//     niz[4][3] = 23;
//     niz[4][4] = 24;
// }

int main(){
	int i, j, m, n, *s;
 
	/* default size: 5 */
	if (c < 2 || ((m = atoi(v[1]))) <= 0) m = 5;
 
	/* alloc array*/
	s = malloc(sizeof(int) * m * m);
 
	for (i = n = 0; i < m * 2; i++)
		for (j = (i < m) ? 0 : i-m+1; j <= i && j < m; j++)
			s[(i&1)? j*(m-1)+i : (i-j)*m+j ] = n++;
 
	for (i = 0; i < m * m; putchar((++i % m) ? ' ':'\n'))
		printf("%3d", s[i]);
 
	/* free(s) */
	return 0;
}


    int n = 5;
    napravi_matricu(n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d \t", niz[i][j]);
        }
        printf("\n");
    }



    return 0;
}