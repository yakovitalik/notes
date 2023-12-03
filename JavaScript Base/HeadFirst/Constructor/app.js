///////////////////////////////////////////////////////////
// Работа с конструкторами
///////////////////////////////////////////////////////////

// Создаем конструктор
function Dog(name, breed, weight) {
    this.name = name;
    this.breed = breed;
    this.weight = weight;

    // метод
    this.bark = function() {
        if (this.weight > 25) {
            alert(this.name + " says Woof!");
        } else {
            alert(this.name + " says Yip!");
        }
    }
}

// создаем объекты через конструктор
const fido = new Dog("Fido", "Mixed", 38);
const flaffy = new Dog("Fluffy", "Poodle", 30);
const spot = new Dog("Spot", "Chihuahua", 10);
const dogs = [fido, flaffy, spot];
for (let i = 0; i < dogs.length; i++) {
    dogs[i].bark();
} 