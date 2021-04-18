use libc::c_char;
use std::ffi::{CStr, CString};

/// Convert C string to Rust String.
pub fn ToString(ptr: *mut c_char) -> String {
    let input = unsafe { CStr::from_ptr(ptr) };

    return input.to_str().unwrap().to_string();
}

/// Convert Rust String to C string.
pub fn FromString(string: String) -> *mut c_char {
    return CString::new(string).unwrap().into_raw();
}
