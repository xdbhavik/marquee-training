const button = document.querySelectorAll(".show")

for (let btn of button) {
    btn.addEventListener("click", () => {
        const card = btn.closest(".card");
        const title = card.querySelector("h2");
        const price = card.querySelector(".price");
        const rating = card.querySelector(".rating");

        alert(
            title.innerText + "\n" +
            price.innerText + "\n" +
            rating.innerText
        )
    })
} 