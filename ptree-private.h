/*
*  File:        ptree-private.h
*  Description: Private functions for the PTree class
*  Date:        2022-03-06 03:30
*
*               DECLARE YOUR PTREE PRIVATE MEMBER FUNCTIONS HERE
*/

#ifndef _PTREE_PRIVATE_H_
#define _PTREE_PRIVATE_H_

/////////////////////////////////////////////////
// DEFINE YOUR PRIVATE MEMBER FUNCTIONS HERE
//
// Just write the function signatures.
//
// Example:
//
// Node* MyHelperFunction(int arg_a, bool arg_b);
//
/////////////////////////////////////////////////
bool Prunable(Node* node, double tolerance);

void PruneNodes(Node* node);

void PruneSubtree(Node* root, double tolerance);

void ColorImage(PNG& img, Node* root) const;

int CountNodes(Node* root) const;

int CountLeaves(Node* root) const;


#endif