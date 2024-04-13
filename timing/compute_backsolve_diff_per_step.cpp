#include <gtsam/linear/model.h>
#include <iostream>
#include <fstream>

#include <unistd.h>
#include <getopt.h>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]) {
    string infile = "";
    string outfile = "";

    // Get experiment setup
    static struct option long_options[] = {
        {"infile", required_argument, 0, 'f'},
        {"outfile", required_argument, 0, 'o'},
        {0, 0, 0, 0}
    };
    int opt, option_index;
    while((opt = getopt_long(argc, argv, "f:o:", long_options, &option_index)) != -1) {
        switch(opt) {
            case 'f':
                infile = string(optarg);
                break;
            case 'o':
                outfile = string(optarg);
                break;
            default:
                cerr << "Unrecognized option" << endl;
                exit(1);
        }
    }

    ifstream fin(infile);

    if(!fin.is_open()) {
        cout << "Error opening file: " << infile << endl;
        exit(1);
    }

    ofstream fout(outfile);

    if(!fout.is_open()) {
        cout << "Error opening file: " << outfile << endl;
        exit(1);
    }

    int backsolve_block_len = 4;
    int num_steps;
    fin >> num_steps;

    fout << num_steps << endl;

    for(int step = 0; step < num_steps; step++) {
        int num_nodes;
        fin >> num_nodes;

        uint64_t num_cycles = 0;

        for(int node = 0; node < num_nodes; node++) {
            int height, width;
            fin >> height >> width;
            num_cycles += predict_backsolve2(width, height, backsolve_block_len);
        }

        fout << num_cycles << endl;
        cout << num_cycles << endl;
    }
    
}
