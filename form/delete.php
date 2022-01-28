<!--here we are perform delete operation in our database record -->

<!-- here with this below link, when i click delete button we will redirect into currect delete page-->
<meta http-equiv="Refresh" Content="0; URL=http://localhost/form/displayresult.php">


<?php
include("connection.php");
error_reporting(0);

$rollnumber = $_GET['rn'];
$query = "DELETE FROM STUDENT WHERE rollnumber = '$rollnumber'";

$data = mysqli_query($conn, $query);

if($data)
{
    echo "<script>alert('Record Deleted Form Database')</script>";
}

else

{
    echo "<font color = 'red'>Failed to Record Deleted from Database";
}
?>