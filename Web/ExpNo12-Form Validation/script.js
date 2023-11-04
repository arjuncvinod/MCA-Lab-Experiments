function validateForm() {
    console.log("hello");
    // Fetch form elements
    var fname = document.forms["myForm"]["fname"].value;
    var dob = document.forms["myForm"]["dob"].value;
    var mobile = document.forms["myForm"]["ph"].value;
    var course = document.querySelector('input[name="course"]:checked');

    // Get the warning message elements
    var fnameWarning = document.getElementById("fnameWarning");
    var dobWarning = document.getElementById("dobWarning");
    var mobileWarning = document.getElementById("mobileWarning");
    var courseWarning = document.getElementById("courseWarning");

    // Reset warning messages
    fnameWarning.innerHTML = "";
    dobWarning.innerHTML = "";
    mobileWarning.innerHTML = "";
    courseWarning.innerHTML = "";

    // Check if First Name is blank
    if (fname.trim()==="") {
        fnameWarning.innerHTML = "First Name should not be blank";
        document.myForm.fname.focus()
        return false;
    }

    // Check if Day, Month, and Year in Date of Birth are selected
    if (dob === "") {
        dobWarning.innerHTML = "Please select the Date of Birth";
        document.myForm.dob.focus()
        return false;
    }

    // Check if Mobile number length is 10
    if (mobile.length !== 10) {
        mobileWarning.innerHTML = "Mobile number should be 10 digits long";
        document.myForm.ph.focus()
        return false;
    }

    // Check if at least one option is selected for Course
    if (!course) {
        courseWarning.innerHTML = "Please select a course";
        return false;
    }

    // The form is valid if it passes all the conditions
    alert("Form submitted Successfully")
    return true;
}
