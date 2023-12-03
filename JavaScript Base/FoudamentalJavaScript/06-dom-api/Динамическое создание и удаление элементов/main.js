// простой список дел

const list = document.getElementById('todos');
document.querySelector('button').addEventListener('click', handleClick);

function handleClick() {
    // console.log(this);      // this будет вызван для того объекта, на котором он вызван

    // олучим значение из формы
    const newTodo = this.previousElementSibling.value.trim();
    
    if(newTodo) {
        // add todo
        createTodo(newTodo);
        this.previousElementSibling.value = '';     // очистить
    } else {
        alert('input field is empty');
    }
}

// функция по добавлению дела в список
function createTodo(text) {
    const li = document.createElement('li');
    li.innerText = text;
    li.className = 'todo-item';

    // так же при создании элемента списка добавим ему листенер на клик для удаления
    li.addEventListener('click', removeTodo);

    list.append(li);
}

// функция удаления дел из списка
function removeTodo() {
    this.removeEventListener('clicl', removeTodo);
    this.remove();
}