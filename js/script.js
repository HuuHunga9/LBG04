var modalDangkyItem = document.querySelector('.modal-dangky--item');
var closeDangkyX = document.querySelector('.modal-dangky--close-x');
var modalDangky = document.querySelector('.modal-dangky');
document.querySelectorAll('.btn-button').forEach(function(btn) {
    btn.addEventListener('click', function() {
        modalDangky.classList.add('oppen');
    })
})
closeDangkyX.addEventListener('click', () => {
    modalDangky.classList.remove('oppen');
});
modalDangky.addEventListener('click', () => {
    modalDangky.classList.remove('oppen');
})
modalDangkyItem.addEventListener('click', (event) => {
    event.stopPropagation();
})