function Car(name,model,year,color,type){
    this.name = name;
    this.model = model;
    this.year = year;
    this.color = color;
    this.type = type;
}

function RacingCar(name,model,year,color,type){
    Car.call(this,name,model,year,color,type);
}

RacingCar.prototype.vroom = function(){
    console.log(this.name+ "vroom vroom");
}

function SUV(name,model,year,color,type){
    Car.call(this,name,model,year,color,type);
}

SUV.prototype.thar = function(){
    console.log("Thar aa gayi bhagooo");
}

function sadan(name,model,year,color,type){
    Car.call(this,name,model,year,color,type)
}

sadan.prototype.sadaning = function(){
    console.log("Im driving a sadan");
}

const lambo = new RacingCar("SVJ","6.5L v12",2022,"Metallic gray","petrol")
lambo.vroom();


const jeep = new SUV("Compass","2.0L multijet",2024,"Chromed Oragne","Diesel")
jeep.thar();

const aura = new sadan("Aura","1.2L Kappa",2025,"pearl while","petrol")
aura.sadaning();