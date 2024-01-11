<!DOCTYPE html>
<html lang="en">
<body>

<?php
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $name = $_REQUEST["name"];
    $email = $_REQUEST["email"];
    $address = $_REQUEST["address"];
    $gender = $_REQUEST["gender"];
    $dob = $_REQUEST["dob"];

    echo "<h2>Student Details:</h2>";
    echo "<table border='1'>";
    echo "<tr><th>Name</th><td>$name</td></tr>";
    echo "<tr><th>Email</th><td>$email</td></tr>";
    echo "<tr><th>Address</th><td>$address</td></tr>";
    echo "<tr><th>Gender</th><td>$gender</td></tr>";
    echo "<tr><th>Date of Birth</th><td>$dob</td></tr>";
    echo "</table>";
} else {
?>
    <form method="post" action="">
        <label for="name">Name:</label>
        <input type="text" name="name" required><br>

        <label for="email">Email:</label>
        <input type="email" name="email" required><br>

        <label for="address">Address:</label>
        <textarea name="address" rows="3" required></textarea><br>

        <label for="gender">Gender:</label>
        <select name="gender" required>
            <option value="male">Male</option>
            <option value="female">Female</option>
            <option value="other">Other</option>
        </select><br>

        <label for="dob">Date of Birth:</label>
        <input type="date" name="dob" required><br>

        <input type="submit" value="Submit">
    </form>
<?php
}
?>

</body>
</html>