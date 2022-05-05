let k = [1,2,3,4,5,6,7,8]
let s = [2, 4, 6]
let p = []
let m = s.length
let n = k.length;
for (let i = 0; i < m; i++){
    p[i] = 0;
}
i = j = 0;
while(i<n && j < m){
    while(i<n && s[j] > k[i]){
        i++;
    }
    if(s[j] == k[i]){
        p[j] = i;
    }
    j++;
}
console.log(p)