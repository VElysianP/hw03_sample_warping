#define _USE_MATH_DEFINES
#include "warpfunctions.h"
#include <math.h>
#include "utils.h"
#define PI 3.1415926

glm::vec3 WarpFunctions::squareToDiskUniform(const glm::vec2 &sample)
{
    //TODO
    float radius = std::sqrt(sample[0]);
    float theta = 2*PI*sample[1];

    return glm::vec3(radius*std::cos(theta),radius*std::sin(theta),0);
//    throw std::runtime_error("You haven't yet implemented uniform disk warping!");
}

glm::vec3 WarpFunctions::squareToDiskConcentric(const glm::vec2 &sample)
{
    //TODO
    float phi,r, u,v;
    float a = 2*sample[0]-1;
    float b = 2*sample[1]-1;

    if(a>-b)
    {
        if(a>b)
        {
            r=a;
            phi = (PI/4)*(b/a);
        }
        else
        {
            r = b;
            phi = (PI/4)*(2-(a/b));
        }
    }
    else
    {
        if(a<b)
        {
            r=-a;
            phi = (PI/4)*(4+(b/a));
        }
        else
        {
            r=-b;
            if(b!=0)
            {
                phi=(PI/4)*(6-(a/b));
            }
            else
            {
                phi=0;
            }
        }
    }

    u=r*cos(phi);
    v=r*sin(phi);
    return glm::vec3(u,v,0);
//    throw std::runtime_error("You haven't yet implemented concentric disk warping!");
}

float WarpFunctions::squareToDiskPDF(const glm::vec3 &sample)
{
    //TODO
//    return 0;
    throw std::runtime_error("You haven't yet implemented concentric disk warping!");
}

glm::vec3 WarpFunctions::squareToSphereUniform(const glm::vec2 &sample)
{
    //TODO
    glm::vec2 newCoordinate = glm::vec2(sample[0]-0.5,sample[1]-0.5);
    float z_coordinate = 2* newCoordinate[0];
    float x_coordinate = std::cos(2*PI*newCoordinate[1])*sqrt(1-z_coordinate*z_coordinate);
    float y_coordinate = std::sin(2*PI*newCoordinate[1])*sqrt(1-z_coordinate*z_coordinate);

    return glm::vec3(x_coordinate,y_coordinate,z_coordinate);
//    throw std::runtime_error("You haven't yet implemented uniform sphere warping!");
}

float WarpFunctions::squareToSphereUniformPDF(const glm::vec3 &sample)
{
    //TODO
//    return 0;
    throw std::runtime_error("You haven't yet implemented concentric disk warping!");
}

glm::vec3 WarpFunctions::squareToSphereCapUniform(const glm::vec2 &sample, float thetaMin)
{
    //TODO

    throw std::runtime_error("You haven't yet implemented sphere cap warping!");
}

float WarpFunctions::squareToSphereCapUniformPDF(const glm::vec3 &sample, float thetaMin)
{
    //TODO
//    return 0;
    throw std::runtime_error("You haven't yet implemented concentric disk warping!");
}

glm::vec3 WarpFunctions::squareToHemisphereUniform(const glm::vec2 &sample)
{
    //TODO
    float z_coordinate = sample[0];
    float x_coordinate = std::cos(2*PI*sample[1])*std::sqrt(1-z_coordinate*z_coordinate);
    float y_coordinate = std::sin(2*PI*sample[1])*std::sqrt(1-z_coordinate*z_coordinate);

    return glm::vec3(x_coordinate,y_coordinate,z_coordinate);
//    throw std::runtime_error("You haven't yet implemented uniform hemisphere warping!");
}

float WarpFunctions::squareToHemisphereUniformPDF(const glm::vec3 &sample)
{
    //TODO
//    return 0;
    throw std::runtime_error("You haven't yet implemented concentric disk warping!");
}

glm::vec3 WarpFunctions::squareToHemisphereCosine(const glm::vec2 &sample)
{
    //TODO
    float z_coordinate = std::sqrt(1-sample[0]*sample[0]-sample[1]*sample[1]);

    return glm::vec3(sample[0],sample[1],z_coordinate);
//    throw std::runtime_error("You haven't yet implemented cosine-weighted hemisphere warping!");
}

float WarpFunctions::squareToHemisphereCosinePDF(const glm::vec3 &sample)
{
    //TODO
//    return 0;
    throw std::runtime_error("You haven't yet implemented concentric disk warping!");
}
