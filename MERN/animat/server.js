const express = require("express");
const path = require("path");

const app = express();
const PORT = 5500;

app.use(express.static(__dirname));

app.listen(PORT, "127.0.0.1", () => {
    console.log(`Server running at http://localhost:${PORT}`);
});