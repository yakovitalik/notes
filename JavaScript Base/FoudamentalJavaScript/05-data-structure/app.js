//////////////////////////////////////////////////////////////////////////
// Понятие стека и очереди
//////////////////////////////////////////////////////////////////////////

// FIFO - first in, first out
// FILO - first in, last out

// Queue (Очередь) - first in, first out
// push/shift
console.log("Queue");

const arr = [];
arr.push(4);
arr.push(7);
arr.push(9);
console.log(arr);

arr.shift();
console.log(arr);
// при удалении из очереди все индексы элементов пересчитываются(что дает определенные затраты)

console.log("-----------------------------------------------------");

// Stack (стек) - first in, last out
// push, pop
console.log("Stack");

const arr2 = [];
arr2.push(1);
arr2.push(2);
arr2.push(3);
arr2.push(4);
arr2.push(5);
console.log(arr2);

arr2.pop();
arr2.pop();
console.log(arr2);
console.log("-----------------------------------------------------");

// стек является более оптимизированным с точки зрения индексов
// при удалении элементов не происходит перерасчет индексов

//////////////////////////////////////////////////////////////////////////
// Понятие иммутабельности (immutable)
//////////////////////////////////////////////////////////////////////////
// Иммутабельный - значит неизменяемый
const arr3 = [1, 2, 3, 4, 5];

// методы pop, push, shift и unshift изменяют структуру оригинального массива
// не используем методы pop, push, shift и unshift, sort, reverse

const arr4 = arr3.slice(0, 4);  // [1, 2, 3, 4]
// это будет новый, орригинальный массив, который не заденет старый

const arr5 = [0, ...arr3];      // [0, 1, 2, 3, 4, 5]
// это будет новый, орригинальный массив, который не заденет старый

console.log(arr3);
console.log(arr4);
console.log(arr5);

// ТЕПЕРЬ НА ПРИМЕРЕ ОБЪЕКТОВ

const obj = {
    a: 1,
    b: 2,
    c: 3,
}
// Мутации
// obj.d = 4;       // mutation
// obj.a = 10;      // mutation

// Immutable
const obj2 = {
    ...obj,         // сюда вставятся все значения оригинального объекта
    a: 10,          // и после этого уже меняем существующий ключ
    d: 4,           // и добавляем новый ключ
};  // получим новый объект {a: 10, b: 2, c: 3, d: 4}

console.log(obj);
console.log(obj2);

//////////////////////////////////////////////////////////////////////////
// Маппинг массивов и коллекций
//////////////////////////////////////////////////////////////////////////

// map, forEach

const numbers = [1, 2, 3, 4, 5, 6, 7, 8];
// эти методы - это как функции высшего порядка, которые выполняются для конкретного массива
function print(el) {
    console.log(el);
}
const result = numbers.forEach(print);
console.log(result);

function doubleNum(num) {
    return num * 2;
}

const result2 = numbers.map(doubleNum);       // [2, 4, 6 ...]

// или вместо предыдущего можно написать так:
const result3 = numbers.map(num => num * 2);

console.log(result2);
console.log(result3);
console.log(numbers);

//////////////////////////////////////////////////////////////////////////
// Фильтрация
//////////////////////////////////////////////////////////////////////////

// Коллекция - это тот же самый массив, только который содержит не примитивы а объекты

const numbers2 = [1, 2, 3, 4, 5, 6, 7, 8];

// filter мы должны вернуть true или false, он также применяет логическое выражение
// filter так же возвращает новый массив
const oddNumbers = numbers2.filter(num => num % 2 !== 0);    // [1, 3, 5, 7]
const evenNumbers = numbers2.filter(num => num % 2 === 0);    // [2, 4, 6, 8]
console.log(oddNumbers);
console.log(evenNumbers);

// это коллекция
const users = [
    {
        id: 1,
        name: "Brad Pete",
        movies: ['Snatch', 'Inglorius Basterdes'],
        isMarried: true,
    },
    {
        id: 2,
        name: "Diana Moore",
        isMarried: false,
    },
    {
        id: 3,
        name: "Olivie Giround",
        isMarried: true,
    },
    {
        id: 4,
        name: "Scott Parker",
        isMarried: false,
    },
];


const marriedUsers = users.filter(user => user.isMarried);
console.log(marriedUsers);

// includes
// const snatchUsers = users.filter(user => user.movies.includes('Snatch'));
// console.log(snatchUsers);

//////////////////////////////////////////////////////////////////////////
// Метод Reduce
//////////////////////////////////////////////////////////////////////////

const staff = [
    {
        id: 1,
        name: "John Doe",
        salary: 1000,
    },
    {
        id: 2,
        name: "Sara Smith",
        salary: 900,
    },
    {
        id: 3,
        name: "Elton John",
        salary: 1100,
    },
    {
        id: 4,
        name: "Mo Williams",
        salary: 1000,
    },
];

const budget = staff.reduce((acc, user) => {
    return acc + user.salary;
}, 0);
console.log(budget);

const budgetForSmallPersonal = staff.reduce((acc, user) => {
    if (user.salary < 1000) {
        return acc + user.salary;
    }

    return acc;
}, 0);

