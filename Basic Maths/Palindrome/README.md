# Palindrome Number Problem

## Problem Description

Given an integer `x`, determine whether it is a palindrome. An integer is a palindrome when it reads the same backward as forward.

For example:
- `121` is a palindrome.
- `-121` is **not** a palindrome because reversing it gives `121-`.
- `10` is **not** a palindrome because reversing it gives `01`, which is different from `10`.

<!DOCTYPE html>
<html lang="en">
<head>
   
</head>
<body>
    <h1>Palindrome Number Problem</h1>
    <p>To determine whether an integer <code>x</code> is a palindrome, we can reverse the digits of <code>x</code> and compare the reversed number with the original number. If both are equal, then <code>x</code> is a palindrome.</p>

<h2>Steps to Solve</h2>
    <ol>
        <li>First, check if <code>x</code> is negative. If <code>x</code> is negative, it is not a palindrome, so return <code>false</code>.</li>
        <li>If <code>x</code> is non-negative, create a copy of <code>x</code> called <code>xcopy</code> and initialize a variable <code>reverse</code> to store the reversed digits of <code>x</code>.</li>
        <li>Using a <code>while</code> loop, reverse the digits of <code>x</code>:
            <ul>
                <li>Take the last digit of <code>x</code> using the modulo operation <code>x % 10</code>.</li>
                <li>Append the digit to <code>reverse</code> and divide <code>x</code> by 10 to remove the last digit.</li>
            </ul>
        </li>
        <li>After the loop completes, compare <code>reverse</code> with <code>xcopy</code>. If they are equal, return <code>true</code>. Otherwise, return <code>false</code>.</li>
    </ol>

   <h2>Code Implementation</h2>
    <pre>
<code>
class Solution {
public:
    bool isPalindrome(int x) {
        if (x &lt; 0) {
            return false; }
   long reverse = 0;
   int xcopy = x;

 while (x > 0) {
            reverse = (reverse * 10) + (x % 10);
            x /= 10;}

   return reverse == xcopy;
   }
};
</code>

</body>
</html>

