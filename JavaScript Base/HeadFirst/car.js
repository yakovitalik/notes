const fiat = {
    make: 'Fiat',
    model: '500',
    // здесь идут другие свойства...

    started: false,
    fuel: 0,

    start() {
        this.started = true;
    },

    stop() {
        this.started = false;
    },

    drive() {
        if(this.started) {
            alert(this.make + ' ' + this.model + ' ' + ' goes zoom zoom!');
        } else {
            alert('You need to start the engine first.');
        }
    },

    addFuel(amount) {
        this.fuel += amount;
    }
};