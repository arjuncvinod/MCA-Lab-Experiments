<!DOCTYPE html>
<html lang="en">
<head>
    <title>Login Form</title>
</head>
<body>
    <h2>Login Form</h2>
    <form method="post" action="">
        <label for="username">Username:</label>
        <input type="text" name="username" required><br>

        <label for="password">Password:</label>
        <input type="password" name="password" required><br>

        <input type="submit" value="Login" name="sbtn">
    </form>

    <?php
    $servername = "localhost";
    $username = "root";
    $password = "";
    $db = "userlogin";

    $conn = mysqli_connect($servername, $username, $password, $db);

    if ($conn) {
        if (isset($_POST["sbtn"])) {
            $username = mysqli_real_escape_string($conn, $_POST["username"]);
            $password = mysqli_real_escape_string($conn, $_POST["password"]);

            $sql = "SELECT * FROM users_table WHERE username = '$username'";
            $result = mysqli_query($conn, $sql);

            if ($result) {
                $row = mysqli_fetch_assoc($result);
                if ($row && password_verify($password, $row['password'])) {
                    header("Location: welcome.php");
                    exit();
                } else {
                    echo "<script>alert('Incorrect Username or Password');</script>";
                }
            } else {
                echo "Error: " . mysqli_error($conn);
            }
        }

        mysqli_close($conn);
    }
    ?>
</body>
</html>