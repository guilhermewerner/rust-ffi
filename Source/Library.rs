#![allow(non_snake_case)]

mod Allocator;
mod Converter;

use libc::c_char;

#[no_mangle]
pub extern "C" fn Hello(input: *mut c_char) -> *mut c_char {
    let output = format!("Hello {}", Converter::ToString(input));

    return Converter::FromString(output);
}

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
