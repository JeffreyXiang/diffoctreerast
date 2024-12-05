#pragma once

// #define DEBUG
#define BLOCK_X 8
#define BLOCK_Y 8
#define CHANNELS 3
#define MEM_ALIGNMENT 256
#define MAX_TREE_DEPTH 10
#define PREFETCH_BUFFER_SIZE 8
#define SAMPLE_DIM 8

// Decoupoly Shape
#define DECOUPOLY_DEGREE 8
#define DECOUPOLY_RANK 16
#define DECOUPOLY_V_SIZE (DECOUPOLY_RANK * 3)
#define DECOUPOLY_G_SIZE (DECOUPOLY_RANK * DECOUPOLY_DEGREE)

// Optimizations
#define ASYNC_GLOBAL_TO_SHARED

// #define GRAD_GLOBAL
// #define GRAD_SHARED_TO_GLOBAL
#define GRAD_LOCAL_TO_GLOBAL
// #define GRAD_LOCAL_REDUCED_TO_GLOBAL
