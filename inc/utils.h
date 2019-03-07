#include "main.h"

class Node{
public:
  int x, y, id, pid;
  double cost, h_cost;
  Node(int x = 0, int y = 0, double cost = 0, double h_cost = 0, int id = 0, int pid = 0);
  void print_status();
  Node operator+(Node p);
  Node operator=(Node p);
  bool operator==(Node p);
  bool operator!=(Node p);
};

struct compare_cost{
  bool operator()(Node& p1, Node& p2);
};

struct compare_points{
  bool operator()(const Node p1, const Node p2);
};

struct compare_id{
  bool operator()(const Node p1, const Node p2);
};

std::vector<Node> get_motion(int n);
void make_grid(void *grid, int n);
void print_grid(void *grid, int n);
void print_path(std::vector<Node> path_vector, Node start, Node goal, void *grid, int n);