import { Person } from './Person';

class Employee extends Person {
    department: string;

    constructor(firstName: string, lastName: string, 
            age: number, _ssn: string, department: string) {
                super(firstName, lastName, age, _ssn);
                this.department = department;
            }
}