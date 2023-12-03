// выбраны сущности со страницы и на них навешены на событие клика один handler
document.querySelector('button').addEventListener('click', handleClick);
document.querySelector('section').addEventListener('click', handleClick);
document.querySelector('div').addEventListener('click', handleClick);

function handleClick(event) {

    // остановим всплытие
    event.stopPropagation();    // после этого при клике на кнопку сработает событие только кнопки

    console.log(event);
    console.log(event.target);
}