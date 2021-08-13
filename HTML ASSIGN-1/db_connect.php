<?php
$server="localhost";
$username="root";
$password="";
$db="student";
$conn=mysqli_connect($server,$username,$password,$db);
if (!$conn)
{
    echo"Unsuccessful connection";
}
else{
    echo"Connected Successfully";
}
?>