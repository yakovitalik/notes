console.log('Hello from app.js');
//////////////////////////////////////////////////////////////////////////
// Типы данных в JavaScript
//////////////////////////////////////////////////////////////////////////
undefined;
null;

//Boolean
true;
false;

//String - строка
'Hello world!';
"Hi there";
`Hello again`;

// Symbol

// Number - число, BigInt
18;
3.14;
NaN;        // Not a number()

// Object - объектный тип
// объект
// массив
// функции
// ошибка
////////////////////////////////////////////////////////////////////////////
// ПЕРЕМЕННЫЕ 
//////////////////////////////////////////////////////////////////////////

const x = 1000 * 5 + 99 - 6;        // константа
console.log(x);

const firstName = 'John';
const lastName = 'Doe';

let age = 33;                       // переменная, которую впоследствии можнго будет менять.

// старый тип, похож на let
// но она до сих пор актуальна
var z = 10;

const isAdult = true;               // является ли человек взрослым

//////////////////////////////////////////////////////////////////////////
// МАТЕМАТИЧЕСКИЕ ОПЕРАЦИИ 
//////////////////////////////////////////////////////////////////////////

// - (вычитание), + (сложение), * (умножение), / (деление), % (деление по модулю - остаток от деления), 
// ** (возведение в степень)

// Унарные операторы
// -, +
-1
-0
+0
0
+"2" // преобразует к обычному числу (2)
+"2 sad"    // NaN

// Конкатенация +
"Hello " + "world!" // "Hello world!"
2 + "2" // "22" так как он приведет первую цифру к строке

// Инкремент, декремент
// --, ++
// x++ === (x = x+1)
// ++x === (x = x+1)

let w = 1;
console.log(w++);   // 1
console.log(++w);   // 2

// +=, -=, *=, /=
// x += 4 === (x = x + 4)
// x *= 2 === (x = x * 2)

e = 3;  // это инструкция

//////////////////////////////////////////////////////////////////////////
// ЛОГИЧЕСКИЕ ВЫРАЖЕНИЯ 
//////////////////////////////////////////////////////////////////////////

// >, <, >=, <=, !=, ==
// === оператор строго сравнения
// !== строгое не равно

console.log('is 5 > 2', 5 > 2);
console.log('is 5 < 2', 5 < 2);

console.log('is equal: 5 and 5', 5 == 5 );
console.log('is equal: 5 and 4', 5 == 4 );

console.log('is equal: 5 and "5"', 5 == "5" );
console.log('is equal: 5 and "5"', 5 === "5" );

console.log('is not equal: 10 and 8', 10 != 8);
console.log('is not equal: 10 and "10"', 10 !== '10');

// Составные логические выражения
// И - && (true, когда оба выражения истинны)
// ИЛИ - || (true, когда хотя бы одно выражение истинно)

1 === 1 && 2 === 2;    // true
1 === 1 && 2 === '2';   // false
1 === 1 && 2 === 2 && 3 === 3 && 4 === 4; // true
1 === 1 && 2 === 2 && 3 === 3 && 4 === "4"; // false

1 === 2 || 2 === 2;     // true
1 === 2 || 2 === 3;     // false

// Сочетание И, ИЛИ

1 === 2 || (2 === 3 && 4 === 4);  // false
2 === 2 || (2 === 3 && 4 === 4);  // true

//////////////////////////////////////////////////////////////////////////
// УСЛОВНЫЙ ОПЕРАТОР
//////////////////////////////////////////////////////////////////////////

let age1 =20;

if (age1 >= 18) {
    console.log("Access granted");  // доступ разрешен
} else {
    console.log("Access denied");   // доступ заблокирован
}

let salary = 2000;

// if (salary > 1500) console.log('I need to improve!');

if (salary > 3000) {
    console.log('It\'s time to relax');
} else if (salary > 2500) {
    console.log('Well, good enough. But I can be better.');
} else if (salary >= 2000) {
    console.log('I need to improve.');
} else {
    console.log('Not enough!');
}

//////////////////////////////////////////////////////////////////////////
// ОПЕРАТОР Switch
//////////////////////////////////////////////////////////////////////////

let stat = 'idle';

switch (stat) {
    case 'idle':
        console.log('Nothing is happening');
        break;
    case 'loading': 
        console.log('Data is loading');
        break;
    case 'respond': 
        console.log('We have data');
        break;
    case 'error': 
        console.log('Someding went wrong');
        break;
    default:
        console.log('Error');
        break;
}

//////////////////////////////////////////////////////////////////////////
// Тернарный оператор (выражение)
//////////////////////////////////////////////////////////////////////////

const age2 = 17;

age2 >= 18 ? console.log('Access granted') : console.log('Access denied');
console.log('Access', age2 >= 18 ? 'granted' : 'denied');

let isAdult2 = age2 >= 18 ? true : false;
console.log(isAdult2);

let status = "loading";
let statusNumber = status === 'idle' ? 0 : 1;
console.log(statusNumber);
console.log({statusNumber});

//////////////////////////////////////////////////////////////////////////
// Массивы (Arrays)
//////////////////////////////////////////////////////////////////////////

const arr = [11, 29, 33, 47, 55];
console.log(arr);
console.log(arr[0]);
arr[0] = 18;
console.log(arr[0]);
console.log(arr.length);
console.log(arr[arr.length - 1]);

const strs = ['abc', 'bcd'];
strs[2] = 'sd';
console.log(strs);

// Встроенные методы массива
strs.push('new item');          // добавить элемент в конец массива
console.log(strs);
strs.push('new item2');
console.log(strs);
console.log(strs.pop());        // удалить элемент с конца массива
console.log(strs);

//////////////////////////////////////////////////////////////////////////
// Цикл for
//////////////////////////////////////////////////////////////////////////

for (let i = 0; i < arr.length; i++) {
    console.log(arr[i]);
}

