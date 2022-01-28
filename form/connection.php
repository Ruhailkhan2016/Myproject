<!-- here we are connect our data into data base  -->

<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "form_data";

// PHP mysqli_connect() function is used to connect with MySQL database. It returns resource if connection is established or null.
$conn =  mysqli_connect($servername,$username,$password,$dbname);

if($conn)
{
    // echo "Connection Ok";
}
else
{
    echo "Connection Failed ".mysqli_connect_error();
}
?>