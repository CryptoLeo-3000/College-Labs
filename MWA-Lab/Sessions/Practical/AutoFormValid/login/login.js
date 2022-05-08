function Validation() {
    var user = document.getElementById("Uname").value;
    var pass = document.getElementById("Upassword").value;

    if (user == null || user == ""){
        alert("Username can't be blank");
        return false;
    } else if (pass == null || pass == ""){
        alert("Please enter password");
        return false;
    } else if (user != "Kartik39") {
        alert("Wrong username");
        return false;
    } else if (pass != "70362019039") {
        alert("Wrong password");
        return false;
    }

    return true;
}