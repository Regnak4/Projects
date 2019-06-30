void matrixRotate90(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    for (int row = 0, rot = size - 1; row < size; row++, rot-- ) {
        for ( int col = 0; col < size; col++ ) {
            target[row][col] = source[col][rot];
    }
}
