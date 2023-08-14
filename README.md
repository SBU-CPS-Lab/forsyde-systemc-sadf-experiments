# ForSyDe-SystemC-SADF-Experiments
The experiments on the scenario-aware dataflow model of computation of ForSyDe-SystemC.

## How to run the experiments

### Prerequisites

* [ForSyDe-SystemC](https://github.com/forsyde/ForSyDe-SystemC) (tested with commit 616bcfe)
* [Python](https://www.python.org/) (tested with version 3)
* [SDF3](https://www.es.ele.tue.nl/sdf3/) (tested with version 24 July 2014)

### Running the experiments

1. Clone the repository
2. Run the script `forsyde-systemc-sadf-experiments.py` with the following arguments:
    * `-c <conf_file>` or `--config <conf_file>`: the path to the configuration file
    * `-p <param_file>` or `--params <param_file>`: the path to the parameters file
    * `-o <out_dir>` or `--output <out_dir>`: the path to the output directory

The script will generate the following files in the output directory:
* `results.csv`: the aggregated results of the experiments
* A folder for each conducted experiment containing:
    * `sdf3_graph.xml`: the generated SDF3 graph
    * `sdf3_graph_repeatitions.txt`: the repeatition vectors of the SDF3 graph for each scenario
    * `forsyde_graph.xml`: the converted graph to ForSyDe-XML format
    * `forsyde_graph.cpp`: the generated ForSyDe-SystemC code
    * `forsyde_graph`: the executable simulation of the generated code