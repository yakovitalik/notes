const btn = document.querySelector('button');
// const input = document.querySelector('input');       // выберет первый
const inputs = document.querySelectorAll('input');      // выберет все

const form = document.querySelector('form');

// пройдем циклом и добавим обработчик на каждый элемент
inputs.forEach(input => input.addEventListener('keypress', handleEvent));

// вешаем слушатель события на форму
form.addEventListener('submit', handleSubmit);


// btn.addEventListener('click', handleEvent);
// input.addEventListener('keypress', handleEvent);     // добавляли одному элементу

function handleEvent(event) {
    console.log(event);
    console.log(event.target);
    
    if(event.key === 'Enter') {
        event.preventDefault();     // предотвращает действие браузера по умолчанию
        // установим фокус на соседнем поле ввода по нажатию клавиши Enter
        event.target.nextElementSibling.focus();
    }
}

function handleSubmit(event) {
    // отменяем действие для формы по умолчанию
    // это позволит например сделать валидацию или асинхронно отправлять данные
    event.preventDefault();
    console.log('submit');                              // для проверки что форма отправилась

    // проверка формы на валидность перед отправкой
    if(validate()) {                                    // если форма валидная
        // submit AJAX (пока не знаем как отправлять через AJAX)

        // а также после отправки данных можем очистить форму
        form.reset();
    } else {
        alert('Заполните пустые поля!');
    }
}

// для валидации пишем отдельную функцию
function validate() {
    let isValid = true;

    inputs.forEach(input => {
        // для каждого input проверим чтобы он был не пустой
        if(!input.value.trim()) {                       // trim() уберет пробелы на всякий случай
            input.style.borderColor = 'red';            // если форма пустая, покрасить границы в красный
            isValid = false;                            // и делаем форму не валидной
        } else {
            input.style.borderColor = 'currentColor';   // если заполнена вернуть в текущий цвет
        }
    });

    return isValid;
}