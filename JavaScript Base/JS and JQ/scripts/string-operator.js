const greeting = 'Привет, ';
const name = 'Катерина';

const welcomeMessage = greeting + name + '!';

const el = document.getElementById('greeting');
el.textContent = welcomeMessage;