<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "books";

$conn = mysqli_connect($servername, $username, $password);

if (!$conn) {
    die("Connection failed: " . mysqli_connect_error());
}

$sql_create_db = "CREATE DATABASE IF NOT EXISTS $dbname";
if (mysqli_query($conn, $sql_create_db)) {
    echo "Database created successfully.<br>";
} else {
    echo "Error creating database: " . mysqli_error($conn) . "<br>";
}

mysqli_select_db($conn, $dbname);

$sql_create_table = "CREATE TABLE IF NOT EXISTS book_details (
    book_no INT PRIMARY KEY,
    title VARCHAR(255) NOT NULL,
    edition VARCHAR(50) NOT NULL,
    publisher VARCHAR(100) NOT NULL
)";
if (mysqli_query($conn, $sql_create_table)) {
    echo "Table created successfully.<br>";
} else {
    echo "Error creating table: " . mysqli_error($conn) . "<br>";
}

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $book_no = $_POST["book_no"];
    $title = $_POST["title"];
    $edition = $_POST["edition"];
    $publisher = $_POST["publisher"];

    $sql_insert = "INSERT INTO book_details (book_no, title, edition, publisher) VALUES ('$book_no', '$title', '$edition', '$publisher')";

    if (mysqli_query($conn, $sql_insert)) {
        echo "Book information added successfully.";
    } else {
        echo "Error: " . $sql_insert . "<br>" . mysqli_error($conn);
    }
}

$result = mysqli_query($conn, "SELECT * FROM book_details");

if (mysqli_num_rows($result) > 0) {
    echo "<h2>Book Details:</h2>";
    echo "<table border='1'>";
    echo "<tr><th>Book No</th><th>Title</th><th>Edition</th><th>Publisher</th></tr>";

    while ($row = mysqli_fetch_assoc($result)) {
        echo "<tr><td>{$row['book_no']}</td><td>{$row['title']}</td><td>{$row['edition']}</td><td>{$row['publisher']}</td></tr>";
    }

    echo "</table>";
} else {
    echo "No books found.";
}

mysqli_close($conn);
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Book Details</title>
</head>
<body>
    <form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">
        <label for="book_no">Book No:</label>
        <input type="text" name="book_no" required><br>

        <label for="title">Title:</label>
        <input type="text" name="title" required><br>

        <label for="edition">Edition:</label>
        <input type="text" name="edition" required><br>

        <label for="publisher">Publisher:</label>
        <input type="text" name="publisher" required><br>

        <input type="submit" value="Add Book">
    </form>
</body>
</html>