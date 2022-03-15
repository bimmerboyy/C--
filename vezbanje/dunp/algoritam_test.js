let n = 5;
let brojac = 0;
for(i=1; i<=n; i++){
    for(j=1; j<=i*i; j++){
        k=1; m=n;
        while(m>k){
            k= k*2;
            m=m/2;
            brojac++;
        }
    }   
}
console.log(brojac);ћ