// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GLIBMM_NODETREE_H
#define _GLIBMM_NODETREE_H


/* Copyright (C) 2007 glibmm development team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */


#include <map>
#include <stack>
#include <deque>

#include <glibmm/refptr.h>
#include <glibmm/ustring.h>
#include <glibmm/error.h>
#include <glibmm/arrayhandle.h>
#include <glib.h>

namespace Glib
{

//Hand-written, instead of using _WRAP_ENUM, 
//because the C enum values don't have a prefix.

/** Specifies the type of traveral performed by methods such as NodeTree::_traverse() and NodeTree::find().
 * 
 * @ingroup glibmmEnums
 */
enum TraverseType
{
  TRAVERSE_IN_ORDER = G_IN_ORDER, /*!< Visits a node's left child first, then the node itself, then its right child. This is the one to use if you want the output sorted according to the compare function.  */
  TRAVERSE_PRE_ORDER = G_PRE_ORDER, /*!< Visits a node, then its children. */
  TRAVERSE_POST_ORDER = G_POST_ORDER, /*!< Visits the node's children, then the node itself. */
  TRAVERSE_LEVEL_ORDER = G_LEVEL_ORDER /*!< For NodeTree, it vists the root node first, then its children, then its grandchildren, and so on. Note that this is less efficient than the other orders. This is not implemented for Glib::Tree. */
};

/** N-ary Trees - trees of data with any number of branches
 * The NodeTree class and its associated functions provide an N-ary tree data structure, in which nodes in the tree can contain arbitrary data.
 * 
 * To insert a node into a tree use insert(), insert_before(), append() or prepend().
 * 
 * To create a new node and insert it into a tree use insert_data(), insert_data_before(), append_data() and prepend_data().
 * 
 * To reverse the children of a node use reverse_children().
 * 
 * To find a node use root(), find(), find_child(), index_of(), child_index(), first_child(), last_child(), nth_child(), first_sibling(), prev_sibling(), next_sibling() or last_sibling().
 * 
 * To get information about a node or tree use is_leaf(), is_root(), depth(), node_count(), child_count(), is_ancestor() or max_height().
 * 
 * To traverse a tree, calling a function for each node visited in the traversal, use traverse() or foreach().
 * 
 * To remove a node or subtree from a tree use unlink().
 *
 * @newin{2,18}
 */
template <typename T> 
class NodeTree
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef NodeTree CppObjectType;
  typedef GNode BaseObjectType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

private:

public:
  typedef sigc::slot<bool, NodeTree<T>&> TraverseFunc;
  typedef sigc::slot<void, NodeTree<T>&> ForeachFunc;

private:
  static NodeTree<T>* wrap(GNode* node)
  {
    if (!node)
      return 0;

    return reinterpret_cast<NodeTree<T>* >(node->data);
  }

public:
  NodeTree()
  {
    clone();
  }

  explicit NodeTree(const T& the_data) :
    data_(the_data)
  {
    clone();
  }
  

  NodeTree(const NodeTree<T>& node) :
    data_(node.data())
  {
    clone(&node);
  }

  /** Removes the instance and its children from the tree,
   * freeing any memory allocated.
   */
  ~NodeTree()
  {
    if(!is_root())
      unlink();

    clear();
  }
  

  NodeTree<T>& operator=(const NodeTree<T>& node)
  {
    clear();
    clone(&node);

    data_ = node.data();

    return *this;
  }

  /// Provides access to the underlying C GObject.
  inline GNode* gobj()
  {
    return gobject_;
  }

  /// Provides access to the underlying C GObject.
  inline const GNode* gobj() const
  {
    return gobject_;
  }

  /** Inserts a NodeTree beneath the parent at the given position.
   *
   * @param position the position to place node at, with respect to its siblings 
   * If position is -1, node is inserted as the last child of parent
   * @param node the NodeTree to insert
   * @return the inserted NodeTree
   */
  NodeTree<T>& insert(int position, NodeTree<T>& node)
  {
    g_node_insert(gobj(), position, node.gobj());
    return node;
  }
  

  /** Inserts a NodeTree beneath the parent before the given sibling.
   *
   * @param sibling the sibling NodeTree to place node before.
   * @param node the NodeTree to insert
   * @return the inserted NodeTree
   */
  NodeTree<T>& insert_before(NodeTree<T>& sibling, NodeTree<T>& node)
  {
    g_node_insert_before(gobj(), sibling.gobj(), node.gobj());
    return node;
  }
  

