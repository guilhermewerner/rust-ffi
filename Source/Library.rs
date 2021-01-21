#![allow(dead_code)]
#![allow(unused_variables)]
#![allow(non_snake_case)]

#[no_mangle]
pub extern "C" fn Add(num1: f32, num2: f32) -> f32 {
    return num1 + num2;
}

#[no_mangle]
pub extern "C" fn Subtract(num1: f32, num2: f32) -> f32 {
    return num1 - num2;
}

#[no_mangle]
pub extern "C" fn Multiply(num1: f32, num2: f32) -> f32 {
    return num1 * num2;
}

#[no_mangle]
pub extern "C" fn Divide(num1: f32, num2: f32) -> f32 {
    return num1 / num2;
}
