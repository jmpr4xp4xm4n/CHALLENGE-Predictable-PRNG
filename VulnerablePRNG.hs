import Data.Word
main = print . take 10 . iterate (\x -> 134775813*x + 1) $ (1 :: Word32)
