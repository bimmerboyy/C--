//create array of ranodm numbers
let arr = [];
for (let i = 0; i < 10; i++) {
    arr[i] = Math.floor(Math.random() * 20);
}
console.log(arr);

//create function for quickSort
//create partition function
function partition(arr, left, right) {
    let pivot = arr[Math.floor((left + right) / 2)];
    let i = left;
    let j = right;
    while (i <= j) {
        while (arr[i] < pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i <= j) {
            arr[i] = arr[i] ^ arr[j];
            arr[j] = arr[i] ^ arr[j];
            arr[i] = arr[i] ^ arr[j];
            i++;
            j--;
        }
    }
    return i;
}

function quickSort(arr, left, right) {
    if (left < right) {
        let pivot = partition(arr, left, right);
        quickSort(arr, left, pivot - 1);
        quickSort(arr, pivot + 1, right);
    }
}
