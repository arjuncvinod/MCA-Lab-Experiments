<!DOCTYPE html>
<html>
<head>
    <title>Day of the Week</title>
</head>
<body>

<h2>Enter a Day Number</h2>

<form method="post" action="<?php echo $_SERVER['PHP_SELF']; ?>">
    Enter Day Number (1-7): <input type="text" name="dayNumber">
    <input type="submit" value="Show Day">
</form>

<?php
// Check if the form is submitted
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    // Retrieve the entered day number
    $dayNumber = $_POST["dayNumber"];

    // Use switch to determine the day of the week
    switch ($dayNumber) {
        case 1:
            echo "Day: Sunday";
            break;
        case 2:
            echo "Day: Monday";
            break;
        case 3:
            echo "Day: Tuesday";
            break;
        case 4:
            echo "Day: Wednesday";
            break;
        case 5:
            echo "Day: Thursday";
            break;
        case 6:
            echo "Day: Friday";
            break;
        case 7:
            echo "Day: Saturday";
            break;
        default:
            echo "Invalid day number. Please enter a number between 1 and 7.";
    }
}
?>

</body>
</html>
