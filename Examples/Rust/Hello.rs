#![allow(non_snake_case)]

fn main() {
    let num1 = 1.0;
    let num2 = 2.0;

    println!("Added: {}", Library::Add(num1, num2));
    println!("Subtracted: {}", Library::Subtract(num1, num2));
    println!("Multiplied: {}", Library::Multiply(num1, num2));
    println!("Divided: {}", Library::Divide(num1, num2));
}
