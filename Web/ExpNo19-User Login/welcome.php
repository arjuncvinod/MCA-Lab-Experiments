<!DOCTYPE html>
<html lang="en">
<head>
    <title>Welcome</title>
</head>
<body>
    <h2>Welcome</h2>

    <?php
    $username = isset($_GET['username']) ? htmlspecialchars($_GET['username']) : '';

    // Display a welcome message
    echo "<p>Welcome, $username!</p>";
    ?>

    <p>This is the welcome page.</p>
</body>
</html>
