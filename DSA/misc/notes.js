### Meet code : ydgjfudxet
## JavaScript
#### what is the use of javascript
- To make a website functional and Interactive
- To update or create the CSS and HTML file 

### History of JS
- Created by Brendan Eich in 10 days in 1995 
- First it was called Mocha than live script and than changed it to javascript
- In 1997 javascript was standardlised 

### ECMA script
- It is a community to handle the languages and their changes 

- V8 Engine for chrome
- spider Monkey for firefox

### Variables in JS
- They are the containers to store data
- var, let, const

### Scope in JS
- Block scope
- global scope
- function scope

#### Datatypes in js
#### Primitives
- Number
- boolean
- string
- null
- undefined
- symbol
- bigInt
#### Reference
- Array
- Object
- function
#### Operators
- Arithmetic
- comparison
- logical
- assigment
- conditional
- ternary
- bitwise
### Loops

- for loop
	- when we know the number of iteration
- while loop
	- when we dont know the number of iteration
- do-while loop
	- there will be atleast one iteration
- for each loop
	- For array traverse loop
	
#### functions
- block of code that performs a specific task
```javascript
function greet(name) {
    return "Hello, " + name;
}

console.log(greet("Alice")); // Hello, Alice
```

Functions help make code reusable and organised.

#### Types of functions
1. function declaratiion
2. function expression
3. Anonymous function
4. Arrow function

###### Callback function
- A function who passes argument to other function
##### IIFE
- Immediately invoke function expression

## JS Strings
- It is a collection of characters 

#### String declaration
1. Literals (" " , ' ')
2. using constructor 
3. template literals / String interpolation

#### String methods
- length
- concat
- escape character
- charAt()
- indexOf()
- toUppercase()
- toLowercase()
- substring(start , end)
- slice(start ,end)
- substr(start ,numberof character)
- trim()
- replace()
- split()
- includes()

### Type conversion and coercion
- explicit = Type conversion
- implicit = type coercion

Number : converts the entire string
ParseInt() : converts only numerical part of the string

# JavaScript Type Conversion

### `typeof`

- `typeof("20")` → `"string"`
    
- `typeof(100)` → `"number"`
    
- `typeof(true)` → `"boolean"`
    

### `Number()`

Converts values to numbers.

```js
Number("20")    // 20
Number(true)    // 1
Number(false)   // 0
```

### `Boolean()`

Converts values to booleans.

```js
Boolean(1)      // true
Boolean(0)      // false
Boolean("true") // true
Boolean("0")    // true
Boolean("")     // false
```

> Any non-empty string is `true`.

### String Concatenation

```js
let score = 100;
score += "20";   // "10020"
typeof(score);   // "string"
```

If one operand is a string, `+` performs string concatenation.

### `parseInt()`

Converts a string to an integer.

```js
parseInt("100")      // 100
parseInt("100.00")   // 100
parseInt("100.50")   // 100
parseInt(100)        // 100
```

`parseInt()` ignores the decimal part.

### Common Mistakes

- `Boolean()` ✔️ (Correct)
    
- `boolean()` ❌ (Not defined)
    
- `parseInt()` ✔️ (Correct)
    
- `perseInt()` ❌ (Spelling error)

### Math methods
1. Math.abs(-5)  => 5
2. Math.round(4.6)  => 5
3. Math.ceil(4.6)  => 5
4. Math.floor(4.6)  => 4
5. Math.min(2,3)  => 2
6. Math.max(2,3)  => 3
7. Math.random()  => generates a random number

# JavaScript Arrays

## Array

- An array stores multiple values in a single variable.
    
- Arrays can hold values of any data type.
    
- Indexing starts from **0**.
    

```js
let arr = [10, 20, 30, 40];
```

### Access Elements

```js
arr[0]; // 10
arr[2]; // 30
```

### Array Length

```js
arr.length; // 4
```

## Traversing an Array

### 1. Classic `for` Loop (Most Common)

```js
for (let i = 0; i < arr.length; i++) {
    console.log(arr[i]);
}
```

### 2. `for...of` Loop (Values)

```js
for (let value of arr) {
    console.log(value);
}
```

### 3. `for...in` Loop (Indexes)

```js
for (let index in arr) {
    console.log(index, arr[index]);
}
```

##### Array Methods
- arr.push()
- arr.pop()
- arr.unshift()
- arr.shift()
- indexOf()
- lastIndexOf()
arr.splice(start, deletecount,id1, id2);

#### Higher order function
- the function that takes another function as arguments or returns another function
#### Callback functions
- they are passed as an argument to another function                                         
##### Reduce 
- It executes upon the function
- upon each array element
- and reduces the array to single value


### Array Destructure
```
let colors = [a,b,c]
[e,g,h] = colors
```

##### Swapping numbers
- [a,b]  = [b,a]

## Object
- any real world thing that has properties and behaviour is called object according to me


#### Nullish colescing (??)
> If the value is null print the default value 

#### rest and spread operator in js ( ... )
- spread
> expands one to many 
> priary used in array, object and function call
> 
- rest
> expands many to one
> function paraemeter and key structure


### Shallow copy and Deep copy
# Shallow Copy and Deep Copy in JavaScript

## Shallow Copy

A **shallow copy** creates a new object or array, but nested objects are copied by **reference**. Changes to nested objects affect both the original and the copied object.

```javascript
const obj1 = { name: "John", address: { city: "Delhi" } };
const obj2 = { ...obj1 };

obj2.address.city = "Mumbai";
console.log(obj1.address.city); // Mumbai
```

## Deep Copy

A **deep copy** creates a completely independent copy, including all nested objects. Changes to the copied object do not affect the original.

```javascript
const obj1 = { name: "John", address: { city: "Delhi" } };
const obj2 = structuredClone(obj1);

obj2.address.city = "Mumbai";
console.log(obj1.address.city); // Delhi
```

## Difference

* **Shallow Copy:** Copies only the first level; nested objects share references.
* **Deep Copy:** Copies all levels recursively; objects are completely independent.