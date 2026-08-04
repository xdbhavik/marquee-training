function Car(name, model, year, color, type) {
    this.name = name;
    this.model = model;
    this.year = year;
    this.color = color;
    this.type = type;
}

function RacingCar(name, model, year, color, type) {
    Car.call(this, name, model, year, color, type)
}
