const riddle = {
    question: 'Висит груша нельзя скушать',
    correctAnswer: 'лампочка',
    hints: ['это не съедобное', 'это не фрукт'],
    tries: 3,
    checkAnswer(str) {
        // TODO: написать логику проверки правильного ответа
        // alert для пользователя, console.log()
        if (this.tries < 1) {
            console.log('Игра окончена!');
            return alert('Игра окончена!');
        }

        if (str.toLowerCase().includes(this.correctAnswer)) {
            alert('Правильный ответ!');
            console.log('Правильный ответ');
            this.tries = 0;
        } else {
            alert('Неправильный ответ!');
            console.log('Неправильный ответ');
            this.tries--;

            const hint = this.hints[this.tries === 2 ? 0 : 1];

            if (this.tries) {
                alert("Подсказка: " + hint);
            } else {
                console.log('Игра окончена!');
                return alert('Игра окончена!');
            }
        }
    },
}

window.onload = function() {
    document.getElementById('riddle').innerText = riddle.question;
}

function check() {
    const input = document.getElementsByTagName('input')[0];

    const guessedAnswer = input.value;

    if (guessedAnswer) {
        // TODO: вызвать функцию checkAnswer у объекта загадки, передав туда ответ
        riddle.checkAnswer(guessedAnswer);
    }
}