console.log(budgetForSmallPersonal);

// создадим из коллекции массив с зарплатами
const salaries = staff.reduce((acc, user) => {
    return [...acc, user.salary]
}, []);
console.log(salaries);

//////////////////////////////////////////////////////////////////////////
// Поиск в коллекции
//////////////////////////////////////////////////////////////////////////

// поиск в массиве
const cities = ["London", "Paris", "Madrid", "Lisboa"];
cities.includes("Madrid");  // true
cities.indexOf("Paris");    // 1

// поиск в коллекции
const developers = [
    {
        id: 1,
        fullName: "John Doe",
        skills: ["HTML", "CSS", "JavsScript"],
        area: "frontend"
    },
    {
        id: 2,
        fullName: "Adam Smith",
        skills: ["HTML", "CSS", "JavsScript", "React"],
        area: "frontend"
    },
    {
        id: 3,
        fullName: "Will Dowson",
        skills: ["HTML", "PHP", "Laravel"],
        area: "backend"
    },
    {
        id: 4,
        fullName: "Sam Wilson",
        skills: ["HTML", "CSS", "JavsScript", "PHP"],
        area: "fullstack"
    },
];

// вернет первый найденный объект(как только наша функция вернет true, элемент будет найден)
console.log(developers.find((item) => item.area === "frontend"));
console.log(developers.find((item) => item.skills.includes("React")));

// вернет индекс элемента(или -1, если элемент не найден)
console.log(developers.findIndex((item) => item.skills.includes("React")));

//////////////////////////////////////////////////////////////////////////
// Сортировка массива
//////////////////////////////////////////////////////////////////////////
// Все методы сортировки муттируют массив
const developers2 = [
    {
        id: 1,
        fullName: "John Doe",
        skills: ["HTML", "CSS", "JavsScript"],
        area: "frontend"
    },
    {
        id: 2,
        fullName: "Adam Smith",
        skills: ["HTML", "CSS", "JavsScript", "React"],
        area: "frontend"
    },
    {
        id: 3,
        fullName: "Will Dowson",
        skills: ["HTML", "PHP", "Laravel"],
        area: "backend"
    },
    {
        id: 4,
        fullName: "Sam Wilson",
        skills: ["HTML", "CSS", "JavsScript", "PHP"],
        area: "fullstack"
    },
];

const numbers3 = [1, 2, 3, 4, 10, 12, 23];
const cities2 = ["Madrid", "Amsterdam", "Paris", "Berlin", "Kiev"];

// по умолчанию сортирует не очень корректно
numbers3.sort();        // [1, 10, 12, 2, 23, 3, 4]
console.log(numbers3);

// нормальная сортировка(от меньшего к большему)
// a, b - поочередно 2 числа из массива, a - b вернет положит, отриц число или 0
numbers3.sort((a, b) => a - b); // [1, 2, 3, 4, 10, 12, 23]
console.log(numbers3);

// нормальная сортировка(отбольшего к  меньшему)
numbers3.sort((a, b) => b - a); // [23, 12, 10, 4, 3, 2, 1]
console.log(numbers3);

// метод reverse
numbers3.reverse();

// сортировка при работе со строками(нужно сделать свою сортировочную функцию)
cities2.sort(sorting);
console.log(cities2);

function sorting(a, b) {
    if (a > b) {
        return 1;
    }
    if (a < b) {
        return -1;
    }
    return 0;
}

// сортировка коллеций(так же нужно сделать свой метод для сортировки по текстовым свойствам)

const developers3 = [
    {
        id: 1,
        fullName: "John Doe",
        skills: ["HTML", "CSS", "JavsScript"],
        area: "frontend"
    },
    {
        id: 2,
        fullName: "Adam Smith",
        skills: ["HTML", "CSS", "JavsScript", "React"],
        area: "frontend"
    },
    {
        id: 3,
        fullName: "Will Dowson",
        skills: ["HTML", "PHP", "Laravel"],
        area: "backend"
    },
    {
        id: 4,
        fullName: "Sam Wilson",
        skills: ["HTML", "CSS", "JavsScript", "PHP"],
        area: "fullstack"
    },
];

developers3.sort((a, b) => sortingDev(a.area, b.area));
console.log(developers3);

function sortingDev(a, b) {
    if (a > b) {
        return 1;
    }
    if (a < b) {
        return -1;
    }
    return 0;
}

//////////////////////////////////////////////////////////////////////////
// Оператор остатка (...)
//////////////////////////////////////////////////////////////////////////

const developers4 = [
    {
        id: 1,
        fullName: "John Doe",
        skills: ["HTML", "CSS", "JavsScript"],
        area: "frontend"
    },
    {
        id: 2,
        fullName: "Adam Smith",
        skills: ["HTML", "CSS", "JavsScript", "React"],
        area: "frontend"
    },
    {
        id: 3,
        fullName: "Will Dowson",
        skills: ["HTML", "PHP", "Laravel"],
        area: "backend"
    },
    {
        id: 4,
        fullName: "Sam Wilson",
        skills: ["HTML", "CSS", "JavsScript", "PHP"],
        area: "fullstack"
    },
];

