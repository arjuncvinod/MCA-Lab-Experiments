<!DOCTYPE html>
<html>
<head>
    <title>Electricity Bill Calculator</title>
</head>
<body>

<h2>Enter Electricity Consumption</h2>

<form method="post" action="<?php echo $_SERVER['PHP_SELF']; ?>">
    Enter Units Consumed: <input type="text" name="units">
    <input type="submit" value="Calculate Bill">
</form>

<?php
// Check if the form is submitted
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    // Retrieve the entered units
    $units = $_POST["units"];

    // Validate that the input is numeric
    if (!is_numeric($units)) {
        echo "Please enter a valid numeric value for units.";
    } else {
        // Calculate the electricity bill
        $ratePerUnit = 10; // Change this to the applicable rate per unit
        $billAmount = $units * $ratePerUnit;

        echo "Electricity Bill for $units units is: $billAmount";
    }
}
?>

</body>
</html>
