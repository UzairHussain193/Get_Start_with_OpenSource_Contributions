var inputResult = document.getElementById('inputResult')

function setNumber(num) {
    var lastVal = inputResult.value.slice(inputResult.value.length - 1);
    // console.log(lastVal);
    var myOperators = ["+", "-", "/", "*"]
    if (myOperators.indexOf(lastVal) !== -1 && myOperators.indexOf(num) !== -1) {
        inputResult.value = inputResult.value.slice(0, -1) + num
    } else {
        inputResult.value += num;
    }
    // console.log(num, inputResult);
}
function clearResult() {
    inputResult.value = "";
}
function getResult() {
    inputResult.value = eval(inputResult.value);
    if (inputResult.value == undefined || inputResult.value == NaN) {
        console.log("Enter valid operation");
    }
}
function del() {
    inputResult.value = inputResult.value.slice(0, inputResult.value.length - 1);
}