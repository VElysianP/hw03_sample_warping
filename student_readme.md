======================

**University of Pennsylvania, CIS 561: Advanced Computer Graphics, Homework 3**

* Yaoyi (Elyson) Bai
* byaoyi

### TODO: Your README
Include renders of the provided scene files, and list any extra credit you
implemented.

# **Implementation** #


**1. Square Sampling Functions**
In this function, the switch statement cases for generating grid-aligned samples and stratified samples are implemented. Each of the samples generated should fall within the range [0, 1) on the X and Y axes.

***There is some problem cause by the screen printing, and the grid in my project is of uniform width not as shown in the screenshots.*

- Random Sampling
![](http://i.imgur.com/kZ9ilFe.jpg)
![](http://i.imgur.com/YG6hTbR.jpg)
- Grid Sampling 
![](http://i.imgur.com/sYKMsJN.jpg)
![](http://i.imgur.com/LxsjaU5.jpg)
- Stratified Sampling
![](http://i.imgur.com/JKgp0rB.jpg)
![](http://i.imgur.com/DCPRhuD.jpg)

**2. Sample Warping Functions**

These functions includes:

- squareToDiskUniform
![](http://i.imgur.com/Qp5M0pO.jpg)
![](http://i.imgur.com/HqtaVGc.jpg)
- squareToDiskConcentric
![](http://i.imgur.com/UnkUCRa.jpg)
![](http://i.imgur.com/qL0OeDP.jpg)
- squareToSphereUniform
![](http://i.imgur.com/rYayLym.jpg)
![](http://i.imgur.com/ZSZxpkw.jpg)
- squareToSphereCapUniform
- squareToHemisphereUniform
![](http://i.imgur.com/llnboXf.jpg)
![](http://i.imgur.com/NGmfjxN.jpg)
- squareToHemisphereCosine
![](http://i.imgur.com/BTIeFho.jpg)
![](http://i.imgur.com/iQtHDkl.jpg)