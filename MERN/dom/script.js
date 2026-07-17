const boomButton = document.getElementById("boom");

function randomBetween(min, max) {
	return Math.random() * (max - min) + min;
}

function buildParticle(x, y, angle, distance, color, size, duration) {
	const particle = document.createElement("span");
	particle.className = "particle";
	particle.style.left = `${x}px`;
	particle.style.top = `${y}px`;
	particle.style.setProperty("--dx", `${Math.cos(angle) * distance}px`);
	particle.style.setProperty("--dy", `${Math.sin(angle) * distance}px`);
	particle.style.setProperty("--color", color);
	particle.style.setProperty("--glow", color);
	particle.style.setProperty("--size", `${size}px`);
	particle.style.setProperty("--duration", `${duration}ms`);
	document.body.appendChild(particle);
	particle.addEventListener("animationend", () => particle.remove(), { once: true });
}

function boom() {
	const buttonRect = boomButton.getBoundingClientRect();
	const originX = buttonRect.left + buttonRect.width / 2;
	const originY = buttonRect.top + buttonRect.height / 2;
	const particleCount = 42;
	const palette = ["#ffd166", "#ff8c42", "#ff4d6d", "#7bdff2", "#f72585", "#ffffff"];

	const flash = document.createElement("div");
	flash.className = "flash";
	document.body.appendChild(flash);
	flash.addEventListener("animationend", () => flash.remove(), { once: true });

	const ring = document.createElement("div");
	ring.className = "ring";
	ring.style.left = `${originX}px`;
	ring.style.top = `${originY}px`;
	document.body.appendChild(ring);
	ring.addEventListener("animationend", () => ring.remove(), { once: true });

	document.body.classList.remove("boom-screen-shake");
	void document.body.offsetWidth;
	document.body.classList.add("boom-screen-shake");

	for (let index = 0; index < particleCount; index += 1) {
		const angle = (Math.PI * 2 * index) / particleCount + randomBetween(-0.18, 0.18);
		const distance = randomBetween(90, 280);
		const color = palette[Math.floor(Math.random() * palette.length)];
		const size = randomBetween(8, 16);
		const duration = randomBetween(650, 1100);

		buildParticle(originX, originY, angle, distance, color, size, duration);
	}

	for (let burst = 0; burst < 10; burst += 1) {
		const angle = randomBetween(0, Math.PI * 2);
		const distance = randomBetween(180, 360);
		const color = palette[burst % palette.length];
		const size = randomBetween(3, 7);
		const duration = randomBetween(500, 850);

		buildParticle(originX, originY, angle, distance, color, size, duration);
	}
}

boomButton.addEventListener("click", boom);
