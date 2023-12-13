<!DOCTYPE html>
<html>

<head>
    <title>Form Data</title>
    <link rel="stylesheet" href="style.css">
</head>

<body>
    <h2>Form Data</h2>
    <?php
    // Check if form data has been submitted
    if ($_SERVER["REQUEST_METHOD"] === "POST") {
        // Get the form data
        $first_name = $_POST["first_name"];
        $last_name = $_POST["last_name"];
        $username = $_POST["username"];
        $password = $_POST["password"];
        $gender = $_POST["gender"];
        $academic_year = $_POST["academic_year"];
        $email = $_POST["email"];
        $phone = $_POST["phone"];

        // Display the form data
        echo "<p><strong>First Name:</strong> " . $first_name . "</p>";
        echo "<p><strong>Last Name:</strong> " . $last_name . "</p>";
        echo "<p><strong>Username:</strong> " . $username . "</p>";
        echo "<p><strong>Password:</strong> " . $password . "</p>";
        echo "<p><strong>Gender:</strong> " . $gender . "</p>";
        echo "<p><strong>Academic Year:</strong> " . $academic_year . "</p>";
        echo "<p><strong>Email:</strong> " . $email . "</p>";
        echo "<p><strong>Phone Number:</strong> " . $phone . "</p>";
    }
    ?>
</body>

</html>
