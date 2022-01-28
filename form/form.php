<!-- here we are creating a input form field for collecting record into database-->

<?php
include("connection.php");


error_reporting(0);

?>
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    

    <link rel="stylesheet" href="form.css">

    <!-- HTML Form:-
An HTML form is a section of a document which contains controls such as text fields, password fields, checkboxes, radio buttons, submit button, menus etc.

An HTML form facilitates the user to enter data that is to be sent to the server for processing such as name, email address, password, phone number, etc. . -->

<!-- #HTML table:- tag is used to display data in tabular form (row * column). There can be many columns in a row.

We can create a table to display data in tabular form, using <table> element, with the help of <tr> , <td>, and <th> elements.

In Each table, table row is defined by <tr> tag, table header is defined by <th>, and table data is defined by <td> tags.

HTML tables are used to manage the layout of the page e.g. header section, navigation bar, body content, footer section etc. But it is recommended to use div tag over table to manage the layout of the page . -->

    <title>Signup Form</title>
</head>
<style>
    body {
        background-color: pink;
    }
</style>

<body>
    <br><br><br><br><br><br><br><br>
    <form  action="" method="POST">
        <table align="center" border="0" cellspacing="15">
            <tr>
                <td>Roll Number
                <td>
                    <input type="text" placeholder="Roll Number" name="rollno" required>
                </td>
            </tr>
            <tr>
                <td>First Name
                <td>
                    <input type="text" placeholder="First Name" name="firstname" required>
                </td>
            </tr>
            <tr>
                <td>Last Name
                <td>
                    <input type="text" placeholder="Last Name" name="lastname" required>
                </td>
            </tr>
            <tr>
                <td>Email Address
                <td>
                    <input type="text" placeholder="Email Adress" name="emailadress" required>
                </td>
            </tr>

            <tr>
                <td>Password
                <td>
                    <input type="text" placeholder="Password" name="password" required>
                </td>
            </tr>
            <tr>
                <td>Confirm Password
                <td>
                    <input type="text" placeholder="Confirm Password" name="confirmpassword" required>
                </td>
            </tr>
            <tr>
                <td align="center" colspan="2"><a href="login.html">
                        <input type="Submit" id="btn" name="submit"></a></td>
            </tr>
            </td>
            </tr>
    </form>
    </table>
</body>

</html>

<?php

// PHP provides two methods through which a client (browser) can send information to the server. These methods are given below, and discussed in detail:

//     GET method:-
//     POST method

// Get and Post methods are the HTTP request methods used inside the <form> tag to send form data to the server.

// GET method
// The GET method is used to submit the HTML form data. This data is collected by the predefined $_GET variable for processing.

// The information sent from an HTML form using the GET method is visible to everyone in the browser's address bar, which means that all the variable names and their values will be displayed in the URL. Therefore, the get method is not secured to send sensitive information.

// POST method
// Similar to the GET method, the POST method is also used to submit the HTML form data. But the data submitted by this method is collected by the predefined superglobal variable $_POST instead of $_GET.

// Unlike the GET method, it does not have a limit on the amount of information to be sent. The information sent from an HTML form using the POST method is not visible to anyone.

if (isset($_POST['submit'])) {

    $rn = $_POST['rollno'];
    $fn = $_POST['firstname'];
    $ln = $_POST['lastname'];
    $em = $_POST['emailadress'];
    $pwd = $_POST['password'];
    $conpwd = $_POST['confirmpassword'];

    if ($rn != "" && $fn != "" && $ln != "" && $em != "" && $pwd != "" && $conpwd != "") {

        $query = "INSERT INTO STUDENT VALUES ('$rn','$fn','$ln','$em','$pwd','$conpwd')";
        $data = mysqli_query($conn, $query);

        if ($data) {

            echo "Data inserted into Database";
        } else {

            echo "Failed to insert Data inserted into Database";
        }
    }
}
?>




