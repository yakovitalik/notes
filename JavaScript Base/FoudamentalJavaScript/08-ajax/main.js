function withPromise() {
    return new Promise((resolve, reject) => {
        resolve('Hello from Promise');
    })
}

console.log('Hi, there me first');

setTimeout(() => console.log('When is my turn?'), 0);
withPromise().then(console.log).catch(value => console.log(value + '!!!'));

console.log('Am I last in the queue?');