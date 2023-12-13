<!DOCTYPE html>
<html>

<head>
    <title>Day of the Week</title>
</head>

<body>
    <?php
    // Sample number for the day of the week, you can change this value
    $dayNumber = 3;

    // Determine the day of the week based on the number
    switch ($dayNumber) {
        case 1:
            $dayName = "Monday";
            break;
        case 2:
            $dayName = "Tuesday";
            break;
        case 3:
            $dayName = "Wednesday";
            break;
        case 4:
            $dayName = "Thursday";
            break;
        case 5:
            $dayName = "Friday";
            break;
        case 6:
            $dayName = "Saturday";
            break;
        case 7:
            $dayName = "Sunday";
            break;
        default:
            $dayName = "Invalid number";
            break;
    }

    // Display the result
    echo "Number: " . $dayNumber . "<br>";
    echo "Day of the Week: " . $dayName;
    ?>
</body>

</html>
