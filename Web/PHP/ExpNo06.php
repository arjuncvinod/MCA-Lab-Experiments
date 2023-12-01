<!DOCTYPE html>
<html>
<head>
    <title>Factorial Calculator</title>
</head>
<body>

<h2>Enter a Number</h2>

<form method="post" action="<?php echo $_SERVER['PHP_SELF']; ?>">
    Enter Number: <input type="text" name="number">
    <input type="submit" value="Calculate Factorial">
</form>

<?php
// Check if the form is submitted
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    // Retrieve the entered number
    $number = $_POST["number"];

    // Validate that the input is a non-negative integer
    if (!is_numeric($number) || $number < 0 || floor($number) != $number) {
        echo "Please enter a non-negative integer.";
    } else {
        // Calculate factorial using a for loop
        $factorial = 1;
        for ($i = 1; $i <= $number; $i++) {
            $factorial *= $i;
        }

        echo "Factorial of $number is: $factorial";
    }
}
?>

</body>
</html>
