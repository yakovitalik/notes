let location1 = 3;
let location2 = 4;
let location3 = 5;
let guess;
let hits = 0;
let guesses = 0;
let isSunk = false;

while (isSunk == false) {
    guess = prompt("Ready, aim. fire!(Enter a number from 0-6): ");
    if (guess < 0 || guess > 6) {
        alert("Please enter a valid cell number!");
    } else {
        guesses += 1;

        if (guess == location1 || guess == location2 || guess == location3) {
            alert("HIT!");
            hits += 1;
            if (hits == 3) {
                isSunk = true;
                alert("You sunk my battleship!");
            }
        } else {
            alert("MISS");
        }
    }
}

let stats = "You tuck " + guesses + " guesses to sink the battleship, " + 
        "which means your shooting accurace was " + (3/guesses);

alert(stats);