/* ----------------------------------------------------------------
RESEARCH ONLY LICENSE
Copyright © 2015-2016 North Carolina State University.
All rights reserved.
Redistribution and use in source and binary forms, with or without 
modification, are permitted provided that the following conditions are met:

1. Redistributions and use are permitted for internal research purposes only, 
and commercial use is strictly prohibited under this license. Inquiries 
regarding commercial use should be directed to the Office of Technology 
Transfer at North Carolina State University, 919‐215‐7199, https://research.
ncsu.edu/ott/contact‐us/, techtransfer@ncsu.edu.

2. Commercial use means the sale, lease, export, transfer, conveyance or other 
distribution to a third party for financial gain, income generation or other 
commercial purposes of any kind, whether direct or indirect. Commercial use 
also means providing a service to a third party for financial gain, income 
generation or other commercial purposes of any kind, whether direct or 
indirect.

3. Redistributions of source code must retain the above copyright notice, this 
list of conditions and the following disclaimer.

4. Redistributions in binary form must reproduce the above copyright notice, 
this list of conditions and the following disclaimer in the documentation and/
or other materials provided with the distribution.

5. The names “North Carolina State University”, “NCSU” and any trade‐name,
personal name, trademark, trade device, service mark, symbol, image, icon, or 
any abbreviation, contraction or simulation thereof owned by North Carolina 
State University must not be used to endorse or promote products derived from 
this software without prior written permission. For written permission, please
contact trademarks@ncsu.edu.

Disclaimer: THIS SOFTWARE IS PROVIDED “AS IS” AND ANY EXPRESSED OR IMPLIED 
WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF 
MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO 
EVENT SHALL THE APACHE SOFTWARE FOUNDATION OR ITS CONTRIBUTORS BE LIABLE FOR 
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES 
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; 
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON 
ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (
INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS 
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
--------------------------------------------------------------------------------
Authors: Arash Dehghan Banadaki (adehgha@ncsu.edu)
         Srikanth Patala        (spatala@ncsu.edu)
--------------------------------------------------------------------------------
How to Cite:
Banadaki AD, Maldonis JJ, Voyles PM, Patala S. Point-Pattern Matching Technique
for Local Structural Analysis in Condensed Matter. arXiv preprint arXiv:1811.06098.
2018 Nov 14. https://arxiv.org/abs/1811.06098v2
--------------------------------------------------------------------------------
This package is inspired by McAuley and Caetano's work 
(http://cseweb.ucsd.edu/~jmcauley/pdfs/pr11.pdf) and has been 
extended and modified for 3D point matching.
<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/

#ifndef EXPERIMENT_HPP
#define EXPERIMENT_HPP

#include "common.hpp"

// Run a single experiment
int* runone(int choice, vector<Point>* p1, vector<Point>* p2, Scalar* setup, Scalar* prop, Scalar* total, Scalar* perf, int k, int loss, bool nchoosek_cost);
// Load a pointset
vector<Point>* loadone(char* name);
// Some utility functions
Scalar uniform(Scalar scale);
Point transform(Point p);
bool pointsort(Point p1, Point p2);
int* runFromFiles(vector<Point>* ps1, vector<Point>* ps2, vector<double>* weights, int k, bool nchoosek_cost);
#endif
