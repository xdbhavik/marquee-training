const employee = {}

employee.name = "Bhavik Patel"
employee.id = 1024
employee.department = "Engineering"

employee["salary"] = 850000
employee["exp"] = 4
employee["fullTime"] = true

console.log(employee)

console.log(employee.name)
console.log(employee["salary"])

//optional chaining : is used to safely access properties of an object


function createEmployee() {
    const employee = {}

    employee.name = "Bhavik Patel"
    employee.id = 1024
    employee.department = "Engineering"

    employee["salary"] = 850000
    employee["exp"] = 4
    employee["fullTime"] = true

    return employee
}

const emp = createEmployee()

console.log(emp)
console.log(emp.name)
console.log(emp["salary"])