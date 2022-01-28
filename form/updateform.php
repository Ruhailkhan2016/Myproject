<?php
include("connection.php");

error_reporting(0);

$rn = $_GET['rn'];
$fn = $_GET['fn'];
$ln = $_GET['ln'];
$em = $_GET['em'];
?>
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="form.css">
    <title>Update Form</title>
</head>
<style>
    body {
        background-color: pink;
    }
</style>
<body>
    <br><br><br><br><br><br><br><br><br>
    <form action="" method="GET">
        <table align="center" border="0" cellspacing="15">

            <tr>
                <td>Roll Number</td>
                <td> <input type="text" value="<?php echo "$rn" ?>" name="rollnumber"></td>
            </tr>

            <tr>
                <td>First Name</td>
                <td><input type="text" value="<?php echo "$fn" ?>" name="firstname"></td>
            </tr>

            <tr>
                <td>Last Name</td>
                <td><input type="text" value="<?php echo "$ln" ?>" name="lastname"></td>
            </tr>

            <tr>
                <td>Email Address</td>
                <td><input type="text" value="<?php echo "$em" ?>" name="email"></td>
            </tr>

            <tr>
                <td colspan="2" align="center"><input type="submit" name="submit" id="btn" value="Update Detail"></td>
            </tr>
        </table>
    </form>
</body>
</html>

<?php

if($_GET['submit'])
{
    $rollnumber = $_GET['rollnumber'];
    $firstname = $_GET['firstname'];
    $lastname = $_GET['lastname'];
    $email = $_GET['email'];

    $query = "update student set rollnumber='$rollnumber',firstname='$firstname',lastname='$lastname',email='$email' where rollnumber='$rollnumber'";

    $data = mysqli_query($conn, $query);

    if($data) {

        echo "<script>alert('Record Updated')</script>"; 

        ?>
            <meta http-equiv="Refresh" Content="0; URL=http://localhost/form/displayresult.php">
        <?php
    }
    else
    {
        echo "Failed To Update Record";
    }
}
?>



