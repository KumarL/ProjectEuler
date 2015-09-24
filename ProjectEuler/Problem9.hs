check :: (Integer, Integer, Integer) -> Bool
check (a, b, c)
    | (a^2 + b^2 == c^2) && (a + b + c == 1000) = True
    | otherwise = False

prod :: (Integer, Integer, Integer) -> Integer
prod (x, y, z) = x * y * z

answer :: Integer
answer = prod (head (filter check [(i,j,k) | i <- [1 .. 1000], j <- [(i+1) .. 1000], k <- [(j+1) .. (1000 - i - j)]]))

main = print (answer)
