//
// Created by lin on 2021/12/26.
//

#ifndef MINI_MLCS_BASIC_MLCS_H
#define MINI_MLCS_BASIC_MLCS_H

#include "vector"
#include "string"
#include "cstring"
#include "queue"
#include "map"
#include "fstream"
#include <iostream>
#include <sys/time.h>
#include "algorithm"
#include "stack"
#include "numeric"
#include "set"
#include "unordered_set"
#include "unordered_map"
using namespace std;
void ReadSeq(char **seq1,uint32_t *seq_length,char* p_ref);
void gernerateData(char *ref_path,char *sav_path,uint32_t n, uint32_t data_len);
void readRef(vector<string> &T, char *ref_path);
void contructSuccessorTable(vector<string> T, vector<vector<vector<int>>> &ST, vector<char> sigma);
void contructDistanceTable(vector<string> T, vector<vector<vector<int>>> &DT, vector<char> sigma);
vector<vector<int>> computeMLCSByDp(string s1,string s2);
#endif //MINI_MLCS_BASIC_MLCS_H
