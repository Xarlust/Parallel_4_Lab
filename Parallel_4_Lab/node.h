#ifndef _NODE_H
#define _NODE_H

template <class NODETYPE> class TreeNode
{
    friend class Tree<NODETYPE>;
public:
    TreeNode(const NODETYPE&);
    NODETYPE get_data();
protected:
    TreeNode* left;           /* указатель на левого */
    TreeNode* right;          /* указатель на правого  */
    TreeNode* parent;         /* указатель на родителя */
    NODETYPE data;            /* ключ */
};

template<class NODETYPE>
TreeNode <NODETYPE>::TreeNode(const NODETYPE& a)
{
    data = a;
    left = right = 0;
}
template <class NODETYPE>
NODETYPE TreeNode <NODETYPE>::get_data()
{
    return data;
}
#endif