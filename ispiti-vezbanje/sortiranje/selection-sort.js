//create array of ranodm numbers
let arr = [];
for (let i = 0; i < 10; i++) {
    arr[i] = Math.floor(Math.random() * 20);
}
console.log(arr);


//create selection sort algorithm


//create selectionsort algorithm
// function selectionSort(arr) {
//     let min;
//     for (let i = 0; i < arr.length; i++) {
//         min = i;
//         for (let j = i + 1; j < arr.length; j++) {
//             if (arr[j] < arr[min]) {
//                 min = j;
//             }
//         }
//         if (min !== i) {
//             let temp = arr[i];
//             arr[i] = arr[min];
//             arr[min] = temp;
//         }
//     }
//     return arr;
// }

function selectionSort(arr) {
    let min
    for (let i = 0; i < arr.length; i++) {   
        min = i;
        for(let j = i + 1; j < arr.length; j++) {
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        if(min !== i){
            arr[i] =  arr[i] ^ arr[min]; 
            arr[min] =  arr[i] ^ arr[min]; 
            arr[i] =  arr[i] ^ arr[min]; 
        }
    }
    return arr;
}

arr = selectionSort(arr);
console.log(arr);