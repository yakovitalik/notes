const btn = document.querySelector('button');
// const input = document.querySelector('input');   // выберет первый
const inputs = document.querySelectorAll('input');   // выберет все

// пройдем циклом и добавим обработчик на каждый элемент
inputs.forEach(input => input.addEventListener('keypress', handleEvent));


// btn.addEventListener('click', handleEvent);
// input.addEventListener('keypress', handleEvent); // добавляли одному элементу

function handleEvent(event) {
    console.log(event);
    console.log(event.target);

    if(event.key === 'Enter') {
        // установим фокус на соседнем поле ввода по нажатию клавиши Enter
        event.target.nextElementSibling.focus();
    }
}