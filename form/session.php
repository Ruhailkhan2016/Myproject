<?php
// PHP session is used to store and pass information from one page to another temporarily (until user close the website).
// PHP session technique is widely used in shopping websites where we need to store and pass cart information e.g. username,product code, product name, product price etc from one page to another.
// PHP session creates unique user id for each browser to recognize the user and avoid conflict between multiple browsers.

session_start();
$_SESSION["username"] = "Wallcomne to our page";
echo $_SESSION["username"];


session_unset();
echo $_SESSION["username"];
?>