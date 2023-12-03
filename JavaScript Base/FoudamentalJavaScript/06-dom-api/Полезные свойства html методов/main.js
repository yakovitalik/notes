const block1 = document.querySelector('#block');

// ищем блок2 в рамках блока1(а не во всем документе)
const block2 = block1.querySelector('#too');

// выдаст все координаты блока
console.log(block2.getBoundingClientRect());

const x = 1;

// метод позволяет динамически создавать разметку
block2.insertAdjacentHTML('afterend', `
<h2 class="subtitle">Text</h2>
<p>${x}</p>
`)