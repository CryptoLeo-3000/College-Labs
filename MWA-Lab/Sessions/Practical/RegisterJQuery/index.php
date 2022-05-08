<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <script src="https://code.jquery.com/jquery-3.6.0.js" integrity="sha256-H+K7U5CnXl1h5ywQfKtSj8PCmoN9aaq30gDh27Xc0jk=" crossorigin="anonymous"></script>
    <script>
        $(document).ready(function(){
            $("input").on({
                mouseenter: function(){
                $(this).css("background-color", "aqua");
                },  
                mouseleave: function(){
                $(this).css("background-color", "whitesmoke");
                }
            });
            $("input").focus(function(){
                $(this).css("background-color", "green");
            });
            $("button").click(function(){
                alert("Thank you for registering.");
            });
        });
    </script>
    <title>Register form using JQuery</title>
</head>
<body>
<div>
        <h1>Validation Form</h1>
        <form name="RegForm" action="register.php" method="post">
            <p>Name:
                <br>
                <input type="text" name="Name" id="1name"/>
            </p>
            <p id="name-demo" class="demos"></p>

            <p>E-mail Address:
                <br>
                <input type="email" name="Email" id="2email"/>
            </p>

            <p>Age:
                <br>
                <input type="number" name="Age" id="7age" min="18" max="25" required/>
            </p>
            <p id="age-demo" class="demos"></p>

            <p>Password:
                <br>
                <input type="password" name="Password" id="3password"/>
            </p>

            <p>Re-enter Password:
                <br>
                <input type="password" name="ConfirmPassword" id="4confirmpassword"/>
            </p>
            
            <p>Phone:
                <br>
                <input type="number" name="Phone" id="5phone" max="10000000000"/>
            </p>
            <p id="phone-demo" class="demos"></p>

            <p>
                Select course:
                <br>
                <select type="text" value="" name="Subject" id="6course">
                    <option>None</option>
                    <option>BTECH/BE</option>
                    <option>BBA</option>
                    <option>B.COM</option>
                    <option>MBA</option>
                    <option>BSC</option>
                </select>
            </p>
            <p id="course-demo" class="demos"></p>
            
            <button>Submit</button>
        </form>
    </div>
</body>
</html>