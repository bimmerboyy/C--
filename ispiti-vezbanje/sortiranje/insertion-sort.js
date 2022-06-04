//create array of ranodm numbers
let arr = [];
for (let i = 0; i < 10; i++) {
    arr[i] = Math.floor(Math.random() * 20);
}
console.log(arr);

//crete insertion sort function
function insertionSort(arr) {
    for (let i = 1; i < arr.length; i++) {
        let j = i;
        while (j > 0 && arr[j] < arr[j - 1]) {
            arr[j] = arr[j] ^ arr[j - 1];
            arr[j - 1] = arr[j] ^ arr[j - 1];
            arr[j] = arr[j] ^ arr[j - 1];
            j--;
        }
    }
    return arr;
}