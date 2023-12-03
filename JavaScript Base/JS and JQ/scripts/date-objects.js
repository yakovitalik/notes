let today = new Date();
let year = today.getFullYear();

let el = document.getElementById('footer');
el.innerHTML = '<p>Собственность &copy' + year + '</p>';