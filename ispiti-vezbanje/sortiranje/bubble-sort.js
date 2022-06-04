//create array of ranodm numbers
let arr = [];
for (let i = 0; i < 10; i++) {
    arr[i] = Math.floor(Math.random() * 20);
}
console.log(arr);

//create function for bubble sort
function bubbleSort(arr) {
    for (let i = 0; i < arr.length; i++) {
        for (let j = 0; j < arr.length - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                arr[j] = arr[j] ^ arr[j + 1];
                arr[j + 1] = arr[j] ^ arr[j + 1];
                arr[j] = arr[j] ^ arr[j + 1];
            }
        }
    }
    return arr;
}