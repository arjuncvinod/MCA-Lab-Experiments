<!DOCTYPE html>
<html lang="en">
<head>
    <title>Number Checker</title>
</head>
<body>
    <form method="get" action="">
        <label for="number">Enter a number:</label>
        <input type="text" name="number" required>
        <input type="submit" value="Check">
    </form>

    <?php
    if (isset($_GET["number"])) {
        $number = intval($_GET["number"]);

        if ($number == 0) {
            echo "<p>$number is zero.</p>";
        } elseif ($number % 2 == 0) {
            echo "<p>$number is an even number.</p>";
        } else {
            echo "<p>$number is an odd number.</p>";
        }
    }
    ?>
</body>
</html>
