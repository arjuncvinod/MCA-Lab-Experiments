<!DOCTYPE html>
<html>
<head>
    <title>Sum Calculator</title>
</head>
<body>

<h2>Enter Two Numbers</h2>

<form method="post" action="<?php echo $_SERVER['PHP_SELF']; ?>">
    Enter First Number: <input type="text" name="num1"><br>
    Enter Second Number: <input type="text" name="num2"><br>
    <input type="submit" value="Add">
</form>

<?php
// Check if the form is submitted
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    // Retrieve the entered numbers
    $num1 = $_POST["num1"];
    $num2 = $_POST["num2"];

    // Validate that the inputs are numeric
    if (!is_numeric($num1) || !is_numeric($num2)) {
        echo "Please enter valid numeric values for both numbers.";
    } else {
        // Calculate the sum
        $sum = $num1 + $num2;

        echo "Sum of $num1 and $num2 is: $sum";
    }
}
?>

</body>
</html>
