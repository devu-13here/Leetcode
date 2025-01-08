# Weather Table Query

## Table: Weather

| Column Name   | Type    |
|---------------|---------|
| id            | int     |
| recordDate    | date    |
| temperature   | int     |

- **id** is the column with unique values for this table.
- There are no different rows with the same **recordDate**.
- This table contains information about the temperature on a certain day.

## Problem Description

Write a solution to find all dates' `id` with higher temperatures compared to the previous day (yesterday).

## Expected Output

Return the result table with the `id` in any order.

### Example

Given the following `Weather` table:

| id  | recordDate | temperature |
|-----|------------|-------------|
| 1   | 2023-01-01 | 10          |
| 2   | 2023-01-02 | 5           |
| 3   | 2023-01-03 | 15          |
| 4   | 2023-01-04 | 8           |
| 5   | 2023-01-05 | 20          |

The result would be:

| id  |
|-----|
| 3   |
| 5   |


