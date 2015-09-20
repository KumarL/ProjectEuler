squaredSum :: Int -> Int
squaredSum n = (n * (n+1) `div` 2) ^ 2

sumSquared :: Int -> Int
sumSquared n = (n * (n+1) * (2*n + 1) `div` 6)

solution :: Int -> Int
solution n = squaredSum n - sumSquared n

main = print (solution 100)
