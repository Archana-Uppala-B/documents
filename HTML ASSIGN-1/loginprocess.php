<?php
include("db_connect.php");
echo "<br>";
if(isset($_POST['login']))
{
    $name=$_POST['username'];
    $password=$_POST['password'];
    $query="select * from login where username= '$name' and password='$password'";
    $result=mysqli_query($conn,$query);
    $row=mysqli_fetch_array($result);
}

if($row['username']==$name && $row['password']==$password)
{
    echo "Login successful";
    echo "<br>";
    echo "Welcome"." ".$name;
}
else{
    echo "provide correct details";
}

mysqli_close($conn);
?>