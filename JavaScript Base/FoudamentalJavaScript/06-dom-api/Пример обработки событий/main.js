const btn = document.getElementById('toggle-btn');
const div = document.querySelector('.element');      // querySelector даст одну сущность, а byId дал бы коллекцию

// 'это был первый вариант, но лучше делать по другому
// function toggleDivVisibility() {
//     if(div.style.display === 'none') {
//         div.style.display = 'block';
//     } else {
//         div.style.display = 'none';
//     }
// }

function toggleDivVisibility() {
    div.classList.toggle('hide');
}

btn.addEventListener('click', toggleDivVisibility);