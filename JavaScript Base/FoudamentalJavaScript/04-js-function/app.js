//////////////////////////////////////////////////////////////////////////
// Функции vs процедуры
//////////////////////////////////////////////////////////////////////////

// функция, выполняет операции и возвращает значения
function summ(a, b) {
    return a + b;
}

const result = summ(4, 6);
console.log(result);

// процедура, просто выполняет набор операций и ничего не возвращает
function sum2(a, b) {
    console.log(a + b);
}

// и то и другое в JS является функцией

//////////////////////////////////////////////////////////////////////////
// Функции и память
//////////////////////////////////////////////////////////////////////////

function sum3(a, b) {
    return a + b;
}

const result1 = sum3(4, 6);
const result2 = sum3(5, 8);

//////////////////////////////////////////////////////////////////////////
// Варианты записи функций
//////////////////////////////////////////////////////////////////////////

// 1.Function declaration (Такие функции можно вызывать до их декаларации, и только такие)
sum4(1, 4);
function sum4(a, b) {
    return a + b;
}

// 2.Function Expression
const sum = function(a, b) {
    return a + b;
}

// 3.IIFE (Immediatly-invoked function expression)
// (function(a, b) {
//     return a + b;
// })(5, 34)

// 4.Arrow function(стрелочные функции)
const sum5 = (a, b) => {
    return a + b;
}

const sum6 = (a, b) => a + b;
const add1 = x => x + 1;

//////////////////////////////////////////////////////////////////////////
// Области видимости (Scope)
//////////////////////////////////////////////////////////////////////////

function isString(str) {
    const isValid = typeof str === "string";
    return isValid;
}

const res = isString('123');
console.log(res);

// let message = '';
const age = 15;

if (age >= 18) {
    let message = "Hello";
} else {
    let message = "Adios";
}

    // console.log(message); // ошибка, переменной не существует

{
    var myName = "Mikhail";
}

console.log(myName);

// for (let prop in obj) {

// }
// console.log(prop); // ошибка, переменной prop не существует

// если бы она была создана чере var, она бы висела в памяти программы

//////////////////////////////////////////////////////////////////////////
// Колбеки (Callback functions) и функции высшего порядка (Higer order functions)
//////////////////////////////////////////////////////////////////////////

// function twoSquared() {
//     return 2 * 2;
// }

// twoSquared();

// function threeSquared() {
//     return 3 * 3;
// }

function numSquared(num) {
    return num * num;
}

function copyArrayAndSquareNums(arr) {
    const output = [];

    for (let i = 0; i < arr.length; i++) {
        output.push(arr[i] ** 2);
    }

    return output;
}

const arr1 = [1, 2, 3, 4];
console.log(arr1);

const arr2 = copyArrayAndSquareNums(arr1);
console.log(arr2);

function copyArrayAndDivideByTwo(arr) {
    const output = [];

    for (let i = 0; i < arr.length; i++) {
        output.push(arr[i] / 2);
    }

    return output;
}

// Эта функция, с функцией instructions в качестве параметра делает ненужными две предыдущие функции
function copyArrayAndDoSmth(arr, instructions) {
    const output = [];

    for (let i = 0; i < arr.length; i++) {
        output.push(instructions(arr[i]));
    }

    return output;
}

function numSquared(num) {
    return num * num;
}

function divideBy2(num) {
    return num / 2;
}

const result4 = copyArrayAndDoSmth([5, 6, 7, 8], numSquared);
console.log(result4);

const result5 = copyArrayAndDoSmth([5, 6, 7, 8], divideBy2);
console.log(result5);

// здесь numSquared и divideBy2 - это коллбеки;
// функции высшего порядка - это функции, которые в качестве параметров принимают другие функции, 
// а так же те функции, которые внутри себя создают другие функции и возвращают их оператором return (замыкание)


//////////////////////////////////////////////////////////////////////////
// Рекурсия (функция вызывает саму себя)
//////////////////////////////////////////////////////////////////////////

// Это будет бесконечный цикл
// function recurse() {
//     return recurse();
// }
// recurse();

// Должно быть 2 вещи у каждой рекурсии
// 1.Базовое условие (терминальное)
// 2.Правило движения по рекурсии

function factorial(n) {
    if (n === 0) return 1;

    return n * factorial(n-1)
}
console.log(factorial(5));  // 5 * 4 * 3 * 2 * 1 (120)

let counter = 0;
// принимает символ и возвращает этот символ в 5 экземплярах
function repeater(char) {
    counter++;
    if (counter === 5) {
        counter = 0;
        return char;
    }
    return char + repeater(char);
}
console.log(repeater('a'));

//////////////////////////////////////////////////////////////////////////
// Замыкание в JS (Closure)
//////////////////////////////////////////////////////////////////////////

// 1.Функции, которые возвращают другие функции
// 2.Возвращаемая функция запоминает scope(область видимости), все переменные которые она вокруг себя видит

function hello(name) {
    const helloName = () => console.log("hello", name);
    return helloName;
}

const helloWorld = hello("world");
helloWorld();

const helloJohn = hello("John");
helloJohn();


function outer() {
    let counter = 0;

    function incrementCounter() {
        console.log(++counter);
    }

    return incrementCounter;
}

const myCounter1 = outer();
myCounter1();
myCounter1();
myCounter1();

const myCounter2 = outer();
myCounter2();
myCounter2();
myCounter2();

//////////////////////////////////////////////////////////////////////////
// Контекст вызова функции (this)
//////////////////////////////////////////////////////////////////////////

//THIS

const cat2 = {
    name: "Murka",
    say() {
        // const greeting = () => console.log(this.name);
        function greeting() {
            console.log(this.name);
        }

        setTimeout(greeting, 1000);
    },
}

const cat3 = {
    name: "Murka",
    say() {
        // const greeting = () => console.log(this.name);
        function greeting() {
            console.log(this);
        }

        setTimeout(greeting, 1000);
    },
}

// в таких вещах нужно использовать стрелочные функции

//////////////////////////////////////////////////////////////////////////
// Уточнение контекста вызова функции (this)
//////////////////////////////////////////////////////////////////////////

const developer = {
    name: "Mikhail",
    salary: 2500,

    getBonus(sum) {
        console.log(this.name, "has a salary this month", this.salary + sum);
    }
}

// developer.getBonus(250);

const manager = {
    name: "Anna",
    salary: 1800,

}

// developer.getBonus.call(manager, 150);
// developer.getBonus.apply(manager, [150]);

// bind - привязать к этой функции конкретный контекст - объект менеджера
manager.getBonus = developer.getBonus.bind(manager);
manager.getBonus(150);

