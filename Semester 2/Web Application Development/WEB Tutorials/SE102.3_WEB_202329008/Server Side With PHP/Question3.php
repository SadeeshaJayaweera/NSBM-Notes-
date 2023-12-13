<!DOCTYPE html>
<html>

<head>
    <title>Electricity Bill Calculator</title>
</head>

<body>
    <?php
    // Sample units consumed, you can change this value
    $unitsConsumed = 120;

    // Initialize variables for rates and total bill
    $rate1 = 3.50;
    $rate2 = 4.00;
    $rate3 = 5.20;
    $rate4 = 6.50;
    $totalBill = 0;

    // Calculate the electricity bill based on the units consumed
    if ($unitsConsumed <= 50) {
        $totalBill = $unitsConsumed * $rate1;
    } elseif ($unitsConsumed <= 100) {
        $totalBill = 50 * $rate1 + ($unitsConsumed - 50) * $rate2;
    } elseif ($unitsConsumed <= 150) {
        $totalBill = 50 * $rate1 + 50 * $rate2 + ($unitsConsumed - 100) * $rate3;
    } else {
        $totalBill = 50 * $rate1 + 50 * $rate2 + 50 * $rate3 + ($unitsConsumed - 150) * $rate4;
    }

    // Display the result
    echo "Units Consumed: " . $unitsConsumed . "<br>";
    echo "Total Bill: Rs. " . number_format($totalBill, 2);
    ?>
</body>

</html>
