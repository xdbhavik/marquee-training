const username = document.getElementById('username');
const password = document.getElementById('password');
const loginBtn = document.getElementById('loginBtn');
const message = document.getElementById('message');

// "input" event fires every time the value changes.
// username.addEventListener("input", () => {
//     const usern = username.value;

// })

password.addEventListener("input", () =>{
    const pass = password.value;
    if (pass.length >= 10) {
        message.textContent = "Very Strong Password";
        message.style.color = "rgb(0 255 0)"
    } else if (pass.length < 10 && pass.length >= 8 ) {
        message.textContent = "Strong Password";
        message.style.color = "rgb(79, 193, 64)"

    } else if (pass.length < 8 && pass.length >= 6) {
        message.textContent = "Weak Password";
        message.style.color = "rgb(255, 149, 0)"

    } else {
        message.textContent = "Password should be more than 6 characters long.";
        message.style.color = "rgb(255, 0, 0)"

    }
    
})


