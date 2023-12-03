// Это чуть более укороченная версия класса Person 
// Без объявления переменных с гнеттерами и сеттерами

class Person2 {
    constructor(public firstName: string, 
        public lastName: string, public age: number, private _ssn?: string) {
            // в этой версии последний аргумент конструктора делается необязательным(_ssn?)
        }

    // Геттер
    get sn(): string {
        return this._ssn;
    }

    // Сеттер
    set ssn(value: string) {
        this._ssn = value;
    }
}

var p = new Person2("John", "Smith", 29);
p.ssn = "456-70-1234";

console.log("Last name: " + p.lastName + " SSN: " + p.ssn);
