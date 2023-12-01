<!DOCTYPE html>
<html>
<head>
    <title>Rectangle Area Calculator</title>
</head>
<body>

<h2>Enter Rectangle Dimensions</h2>

<form method="post" action="<?php echo $_SERVER['PHP_SELF']; ?>">
    Enter Length: <input type="text" name="length"><br>
    Enter Width: <input type="text" name="width"><br>
    <input type="submit" value="Calculate Area">
</form>

<?php
// Check if the form is submitted
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    // Retrieve the entered dimensions
    $length = $_POST["length"];
    $width = $_POST["width"];

    // Validate that the inputs are numeric
    if (!is_numeric($length) || !is_numeric($width)) {
        echo "Please enter valid numeric values for length and width.";
    } else {
        // Calculate the area of the rectangle
        $area = $length * $width;

        echo "Area of the rectangle with length $length and width $width is: $area square units";
    }
}
?>

</body>
</html>
