function logInfo(name: string, age: number): void {
    console.log(`Info: ${name}, ${age}`);
}
logInfo('Vitaliy', 33);


function calc(a: number, b: number | string): number {
    if (typeof b === 'string') b = +b;
    return a + b;
}

console.log(calc(2, 5));