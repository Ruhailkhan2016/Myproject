<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Display Image</title>
</head>
<body>
    <table border="2" cellspacing ="7"></table>
</body>
</html>

<?php
include("connection.php");
error_reporting(0);

$query = "select * from gallery";
$data = mysqli_query($conn, $query);
$total = mysqli_num_rows($data);

if($total != 0)
{
    while($result = mysqli_fetch_assoc($data))
    {
        echo "
        <img src='".$result['picsource']."'height='200' width='200'>
        ";
        // HTML img tag is used to display image on the web page. HTML img tag is an empty tag that contains attributes only, closing tags are not used in HTML image element.
    }
}
else
{
    echo "No Record Found";
}
?>