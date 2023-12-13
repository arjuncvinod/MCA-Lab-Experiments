<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>User Details</title>
    <link rel="stylesheet" href="css/display-styles.css">
</head>

<body>
    <div class="user-details">
        <h2>Student Details</h2>
        <?php
        if (isset($_COOKIE['user_email'])) {
            $email = $_COOKIE['user_email'];

            $host = "localhost";
            $username = "root";
            $password = "";
            $database = "studentlogin";

            $conn = mysqli_connect($host, $username, $password, $database);

            if (!$conn) {
                die("Connection failed: " . mysqli_connect_error());
            } else {
                $sql = "SELECT * FROM students WHERE mail = '$email'";
                $result = mysqli_query($conn, $sql);

                if ($result && mysqli_num_rows($result) > 0) {
                    $row = mysqli_fetch_assoc($result);
        ?>
                    <table border=1>
                        <tr>
                            <td><strong>First Name:</strong></td>
                            <td><?php echo $row['fname']; ?></td>
                        </tr>
                        <tr>
                            <td><strong>Last Name:</strong></td>
                            <td><?php echo $row['lname']; ?></td>
                        </tr>
                        <tr>
                            <td><strong>Date of Birth:</strong></td>
                            <td><?php echo $row['dob']; ?></td>
                        </tr>
                        <tr>
                            <td><strong>Email:</strong></td>
                            <td><?php echo $row['mail']; ?></td>
                        </tr>
                        <tr>
                            <td><strong>Mobile Number:</strong></td>
                            <td><?php echo $row['pno']; ?></td>
                        </tr>
                        <tr>
                            <td><strong>Gender:</strong></td>
                            <td><?php echo $row['gender']; ?></td>
                        </tr>
                    </table>
                    <a class="logout-btn" href="logout.php">Logout</a>
                <?php
                } else {
                    echo '<p class="error-message">User not found</p>';
                }
            }

            mysqli_close($conn);
        } else {
            echo '<p class="error-message">User email not set</p>';
        }
        ?>
    </div>
</body>

</html>
