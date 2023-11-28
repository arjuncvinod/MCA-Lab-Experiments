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
        // Calculate the electricity bill based on the specified conditions
        $billAmount = 0;

        if ($units <= 50) {
            $billAmount = $units * 3.50;
        } elseif ($units <= 150) {
            $billAmount = (50 * 3.50) + (($units - 50) * 4.00);
        } elseif ($units <= 250) {
            $billAmount = (50 * 3.50) + (100 * 4.00) + (($units - 150) * 5.20);
        } else {
            $billAmount = (50 * 3.50) + (100 * 4.00) + (100 * 5.20) + (($units - 250) * 6.50);
        }

        echo "Electricity Bill for $units units is: Rs. $billAmount";
    }
}
?>

</body>
</html>
