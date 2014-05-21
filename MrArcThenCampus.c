/*
 *  MrArcThenCampus.c
 *  AI that creates an arc, then a campus, if both are legal
 *  21-5-2014 Matthew Overington and Hector Morlet
 *
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
 
#include "Game.h"
#include "mechanicalTurk.h"

#define NUM_EDGES 72

action decideAction (Game g) {
   action nextAction;
   player self;
   
   self = g.players[g.whoseTurn - 1];
   edge currentEdge;
   int edgesDiscovered = 0;
   
   edge availableEdges[self.ARCs * 2];
   
   int i = 0;
   int j = 0;
   
   while (i < NUM_EDGES && edgesDiscovered <= self.ARCs) {
      currentEdge = g.edges[i];
      if (currentEdge.edgeContent == g.whoseTurn - 1) {
         edgesDiscovered ++;
         while (j < 4) {
            vertex v = currentEdge.adjacentVerticies[1];
            edge e = v.adjacentEdges[i];
            availableEdges[(i * 4) + j] = edge;
            j ++;
         }
      }
      i ++;
   }
   
   
   
   if (self.BPSs >= 1 && self.BQNs >= 1) {
      
   } else if (self.BPSs >= 1 && self.BQNs >= 1 && self.MJs >= 1 && self.MTVs >= 1) {
   
   } else {
      nextAction.actionCode = 0;
   }
  
   return nextAction;
}
