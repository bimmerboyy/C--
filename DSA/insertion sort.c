function insertion_sort(a){
    for (i = 2; i<n; i++){
        int k = a[i];
        j = i - 1;
        while(j>0 && a[j] > k){
            a[j+1] = a[j];
            j = j - 1;
        }
        a(j+1) = k;
    }
}