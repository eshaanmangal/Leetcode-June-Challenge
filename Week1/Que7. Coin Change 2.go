func change(amount int, coins []int) int {
            
    if len(coins) == 0 {
        if amount == 0 {
            return 1
        }else{
            return 0
        }
    }

    countArr := make([]int,amount+1)
    countArr[0] = 1
    
    for _,values := range coins{
        for i:=1;i<=amount;i++{
            if i>=values{
                countArr[i] += countArr[i-values]
            }
        }
    }
    
    return countArr[amount]
    
}