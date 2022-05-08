function Validation() {
    var name = document.getElementById("1name");
    var phone = document.getElementById("5phone");
    var subject = document.getElementById("6course");
    var password = document.getElementById("3password");
    var confirmpassword = document.getElementById("4confirmpassword");
    var age = document.getElementById("7age");

    if (name.value == "") {
        document.getElementById("name-demo").innerHTML = "Enter Name";
        return false;
    }

    if(!age.checkValidity()) {
        document.getElementById("age-demo").innerHTML = "You are not eligible to apply";
        return false;
    }

    if (password.value == "") {
        window.alert("Please enter a password");
        password.focus();
        return false;
    }

    if (confirmpassword.value != password.value) {
        window.alert("Password does not match");
        confirmpassword.focus();
        return false;
    }

    if(phone.validity.rangeOverflow) {
        document.getElementById("phone-demo").innerHTML = "Enter valid phone number";
        return false;
    }

    if (subject.selectedIndex < 1) {
        document.getElementById("course-demo").innerHTML = "Choosing a course is mandatory";
        return false;
    }

    return true;
}