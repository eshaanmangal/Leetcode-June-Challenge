
type Solution struct {
	weights   []int
	maxWeight int
}

func Constructor(w []int) Solution {
	weights := []int{}
	currentWeight := 0
	for _, v := range w {
		currentWeight += v
		weights = append(weights, currentWeight)
	}
    
	return Solution{
		weights:   weights,
		maxWeight: currentWeight,
	}
}

func (s *Solution) PickIndex() int {
	num := rand.Intn(s.maxWeight)
	return findGreater(s.weights, num)
}

func findGreater(weights []int, num int) int {
	l, r := 0, len(weights)-1
	for l <= r {
		m := (l+r)>> 1
		if weights[m] > num {
			r = m-1
		} else {
			l = m+1
		}
	}
	return l
}