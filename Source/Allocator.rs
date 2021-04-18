use libc::c_char;
use std::ffi::CString;

#[no_mangle]
/// Dealloc a string pointer.
pub extern "C" fn DeallocString(ptr: *mut c_char) {
    if ptr.is_null() {
        return;
    }

    unsafe { CString::from_raw(ptr) };
}
