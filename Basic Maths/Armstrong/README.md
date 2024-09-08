<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <title>Armstrong Numbers</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            margin: 20px;
        }
        h1 {
            color: #2c3e50;
        }
        p {
            font-size: 18px;
            line-height: 1.6;
        }
        code {
            background-color: #f4f4f4;
            padding: 2px 4px;
            border-radius: 4px;
        }
        .example {
            background-color: #ecf0f1;
            padding: 10px;
            border-left: 4px solid #3498db;
        }
    </style>
</head>
<body>

    <h1>Armstrong Numbers</h1>

    <p>An <strong>Armstrong number</strong>, also known as a <strong>Narcissistic number</strong>, is a number that is equal to the sum of its own digits each raised to the power of the number of digits.</p>

    <h2>Example:</h2>

    <div class="example">
        <p>Consider the number <code>153</code>:</p>
        <ul>
            <li>Digits: 1, 5, 3</li>
            <li>Number of digits: 3</li>
            <li>Calculation:</li>
            <p><code>1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153</code></p>
        </ul>
        <p>Since the sum of the cubes of its digits equals the original number, <strong>153 is an Armstrong number</strong>.</p>
    </div>

    <h2>Other Examples of Armstrong Numbers:</h2>
    <ul>
        <li><code>370</code>: <code>3^3 + 7^3 + 0^3 = 27 + 343 + 0 = 370</code></li>
        <li><code>371</code>: <code>3^3 + 7^3 + 1^3 = 27 + 343 + 1 = 371</code></li>
        <li><code>407</code>: <code>4^3 + 0^3 + 7^3 = 64 + 0 + 343 = 407</code></li>
    </ul>

</body>
</html>

