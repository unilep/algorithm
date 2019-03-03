// R: white rook
// B: white
// p: black

var dx = []int{ -1, 1, 0, 0 }
var dy = []int{ 0, 0, 1, -1 }

const (
    whiteRock = 'R'
    white = 'B'
    black = 'p'
    empty = '.'
)

func dfs(board [][]byte, x, y, c int) int {
    if x < 0 || y < 0 || x > 7 || y > 7 {
        return 0
    }
    if board[x][y] == black {
        return 1
    }
    if board[x][y] == white {
        return 0
    }
    return dfs(board, x + dx[c], y + dy[c], c)
}

func numRookCaptures(board [][]byte) int {
    // search whiteRock
    var x, y int
    for i, p := range board {
        for j, q := range p {
            if q == whiteRock {
                x, y = i, j
            }
        }
    }
    
    return dfs(board, x, y, 0) + dfs(board, x, y, 1) + dfs(board, x, y, 2) + dfs(board, x, y, 3)
}