  /** Inserts a NodeTree beneath the parent after the given sibling.
   *
   * @param sibling the sibling NodeTree to place node after.
   * @param node the NodeTree to insert
   * @return the inserted NodeTree
   */
  NodeTree<T>& insert_after(NodeTree<T>& sibling, NodeTree<T>& node)
  {
    g_node_insert_after(gobj(), sibling.gobj(), node.gobj());
    return node;
  }
  

  /** Inserts a NodeTree as the last child.
   *
   * @param node the NodeTree to append
   * @return the new NodeTree
   */
  NodeTree<T>& append(NodeTree<T>& node)
  {
    g_node_append(gobj(), node.gobj());
    return node;
  }
  

  /** Inserts a NodeTree as the first child.
   *
   * @param data the data for the NodeTree
   * @return the NodeTree
   */
  NodeTree<T>& prepend(NodeTree<T>& node)
  {
    g_node_prepend(gobj(), node.gobj());
    return node;
  }
  

  /** Inserts a new NodeTree at the given position.
   *
   * @param position the position to place the new NodeTree at. 
   * If position is -1, the new NodeTree is inserted as the last child of parent
   * @param data the data for the new NodeTree
   * @return the new NodeTree
   */
  NodeTree<T>* insert_data(int position, const T& the_data)
  {
    NodeTree<T>* node = new NodeTree<T>(the_data);
    insert(position, *node);
    return node;
  }
  

  /** Inserts a new NodeTree before the given sibling.
   *
   * @param sibling the sibling NodeTree to place node before. 
   * @param data the data for the new NodeTree
   * @return the new NodeTree
   */
  NodeTree<T>* insert_data_before(NodeTree<T>& sibling, const T& the_data)
  {
    NodeTree<T>* node = new NodeTree<T>(the_data);
    insert_before(sibling, *node);
    return node;
  }
  

  /** Inserts a new NodeTree as the last child.
   *
   * @param data the data for the new NodeTree
   * @return the new NodeTree
   */
  NodeTree<T>* append_data(const T& the_data)
  {
    NodeTree<T>* node = new NodeTree<T>(the_data);
    append(*node);
    return node;
  }
  

  /** Inserts a new NodeTree as the first child.
   *
   * @param data the data for the new NodeTree
   * @return the new NodeTree
   */
  NodeTree<T>* prepend_data(const T& the_data)
  {
    NodeTree<T>* node = new NodeTree<T>(the_data);
    prepend(*node);
    return node;
  }
  

  /** Reverses the order of the children.
   */
  void reverse_children()
  {
    g_node_reverse_children(gobj());
  }
  

  /** Returns a pointer to the root of the tree.
   *
   * @return A pointer to the root of the tree.
   */
  NodeTree<T>* get_root()
  {
    return wrap(g_node_get_root(gobj()));
  }

  const NodeTree<T>* get_root() const
  {
    return wrap(g_node_get_root(gobj()));
  }
  

  /** Specifies which nodes are visited during several of the NodeTree methods,
   *  including traverse() and find().
   *
   * @ingroup glibmmEnums
   */
  enum TraverseFlags
  {
    TRAVERSE_LEAVES = G_TRAVERSE_LEAVES, /*!< Only leaf nodes should be visited. */
    TRAVERSE_NON_LEAVES = G_TRAVERSE_NON_LEAVES, /*!< Only non-leaf nodes should be visited. */
    TRAVERSE_ALL = G_TRAVERSE_ALL, /*!< All nodes should be visited. */
    TRAVERSE_MASK = G_TRAVERSE_MASK /*!< A mask of all traverse flags. */
  };

  /** Traverses a tree starting at the current node.
   * It calls the given function for each node visited. 
   * The traversal can be halted at any point by returning true from @a func.
   *
   * @param order The order in which nodes are visited.
   * @param flags Which types of children are to be visited.
   * @param max_depth The maximum depth of the traversal. 
   * Nodes below this depth will not be visited. 
   * If max_depth is -1 all nodes in the tree are visited.
   * If max_depth is 1, only the root is visited.
   * If max_depth is 2, the root and its children are visited. And so on.
   * @param func the slot to invoke for each visited child
   */
  void traverse(const TraverseFunc& func, TraverseType order = TRAVERSE_IN_ORDER, TraverseFlags flags = TRAVERSE_ALL, int max_depth = -1)
  {
    TraverseFunc func_copy = func;
    g_node_traverse(gobj(), (GTraverseType)order, (GTraverseFlags)flags, max_depth, c_callback_traverse, reinterpret_cast<gpointer>(&func_copy));
  }
  ;

