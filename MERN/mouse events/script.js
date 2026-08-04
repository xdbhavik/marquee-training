const canvas = document.getElementById('board');
const ctx = canvas.getContext('2d');
const clear = document.getElementById('clear');

// Drawing state 
let isDrawing = false;

let brushColor = "rgb(255 255 255)";
let brushWidth = 5;

// mousedown and mouseup 
// user click and hold the board -> draw hoga
canvas.addEventListener('mousedown', (event) => {
    isDrawing = true;
    ctx.beginPath();
    ctx.moveTo(event.offsetX, event.offsetY)
})

// event is required when mouse location is required. 

// drawing band karo 
canvas.addEventListener('mouseup', () =>{
    isDrawing = false;
    ctx.closePath();
})

// mouse move event
canvas.addEventListener('mousemove', (event) => {

    if (!isDrawing) return;
    ctx.lineWidth = brushWidth;

    ctx.lineCap = 'round';
    ctx.strokeStyle = brushColor;
    ctx.lineTo(event.offsetX, event.offsetY);
    ctx.stroke();



})


canvas.addEventListener('mouseleave', () =>{
    isDrawing = false;
})


canvas.addEventListener('mouseenter', () => {
    console.log("Drawing enabled");
})

clear.addEventListener('click', () => {
    ctx.clearRect(0,0,canvas.width, canvas.height);
    console.log('Canvas cleared');
})

// double click
canvas.addEventListener('dblclick', ()=>{
    const randomBg = `hsl(${Math.random()*360}, 80%, 90%)`;
    canvas.style.backgroundColor = randomBg;

    brushColor = `hsl(${Math.random() * 360}, 100%, 30%)`;

})


canvas.addEventListener('contextmenu', (event) => {

})