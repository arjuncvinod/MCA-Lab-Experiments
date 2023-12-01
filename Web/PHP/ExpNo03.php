<!DOCTYPE html>
<html>
<head>
    <title>Student Grade Checker</title>
</head>
<body>

<h2>Enter Student Marks</h2>

<form method="post" action="<?php echo $_SERVER['PHP_SELF']; ?>">
    Enter Marks: <input type="text" name="marks">
    <input type="submit" value="Check Grade">
</form>

<?php
// Check if the form is submitted
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    // Retrieve the entered marks
    $marks = $_POST["marks"];

    // Check the grade based on the entered marks
    if ($marks >= 60) {
        echo "Grade: First Division";
    } elseif ($marks >= 45 && $marks <= 59) {
        echo "Grade: Second Division";
    } elseif ($marks >= 33 && $marks <= 44) {
        echo "Grade: Third Division";
    } else {
        echo "Grade: Fail";
    }
}
?>

</body>
</html>
