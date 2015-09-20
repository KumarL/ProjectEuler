hasFalse :: [Bool] -> Bool
hasFalse []         = False
hasFalse (False:xs) = True
hasFalse (True:xs)  = hasFalse xs

isPrime :: [Integer] -> Integer -> Bool
isPrime primes num = not (hasFalse (map (/= 0) (map (num `mod`) primes)))

genPrimes :: [Integer] -> Integer -> Integer -> Integer
genPrimes primes 10001 num = last primes
genPrimes primes len num
    | isPrime primes num == True = genPrimes (primes ++ [num]) (len+1) (num+1)
    | otherwise = genPrimes primes len (num+1)

main = print (genPrimes [2] 1 3)