  /** Calls a function for each of the children of a NodeTree.
   * Note that it doesn't descend beneath the child nodes.
   *
   * @param flags Wwhich types of children are to be visited.
   * @param func The slot to invoke for each visited node.
   */
  void foreach(const ForeachFunc& func, TraverseFlags flags = TRAVERSE_ALL)
  {
    ForeachFunc func_copy = func;
    g_node_children_foreach(gobj(), (GTraverseFlags)flags, c_callback_foreach, reinterpret_cast<gpointer>(&func_copy));
  }
  

  /** Finds the first child of a NodeTree with the given data.
   *
   * @param flags Which types of children are to be visited, one of TRAVERSE_ALL, TRAVERSE_LEAVES and TRAVERSE_NON_LEAVES.
   * @param data The data for which to search.
   * @return the found child, or 0 if the data is not found
   */
  NodeTree<T>* find_child(const T& the_data, TraverseFlags flags = TRAVERSE_ALL)
  {
    sigc::slot<void, GNode*, const T&, GNode**> real_slot = sigc::ptr_fun(on_compare_child);

    GNode* child = 0;
    typedef sigc::slot<void, GNode*> type_foreach_gnode_slot;
    type_foreach_gnode_slot bound_slot = sigc::bind(real_slot, the_data, &child);

    g_node_children_foreach(gobj(), (GTraverseFlags)flags, c_callback_foreach_compare_child, reinterpret_cast<gpointer>(&bound_slot));
    
    return wrap(child);
  }

  /** Finds the first child of a NodeTree with the given data.
   *
   * @param flags Which types of children are to be visited, one of TRAVERSE_ALL, TRAVERSE_LEAVES and TRAVERSE_NON_LEAVES.
   * @param data The data for which to search.
   * @return the found child, or 0 if the data is not found
   */
  const NodeTree<T>* find_child(const T& the_data, TraverseFlags flags = TRAVERSE_ALL) const
  {
    return const_cast<NodeTree<T>*>(this)->find_child(flags, the_data);
  }

  
  /** Finds a node in a tree.
   *
   * @param order The order in which nodes are visited: IN_ORDER, TRAVERSE_PRE_ORDER, TRAVERSE_POST_ORDER, or TRAVERSE_LEVEL_ORDER
   * @param flags Which types of children are to be visited: one of TRAVERSE_ALL, TRAVERSE_LEAVES and TRAVERSE_NON_LEAVES.
   * @param data The data for which to search.
   * @return The found node, or 0 if the data is not found.
   */
  NodeTree<T>* find(const T& the_data, TraverseType order = TRAVERSE_IN_ORDER, TraverseFlags flags = TRAVERSE_ALL)
  {
    //We use a sigc::slot for the C callback, so we can bind some extra data.
    sigc::slot<gboolean, GNode*, const T&, GNode**> real_slot = sigc::ptr_fun(on_compare_node);
    GNode* child = 0;

    typedef sigc::slot<gboolean, GNode*> type_traverse_gnode_slot;
    type_traverse_gnode_slot bound_slot = sigc::bind(real_slot, the_data, &child);

    g_node_traverse(const_cast<GNode*>(gobj()), (GTraverseType)order, (GTraverseFlags)flags, -1, c_callback_traverse_compare_node, reinterpret_cast<gpointer>(&bound_slot));

    return wrap(child);
  }

  /** Finds a node in a tree.
   *
   * @param order The order in which nodes are visited.
   * @param flags Which types of children are to be visited.
   * @param data The data for which to search.
   * @return The found node, or 0 if the data is not found.
   */
  const NodeTree<T>* find(const T& the_data, TraverseType order = TRAVERSE_IN_ORDER, TraverseFlags flags = TRAVERSE_ALL) const
  {
    return const_cast<NodeTree<T>*>(this)->find(order, flags, the_data);
  }
  

  /** Gets the position of the first child which contains the given data.
   *
   * @param data The data to find.
   * @return The index of the child which contains data, or -1 if the data is not found.
   */
  int child_index(const T& the_data) const
  {
    int n = 0;

    for(const NodeTree<T>* i = first_child();  i != 0; i = i->next_sibling())
    {
      if((i->data()) == the_data)
        return n;

      n++;
    }

    return -1;
  }
  

  /** Gets the position with respect to its siblings. 
   * child must be a child of node.
   * The first child is numbered 0, the second 1, and so on.
   *
   * @param child A child
   * @return The position of @a child with respect to its siblings.
   */
  int child_position(const NodeTree<T>& child) const
  {
    return g_node_child_position(const_cast<GNode*>(gobj()), const_cast<GNode*>(child.gobj()));
  }
  

