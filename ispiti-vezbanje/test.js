let a = [7,1,3,8,4,6,2,9,10,5]
//sort array with bubble sort

//do it same but wiht quick sort
function quickSort(a){
    if(a.length <= 1) return a;
    let pivot = a[0];
    let left = [];
    let right = [];
    for(let i = 1; i < a.length; i++){
        if(a[i] < pivot){
            left.push(a[i]);
        } else {
            right.push(a[i]);
        }
    }
    return quickSort(left).concat(pivot, quickSort(right));
}
console.log(quickSort(a))