module Utilities where

isqrt :: Integer -> Integer
isqrt num = floor (sqrt (fromIntegral num))

isPrime :: Integer -> Bool
isPrime num
    | num < 2   = False
    | num == 2  = True
    | even num  = False
    | otherwise = and (map (\n -> (num `mod` n) /= 0) [3, 5 .. lim])
    where
        lim = isqrt num + 1

isModZero :: Integer -> Integer -> Integer
isModZero x y
    | y `mod` x == 0 = 0
    | otherwise = y

sieve :: Integer -> Integer -> [Integer] -> [Integer]
sieve iter max [] = []
sieve iter max (x:xs)
    | iter > max = filter (\n -> n /= 0) (x:xs)
    | x == 0 = sieve (iter + 1) max xs
    | otherwise = [x] ++ (sieve (iter+1) max (map (isModZero x) xs))

primesTo :: Integer -> [Integer]
primesTo bound
    | bound < 2 = []
    | otherwise = sieve 2 (isqrt bound) [2..bound]