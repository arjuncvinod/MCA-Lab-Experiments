<html>
<head>
<title>Factorial</title>
</head>
<body>
<form method="POST" action="">
<label>Enter The Number</label>
 <input type="text" name="number">
 <input type="submit" name="sub" value="SUBMIT">
</form>
</body>
</html>


<?php
if(isset($_POST["sub"]))
{
 $num=$_POST["number"];
 $fact=1;
 for($i=1;$i<=$num;$i++)
 {
  $fact=$fact*$i;
 }
 echo "Factorial of"." ".$num." "."is"." ".$fact;
}
?>