  /** Gets the first child.
   *
   * @return The first child, or 0 if the node has no children. 
   */
  NodeTree<T>* first_child()
  {
    return wrap(g_node_first_child(gobj()));
  }

  /** Gets the first child.
   *
   * @return The first child, or 0 if the node has no children. 
   */
  const NodeTree<T>* first_child() const
  {
    return const_cast<NodeTree<T>*>(this)->first_child();
  }
  

  /** Gets the last child.
   *
   * @return The last child, or 0 if the node has no children.
   */
  NodeTree<T>* last_child()
  {
    return wrap(g_node_last_child(gobj()));
  }

  /** Gets the last child.
   *
   * @return The last child, or 0 if the node has no children.
   */
  const NodeTree<T>* last_child() const
  {
    return const_cast<NodeTree<T>*>(this)->last_child();
  }
  

  /** Gets the nth child.
   *
   * @return The nth child, or 0 if n is too large.
   */
  NodeTree<T>* nth_child(int n) 
  {
    return wrap(g_node_nth_child(gobj(), n));
  }

  /** Gets the nth child.
   *
   * @return The nth child, or 0 if n is too large.
   */
  const NodeTree<T>* nth_child(int n) const
  {
    return const_cast<NodeTree<T>*>(this)->nth_child(n);
  }
  
  
  /** Gets the first sibling
   * @return The first sibling, or 0 if the node has no siblings.
   */
  NodeTree<T>* first_sibling()
  {
    return wrap(g_node_first_sibling(gobj()));
  }

  /** Gets the first sibling
   * @return The first sibling, or 0 if the node has no siblings.
   */
  const NodeTree<T>* first_sibling() const
  {
    return const_cast<NodeTree<T>*>(this)->first_sibling();
  }
  

  /** Gets the previous sibling.
   *
   * @return The previous sibling, or 0 if the node has no siblings.
   */
  NodeTree<T>* prev_sibling()
  {
    return wrap(g_node_prev_sibling(gobj()));
  }

  /** Gets the previous sibling.
   *
   * @return The previous sibling, or 0 if the node has no siblings.
   */
  const NodeTree<T>* prev_sibling() const
  {
    return const_cast<NodeTree<T>*>(this)->prev_sibling();
  }
  

  /** Gets the next sibling
   *
   * @return The next sibling, or 0 if the node has no siblings.
   */
  NodeTree<T>* next_sibling()
  {
    return wrap(g_node_next_sibling(gobj()));
  }

  /** Gets the next sibling
   *
   * @return The next sibling, or 0 if the node has no siblings.
   */
  const NodeTree<T>* next_sibling() const
  {
    return const_cast<NodeTree<T>*>(this)->next_sibling();
  }
  

  /** Gets the last sibling.
   *
   * @return The last sibling, or 0 if the node has no siblings.
   */
  NodeTree<T>* last_sibling()
  {
    return wrap(g_node_last_sibling(gobj()));
  }

  /** Gets the last sibling.
   *
   * @return The last sibling, or 0 if the node has no siblings.
   */
  const NodeTree<T>* last_sibling() const
  {
    return const_cast<NodeTree<T>*>(this)->last_sibling();
  }
  

  /** Returns true if this is a leaf node.
   *
   * @return true if this is a leaf node.
   */
  bool is_leaf() const
  {
    return G_NODE_IS_LEAF(const_cast<GNode*>(gobj()));
  }

  /** Returns true if this is the root node.
   *
   * @return true if this is the root node.
   */
  bool is_root() const
  {
    return G_NODE_IS_ROOT(const_cast<GNode*>(gobj()));
  }

  /** Gets the depth of this node.
   * The root node has a depth of 1.
   * For the children of the root node the depth is 2. And so on.
   *
   * @return the depth of this node
   */
  guint depth() const
  {
    return g_node_depth(const_cast<GNode*>(gobj()));
  }
  

  /** Gets the number of nodes in a tree.
   *
   * @param flags Which types of children are to be counted: one of TRAVERSE_ALL, TRAVERSE_LEAVES and TRAVERSE_NON_LEAVES
   * @return The number of nodes in the tree.
   */
  guint node_count(TraverseFlags flags = TRAVERSE_ALL) const
  {
    return g_node_n_nodes(const_cast<GNode*>(gobj()), (GTraverseFlags)flags);
  }
  

