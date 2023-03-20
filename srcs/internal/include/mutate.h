#ifndef __MUTATOR_H__
#define __MUTATOR_H__

// #include <queue>
#include "ast.h"
#include <map>
#include <set>

#define LUCKY_NUMBER 500

using std::map;
using std::set;

enum RELATIONTYPE {
  kRelationElement,
  kRelationSubtype,
  kRelationAlias,
};

class Mutator {

public:
  Mutator() { srand(time(nullptr)); }

  ~Mutator() {
#ifdef SYNTAX_ONLY
    for (auto &k : ir_library_) {
      for (auto ir : k.second) {
        deep_delete(ir);
      }
    }
#endif
  }

  IR *deep_copy_with_record(const IR *root, const IR *record);
  unsigned long hash(IR *);
  unsigned long hash(string &);

  IR *ir_random_generator(vector<IR *> v_ir_collector);

  vector<IR *> mutate_all(vector<IR *> &v_ir_collector); // done
  vector<IR *> mutate(IR *input);                        // done
  IR *strategy_delete(IR *cur);                          // Done
  IR *strategy_insert(IR *cur);                          // Done
  IR *strategy_replace(IR *cur);                         // done
  IR *strategy_replace_with_constraint(IR *cur);
  bool lucky_enough_to_be_mutated(unsigned int mutated_times); // done

  bool replace(IR *root, IR *old_ir, IR *new_ir); // done
  // IR * locate_parent(IR* root, IR * old_ir) ; //done

  // string validate(IR * root); // check the sql statement is valid

  void init(string f_testcase = "", string f_common_string = "",
            string file2d = "", string file1d = "",
            string f_gen_type = ""); // DONE

  void init_convertable_ir_type_map();
  void init_ir_library(string filename); // DONE
  void init_ir_library_from_a_file(string filename);
  void init_value_library();                     // DONE
  void init_common_string(string filename);      // DONE
  void init_data_library(string filename);       // DONE
  void init_data_library_2d(string filename);    // DONE
  void init_not_mutatable_type(string filename); // DONE
  void init_safe_generate_type(string filename);
  void add_ir_to_library(IR *);         // DONE
  void add_ir_to_library_limited(IR *); // DONE

  string get_a_string();           // DONE
  unsigned long get_a_val();       // DONE
  IR *get_ir_from_library(IRTYPE); // DONE
  IR *generate_ir_by_type(IRTYPE); // Done

  string get_data_by_type(DATATYPE);
  pair<string, string> get_data_2d_by_type(DATATYPE, DATATYPE); // DONE

  void reset_data_library(); // DONE

  // bool check_node_num(IR * root, unsigned int limit) const;
  // unsigned int calc_node(IR * root) const;

  string parse_data(string &); // DONE
  void extract_struct(IR *);   // Done

  // bool validate(IR * root); //done
  bool fix(IR *root); // done

  vector<IR *> split_to_stmt(IR *root, map<IR **, IR *> &m_save,
                             set<IRTYPE> &split_set); // done
  bool connect_back(map<IR **, IR *> &m_save);        // done

  bool fix_one(IR *stmt_root,
               map<int, map<DATATYPE, vector<IR *>>> &scope_library); // done

  void analyze_scope(
      IR *stmt_root); // done //reset define_library_ first, and fill it
  map<IR *, vector<IR *>>
  build_graph(IR *stmt_root,
              map<int, map<DATATYPE, vector<IR *>>>
                  &scope_library); // done //specify case handled here
  bool fill_stmt_graph(map<IR *, vector<IR *>> &graph);             // done
  void clear_scope_library(bool clear_define);                      // done
  IR *find_closest_node(IR *stmt_root, IR *node, DATATYPE type);    // done
  bool fill_one(IR *parent);                                        // done
  bool fill_one_pair(IR *parent, IR *child);                        // done
  bool fill_stmt_graph_one(map<IR *, vector<IR *>> &graph, IR *ir); // done
  bool validate(IR *&root);                                         // done
  bool is_ir_type_connvertable(IRTYPE a, IRTYPE b);

  bool replace_one_value_from_datalibray_2d(DATATYPE p_datatype,
                                            DATATYPE c_data_type, string &p_key,
                                            string &old_c_value,
                                            string &new_c_value);
  bool remove_one_pair_from_datalibrary_2d(DATATYPE p_datatype,
                                           DATATYPE c_data_type, string &p_key);
  bool replace_one_from_datalibrary(DATATYPE datatype, string &old_str,
                                    string &new_str);
  bool remove_one_from_datalibrary(DATATYPE datatype, string &key);
  //~Mutator();
  void debug(IR *root);

  bool can_be_mutated(IR *);

  // private:

  void add_ir_to_library_no_deepcopy(IR *); // DONE
  // IR* generate_ir_by_type(IRTYPE type);

#ifdef SYNTAX_ONLY
  static const unsigned max_ir_library_size_ = 0x200;
#else
  static const unsigned max_ir_library_size_ = 0x200;
#endif
  IR *record_ = NULL;
  IR *mutated_root_ = NULL;
  map<IRTYPE, vector<IR *>> ir_library_;
  map<IRTYPE, set<unsigned long>> ir_library_hash_;

  vector<string> string_library_;
  set<unsigned long> string_library_hash_;
  vector<unsigned long> value_library_;

  map<DATATYPE, map<DATATYPE, RELATIONTYPE>> relationmap_;

  vector<string> common_string_library_;
  set<IRTYPE> not_mutatable_types_;
  set<IRTYPE> string_types_;
  set<IRTYPE> int_types_;
  set<IRTYPE> float_types_;

  set<IRTYPE> safe_generate_type_;
  set<IRTYPE> split_stmt_types_;
  set<IRTYPE> split_substmt_types_;

  map<DATATYPE, vector<string>> data_library_;
  map<DATATYPE, map<string, map<DATATYPE, vector<string>>>> data_library_2d_;

  map<DATATYPE, vector<string>> g_data_library_;
  map<DATATYPE, set<unsigned long>> g_data_library_hash_;
  map<DATATYPE, map<string, map<DATATYPE, vector<string>>>> g_data_library_2d_;
  map<DATATYPE, map<string, map<DATATYPE, vector<string>>>>
      g_data_library_2d_hash_;

  map<int, map<DATATYPE, vector<IR *>>> scope_library_;

  set<unsigned long> global_hash_;

  map<IRTYPE, set<IRTYPE>> m_convertable_map_;

  // map<IRTYPE, map<IRTYPE, map<IR*, vector<IR*>>>> scope_libary_2D_;
  // map<IRTYPE, map<IRTYPE, map<IR*, vector<IR*>>>> g_libary_2D_;
};

unsigned int calc_node(IR *root);
bool contain_fixme(IR *);
void remove_definition(IR *&);
void extract_struct_after_mutation(IR *);
#endif