const numbers4 = [1, 2, 3, 4, 10, 12, 23];
const cities4 = ["Madrid", "Amsterdam", "Paris", "Berlin", "Kiev"];

// извлечет элементы из cities4 и добавит их в arr6
const arr6 = ["Riga", ...cities4, "Moscow"];
console.log(arr6);  // ['Riga', 'Madrid', 'Amsterdam', 'Paris', 'Berlin', 'Kiev', 'Moscow']

// теперь пример с объектами
const dev1 = {
    id: 1,
    fullName: 'John Doe',
    skills: ['HTML', 'CSS', 'JavsScript'],
    area: 'frontend'
}

// каждая пара ключ-значение распаковывается из dev1 в dev2, получается копия
const dev2 = {...dev1};

sum(...numbers4);

// когда не знаем, сколько параметров может прийти в функцию, args[]
function sum(a, b, ...args) {
    let result = a + b;
    for (let i = 0; i < args.length; i++) {
        result += args[i];
    }

    return result;
}

console.log(sum(4, 3));
console.log(sum(4, 3, 1));
console.log(sum(4, 3, 1, 2));

//////////////////////////////////////////////////////////////////////////
// Деструктуризация массиов
//////////////////////////////////////////////////////////////////////////

const cities5 = ["Madrid", "Amsterdam", "Paris", "Berlin", "Kiev"];

// создает переменную и кладет в нее элемент из массива cities
const [madrid, amst, paris] = cities5;
console.log(madrid, amst, paris);

// с пропуском каких то значений
const [madr,,, ber, kiev] = cities5;
console.log(madr, ber, kiev);

//////////////////////////////////////////////////////////////////////////
// Деструктуризация объектов
//////////////////////////////////////////////////////////////////////////

const developer2 = {
    id: 1,
    fullName: 'John Doe',
    skills: ['HTML', 'CSS', 'JavaScript'],
    area: 'frontend',
    langugages: {
        english: 'B2',
        spanish: 'native',
        hebrew: 'A1'
    }
};

// здесь в отличие от массивов порядок не важен, но важно значение ключей
const {
    area, 
    id,
} = developer2;
console.log(area, id);

// если такое имя переменной у нас в программе уже есть, то используем синтаксис переименования
const {
    area: areaDeveloper, 
    id: idDeveloper,
} = developer2;
console.log(areaDeveloper, idDeveloper);

//////////////////////////////////////////////////////////////////////////
// Шаблонные строки
//////////////////////////////////////////////////////////////////////////

const firstName = "John";
const lastName = "Doe";

console.log(firstName + " " + lastName);

// модифицируем с использованием шаблонных строк(косые кавычки, на букве Ё)
console.log(`${firstName} ${lastName}`);

// еще пример(шаблонные строик полезны при составлении длинных строк):
console.log('Hi, my name is ' + firstName + ' ' + lastName + '!');
console.log(`Hi, my name is ${firstName} ${lastName}!`);

// кроме этого, в шаблонные строки можно вставлять выражения
console.log(`Hi, my name is ${firstName} ${lastName}! My age is ${2023-1989}`);

// или например получить html строку с динамическими значениями внутри
const html = `
    <div>
        <h1>${firstName} ${lastName}</h1>
        <button>click me</button>
    </div>
`;

//////////////////////////////////////////////////////////////////////////
// Глобальные методы
//////////////////////////////////////////////////////////////////////////

// Object
// .keys - возвращает массив с ключами
const obj3 = {a: 1, b: 2, c: 3};
const obj4 = Object.keys(obj3);
console.log(obj4);  // ['a', 'b', 'c']

// .values - возвращает только значения(без ключей)
const obj5 = Object.values(obj3);
console.log(obj5);  // [1, 2, 3]

//////////////////////////////////////////////////////////////////////////
// JSON - javascript object notation
//////////////////////////////////////////////////////////////////////////

// один объект или массив на файл - файл: config.json
// в нем нельзя хранить комментарии
// в JSON нет функций, они не могут в нем храниться
// хранятся только данные - пары ключ-значение

// при этом, все ключи заключаются в двойные кавычки
// строковые значения так же помещаются в двойные кавычки

// пример:
// {
//     "firstName": "Mikhail",
//     "age": 36,

//     "skills": ["CSS"],
//     "languages": {
//         "key": "value"
//     }
// }

const obj6 = {
    a: 1,
    b: 2,
    c:3,
    print() {console.log('Hello')}
};
// пробуем преобразовать объект к строке
console.log(String(obj6));  // [object Object]

// JSON записан в виде строки
const a = `{
    "firstName": "Mikhail",
    "age": 36,

    "skills": ["CSS"],
    "languages": {
        "key": "value"
    }
}`;

// чтобы работать с этим как с объектом, мы должны это распарсить
const myObj = JSON.parse(a);
console.log(myObj.firstName);
console.log(myObj);

// обратная операция при запаковке объекта в JSON(при этом методы исчезнут)
console.log(JSON.stringify(obj6));


