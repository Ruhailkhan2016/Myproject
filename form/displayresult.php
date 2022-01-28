<!-- here we are display form input data into webpage  -->


<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="form.css">
    <title>Display records</title>
</head>
<style>
    body {
        background-color: pink;
    }
</style>

<body>

    <table align="center" border="2" cellspacing="7">
        <tr>
            <th>Roll Number</th>
            <th>First Name</th>
            <th>Last Name</th>
            <th>Email Address</th>
            <th>Password</th>
            <th colspan="2" align="center">Operation</th>
        </tr>
        <?php
        error_reporting(0);
        include("connection.php");
        $query = "select * from student";
        $data = mysqli_query($conn, $query);
        // returns number of rows.
        $total = mysqli_num_rows($data);

        // echo "$total";
        if ($total != 0) {
            // returns row as an associative array. Each key of the array represents the column name of the table. It return NULL if there are no more rows.
            while ($result = mysqli_fetch_assoc($data)) {
                echo "
        <tr>
        <td>".$result['rollnumber']."</td>
        <td>".$result['firstname']."</td>
        <td>".$result['lastname']."</td>
        <td>". $result['email']."</td>
        <td>" . $result['password'] . "</td>

        <td><a href = 'updateform.php?rn=$result[rollnumber]&fn=$result[firstname]&ln=$result[lastname]&em=$result[email]'><input type ='submit' value ='Edit/Update' id='editbtn'></td></a>

        <td><a href = 'delete.php?rn=$result[rollnumber]' onclick = 'return checkdelete()'><input type ='submit' value ='Delete' id='deletbtn'></td></a>
        </tr>
         
        ";
            }
        } else {
            echo "No records found";
        }
        ?>
    </table>
</body>

</html>

<script>
    function checkdelete() {
        return confirm("Are you sure you want to Delete this Record!");
    }
</script>