
<body>

  <h2>Employee Table</h2>
  <table>
    <tr>
      <th>id</th>
      <th>salary</th>
    </tr>
    <tr>
      <td>1</td>
      <td>100</td>
    </tr>
    <tr>
      <td>2</td>
      <td>200</td>
    </tr>
    <tr>
      <td>3</td>
      <td>300</td>
    </tr>
  </table>

  <h2>Output</h2>
  <table>
    <tr>
      <th>SecondHighestSalary</th>
    </tr>
    <tr>
      <td>200</td>
    </tr>
  </table>

  <h3>SQL Solution</h3>
  <pre>
SELECT MAX(salary) AS SecondHighestSalary
FROM Employee
WHERE salary &lt; (
    SELECT MAX(salary)
    FROM Employee
);
  </pre>

</body>
</html>
