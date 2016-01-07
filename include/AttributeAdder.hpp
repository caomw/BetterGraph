#ifndef BETTERGRAPH_ATTRIBUTE_ADDER
#define BETTERGRAPH_ATTRIBUTE_ADDER

#include <iostream>
#include <stdio.h>
#include <fstream>
#include <assert.h>
#include <stdexcept>
#include "boost/graph/adjacency_list.hpp"
#include "boost/graph/topological_sort.hpp"
#include <boost/graph/copy.hpp>
#include <math.h>
	
		
namespace betterGraph{
	
	
	template<typename GraphType>
	class AttributeAdder{
	protected : 
		
		typedef typename boost::graph_traits<GraphType>::vertex_iterator VertexIterator;
		typedef typename boost::graph_traits<GraphType>::vertex_descriptor Vertex;
		typedef typename boost::graph_traits<GraphType>::edge_descriptor Edge;
		typedef typename boost::graph_traits<GraphType>::out_edge_iterator EdgeIterator;
		
	public :
		AttributeAdder(){};
		
		virtual void add(GraphType *arg1, Vertex* vertex_out, void* nodeAttribute){};
		
	};
}