  /** Gets the number children.
   *
   * @return The number of children.
   */
  guint child_count() const
  {
    return g_node_n_children(const_cast<GNode*>(gobj()));
  }
  

  /** Returns true if this is an ancestor of @a descendant.
   * This is true if this is the parent of @a descendant,
   * or if this is the grandparent of @a descendant etc.
   *
   * @param descendant A node.
   * @return true if this is an ancestor of descendant.
   */
  bool is_ancestor(const NodeTree<T>& descendant) const
  {
    return g_node_is_ancestor(const_cast<GNode*>(gobj()), const_cast<GNode*>(descendant.gobj()));
  }
  

  /** Gets the maximum height of all branches beneath this node.
   * This is the maximum distance from the node to all leaf nodes.
   * If root has no children, 1 is returned. If root has children, 2 is returned. And so on.
   *
   * @return The maximum height of all branches.
   */
  guint get_max_height() const
  {
    return g_node_max_height(const_cast<GNode*>(gobj()));
  }
  

  /** Unlinks a node from a tree, resulting in two separate trees.
   */
  void unlink()
  {
    g_node_unlink(gobj());
  }
  

#if 0 //Commented-out because people can just use the copy constructor.
  /** Recursively copies a node and it's data.
   *
   * Returns: a new node containing the copies of the data.
   */
  NodeTree<T>* copy_deep() const
  {
    //Use copy constructor instead of g_node_copy_deep to create C++ wrappers also not only the wrapped C objects.
    return new NodeTree<T>(*this);
  }
#endif
  

  /// Accessor for this node's data
  T& data()
  {
    return data_;
  }

  /// Accessor for this node's data
  const T& data() const
  {
    return data_;
  }

  /** Accessor for this node's parent.
   *
   * @return The node's parent.
   */
  const NodeTree<T>* parent() const
  {
    return wrap(gobj()->parent);
  }

  // Do not wrap this shallow copy function, because it is not useful:
  

private:

  void clear()
  {
    //Free the children (not just with g_node_destroy(), to avoid the leaking of C++ wrapper objects):
    while(NodeTree<T>* i = first_child())
      delete i;

    //Free the wrapped object (g_node_free not available)
    g_slice_free(GNode, gobject_);
    gobject_ = 0;
  }

  ///Create a new GNode, taking the contents of an existing node if one is specified.
  void clone(const NodeTree<T>* node = 0)
  {
    //Store the this pointer in the GNode so we can discover this wrapper later:
    gobject_ = g_node_new(reinterpret_cast<gpointer>(this));

    if(node)
    {
      //Prepend the copied children of @node to the constructing node.
      for(const NodeTree<T>* i = node->last_child();  i != 0; i = i->prev_sibling())
        prepend(*(new NodeTree<T>(*i)));
    }
  }

  /// Wrapper for invoking a TraverseFunc.
  static gboolean c_callback_traverse(GNode* node, gpointer slot)
  {
    const TraverseFunc* tf = reinterpret_cast<const TraverseFunc*>(slot);
    return (*tf)(*wrap(node));
  }

  /// Wrapper for invoking a ForeachFunc.
  static void c_callback_foreach(GNode* node, gpointer slot)
  {
    const ForeachFunc* ff = reinterpret_cast<const ForeachFunc*>(slot);
    (*ff)(*wrap(node));
  }

  /// Method for comparing a single child (Internal use).
  static void on_compare_child(GNode* node, const T& needle, GNode** result)
  {
    if((0 != result) && (wrap(node)->data() == needle))
    {
      *result = node;
    }
  }

  /// Wrapper for invoking a sigc::slot<void,GNode*> (Internal use).
  static void c_callback_foreach_compare_child(GNode* node, gpointer data)
  {
    const ForeachFunc* slot = reinterpret_cast<const ForeachFunc*>(data);
    (*slot)(*wrap(node));
  }

  /// Method for comparing a single node (Internal use).
  static gboolean on_compare_node(GNode* node, const T& needle, GNode** result)
  {
    if(wrap(node)->data() == needle)
    {
      *result = node;
      return TRUE;
    }
    return FALSE;
  }

  /// Wrapper for invoking a sigc::slot<gboolean,GNode*> (Internal use).
  static gboolean c_callback_traverse_compare_node(GNode* node, gpointer data)
  {
    const TraverseFunc* slot = reinterpret_cast<const TraverseFunc*>(data);
    return (*slot)(*wrap(node));
  }


  GNode* gobject_;
  T data_;


};

} // namespace Glib


#endif /* _GLIBMM_NODETREE_H */

