<?php
error_reporting(0);
include("connection.php");
?>
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Gallery</title>
</head>

<body>
    <form action="" method="POST" enctype="multipart/form-data">
        <input type="file" name="uploadfile">
        <input type="submit" value="Upload" name="submit">
    </form>
</body>

</html>

<?php
if ($_POST['submit']) {
    $filename = $_FILES["uploadfile"]["name"];
    $tempname = $_FILES["uploadfile"]["tmp_name"];
    $folder = "gallery/".$filename;
    move_uploaded_file($tempname, $folder);

    if ($filename != "") {

        $query = "INSERT INTO GALLERY VALUES ('$folder')";
        $data = mysqli_query($conn, $query);

        if ($data)
         {
            echo "Inserted";
        }
    } 
    else 
    {
        echo "Failed";
    }
}

// echo $folder;
?>

