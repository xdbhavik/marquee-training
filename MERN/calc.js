x=40
y=8

function calc(a,b,op){
    op(a,b)
}

function add(a,b){
    console.log(a+b)
}

function sub(a,b){
    console.log(a-b);
}

function mult(a,b){
    console.log(a*b);
}

function divi(a,b){
    console.log(a/b);
}

calc(x,y,add)