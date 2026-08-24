// Menu Button 
const menuBtn = document.querySelector("#menuBtn")
const fixedMenu = document.querySelector(".fixed-menu")
menuBtn.addEventListener("click", () => {
    const isOpen = fixedMenu.style.top === "0%"
    fixedMenu.style.top = isOpen? "-100%" : "0%"
})


// Cursor effects

const box = document.querySelector(".cursor-box")
const pointer = document.querySelector(".pointer")

document.addEventListener("mousemove", (e) => {
    box.style.left = e.clientX + 60 + "px"
    box.style.top = e.clientY + 35 + "px"

})


document.querySelector(".hero-wrapper").addEventListener("mousemove",(e)=>{
  box.style.left = e.clientX + "px"
  box.style.top = e.clientY + "px"
  box.style.visibility = "visible"
  pointer.style.visibility = "hidden"
})

document.querySelector(".hero-wrapper").addEventListener ("mouseleave", (e) => {
    pointer.style.visibility = "visible"
})

document.querySelector(".hero-wrapper").addEventListener("mouseleave",(e)=>{
  box.style.visibility = "hidden"

})


window.addEventListener("mousemove", (e) => {
    pointer.style.left = e.clientX + 60 + "px"
    pointer.style.top = e.clientY + 35 + "px"

})


// Video 2

function rectanglePointer(element, text) {
    element.addEventListener("mouseenter", () => {
    pointer.style.visibility = "visible";
    pointer.querySelector("span").innerHTML = text;
        pointer.classList.add("play-mode");
    })

    element.addEventListener("mouseleave", () => {
        pointer.classList.remove("play-mode");
        pointer.querySelector("span").innerText = "";
    });
}

const blockTexts = ["MATERA", "CHANCE", "SILVR", "INTRAMUROS"]

document.querySelector(".videoshell").addEventListener("mouseenter", (e) => {
    pointer.style.visibility = "visible"
})

document.querySelector(".videoshell").addEventListener("mouseleave", (e) => {
    pointer.style.visibility = "hidden"
})

rectanglePointer(document.querySelector(".playtext"), "PORTFOLIO");

// document.querySelectorAll(".blocks").forEach(rectanglePointer);

document.querySelectorAll(".blocks").forEach((block, index) => {
    rectanglePointer(block, blockTexts[index]);
    const video = block.querySelector(".block-video");
    block.addEventListener("mouseenter", () => {
        video.play();
    })
    block.addEventListener("mouseleave", () => {
        video.pause();
        video.currentTime = 0;
    });
})