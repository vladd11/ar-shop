//
// Created by vladislav on 8/23/22.
//

#ifndef AR_SHOP_TRIANGLE_H
#define AR_SHOP_TRIANGLE_H

#include <GLES2/gl2.h>

namespace Triangle {
  const float kVertices[] = {
      0.0f, -0.04f, 0.0f,
      0.017013f, -0.034026f, 0.01236f,
      -0.006498f, -0.034026f, 0.02f,
      0.028944f, -0.017889f, 0.021029f,
      0.017013f, -0.034026f, 0.01236f,
      0.034026f, -0.021029f, 0.0f,
      0.0f, -0.04f, 0.0f,
      -0.006498f, -0.034026f, 0.02f,
      -0.021029f, -0.034026f, 0.0f,
      0.0f, -0.04f, 0.0f,
      -0.021029f, -0.034026f, 0.0f,
      -0.006498f, -0.034026f, -0.02f,
      0.0f, -0.04f, 0.0f,
      -0.006498f, -0.034026f, -0.02f,
      0.017013f, -0.034026f, -0.01236f,
      0.028944f, -0.017889f, 0.021029f,
      0.034026f, -0.021029f, 0.0f,
      0.038042f, 0.0f, 0.012361f,
      -0.011056f, -0.017889f, 0.034026f,
      0.010515f, -0.02103f, 0.03236f,
      0.0f, 0.0f, 0.04f,
      -0.035777f, -0.017889f, 0.0f,
      -0.027528f, -0.021029f, 0.02f,
      -0.038042f, 0.0f, 0.012361f,
      -0.011056f, -0.017889f, -0.034026f,
      -0.027528f, -0.021029f, -0.02f,
      -0.023511f, 0.0f, -0.032361f,
      0.028944f, -0.017889f, -0.021029f,
      0.010515f, -0.02103f, -0.03236f,
      0.023511f, 0.0f, -0.032361f,
      0.028944f, -0.017889f, 0.021029f,
      0.038042f, 0.0f, 0.012361f,
      0.023511f, 0.0f, 0.032361f,
      -0.011056f, -0.017889f, 0.034026f,
      0.0f, 0.0f, 0.04f,
      -0.023511f, 0.0f, 0.032361f,
      -0.035777f, -0.017889f, 0.0f,
      -0.038042f, 0.0f, 0.012361f,
      -0.038042f, 0.0f, -0.012361f,
      -0.011056f, -0.017889f, -0.034026f,
      -0.023511f, 0.0f, -0.032361f,
      0.0f, 0.0f, -0.04f,
      0.028944f, -0.017889f, -0.021029f,
      0.023511f, 0.0f, -0.032361f,
      0.038042f, 0.0f, -0.012361f,
      0.011056f, 0.017889f, 0.034026f,
      0.027528f, 0.021029f, 0.02f,
      0.006498f, 0.034026f, 0.02f,
      -0.028944f, 0.017889f, 0.021029f,
      -0.010515f, 0.02103f, 0.03236f,
      -0.017013f, 0.034026f, 0.01236f,
      -0.028944f, 0.017889f, -0.021029f,
      -0.034026f, 0.021029f, 0.0f,
      -0.017013f, 0.034026f, -0.01236f,
      0.011056f, 0.017889f, -0.034026f,
      -0.010515f, 0.02103f, -0.03236f,
      0.006498f, 0.034026f, -0.02f,
      0.035777f, 0.017889f, 0.0f,
      0.027528f, 0.021029f, -0.02f,
      0.021029f, 0.034026f, 0.0f,
      0.021029f, 0.034026f, 0.0f,
      0.006498f, 0.034026f, -0.02f,
      0.0f, 0.04f, 0.0f,
      0.021029f, 0.034026f, 0.0f,
      0.027528f, 0.021029f, -0.02f,
      0.006498f, 0.034026f, -0.02f,
      0.027528f, 0.021029f, -0.02f,
      0.011056f, 0.017889f, -0.034026f,
      0.006498f, 0.034026f, -0.02f,
      0.006498f, 0.034026f, -0.02f,
      -0.017013f, 0.034026f, -0.01236f,
      0.0f, 0.04f, 0.0f,
      0.006498f, 0.034026f, -0.02f,
      -0.010515f, 0.02103f, -0.03236f,
      -0.017013f, 0.034026f, -0.01236f,
      -0.010515f, 0.02103f, -0.03236f,
      -0.028944f, 0.017889f, -0.021029f,
      -0.017013f, 0.034026f, -0.01236f,
      -0.017013f, 0.034026f, -0.01236f,
      -0.017013f, 0.034026f, 0.01236f,
      0.0f, 0.04f, 0.0f,
      -0.017013f, 0.034026f, -0.01236f,
      -0.034026f, 0.021029f, 0.0f,
      -0.017013f, 0.034026f, 0.01236f,
      -0.034026f, 0.021029f, 0.0f,
      -0.028944f, 0.017889f, 0.021029f,
      -0.017013f, 0.034026f, 0.01236f,
      -0.017013f, 0.034026f, 0.01236f,
      0.006498f, 0.034026f, 0.02f,
      0.0f, 0.04f, 0.0f,
      -0.017013f, 0.034026f, 0.01236f,
      -0.010515f, 0.02103f, 0.03236f,
      0.006498f, 0.034026f, 0.02f,
      -0.010515f, 0.02103f, 0.03236f,
      0.011056f, 0.017889f, 0.034026f,
      0.006498f, 0.034026f, 0.02f,
      0.006498f, 0.034026f, 0.02f,
      0.021029f, 0.034026f, 0.0f,
      0.0f, 0.04f, 0.0f,
      0.006498f, 0.034026f, 0.02f,
      0.027528f, 0.021029f, 0.02f,
      0.021029f, 0.034026f, 0.0f,
      0.027528f, 0.021029f, 0.02f,
      0.035777f, 0.017889f, 0.0f,
      0.021029f, 0.034026f, 0.0f,
      0.038042f, 0.0f, -0.012361f,
      0.027528f, 0.021029f, -0.02f,
      0.035777f, 0.017889f, 0.0f,
      0.038042f, 0.0f, -0.012361f,
      0.023511f, 0.0f, -0.032361f,
      0.027528f, 0.021029f, -0.02f,
      0.023511f, 0.0f, -0.032361f,
      0.011056f, 0.017889f, -0.034026f,
      0.027528f, 0.021029f, -0.02f,
      0.0f, 0.0f, -0.04f,
      -0.010515f, 0.02103f, -0.03236f,
      0.011056f, 0.017889f, -0.034026f,
      0.0f, 0.0f, -0.04f,
      -0.023511f, 0.0f, -0.032361f,
      -0.010515f, 0.02103f, -0.03236f,
      -0.023511f, 0.0f, -0.032361f,
      -0.028944f, 0.017889f, -0.021029f,
      -0.010515f, 0.02103f, -0.03236f,
      -0.038042f, 0.0f, -0.012361f,
      -0.034026f, 0.021029f, 0.0f,
      -0.028944f, 0.017889f, -0.021029f,
      -0.038042f, 0.0f, -0.012361f,
      -0.038042f, 0.0f, 0.012361f,
      -0.034026f, 0.021029f, 0.0f,
      -0.038042f, 0.0f, 0.012361f,
      -0.028944f, 0.017889f, 0.021029f,
      -0.034026f, 0.021029f, 0.0f,
      -0.023511f, 0.0f, 0.032361f,
      -0.010515f, 0.02103f, 0.03236f,
      -0.028944f, 0.017889f, 0.021029f,
      -0.023511f, 0.0f, 0.032361f,
      0.0f, 0.0f, 0.04f,
      -0.010515f, 0.02103f, 0.03236f,
      0.0f, 0.0f, 0.04f,
      0.011056f, 0.017889f, 0.034026f,
      -0.010515f, 0.02103f, 0.03236f,
      0.023511f, 0.0f, 0.032361f,
      0.027528f, 0.021029f, 0.02f,
      0.011056f, 0.017889f, 0.034026f,
      0.023511f, 0.0f, 0.032361f,
      0.038042f, 0.0f, 0.012361f,
      0.027528f, 0.021029f, 0.02f,
      0.038042f, 0.0f, 0.012361f,
      0.035777f, 0.017889f, 0.0f,
      0.027528f, 0.021029f, 0.02f,
      0.023511f, 0.0f, -0.032361f,
      0.0f, 0.0f, -0.04f,
      0.011056f, 0.017889f, -0.034026f,
      0.023511f, 0.0f, -0.032361f,
      0.010515f, -0.02103f, -0.03236f,
      0.0f, 0.0f, -0.04f,
      0.010515f, -0.02103f, -0.03236f,
      -0.011056f, -0.017889f, -0.034026f,
      0.0f, 0.0f, -0.04f,
      -0.023511f, 0.0f, -0.032361f,
      -0.038042f, 0.0f, -0.012361f,
      -0.028944f, 0.017889f, -0.021029f,
      -0.023511f, 0.0f, -0.032361f,
      -0.027528f, -0.021029f, -0.02f,
      -0.038042f, 0.0f, -0.012361f,
      -0.027528f, -0.021029f, -0.02f,
      -0.035777f, -0.017889f, 0.0f,
      -0.038042f, 0.0f, -0.012361f,
      -0.038042f, 0.0f, 0.012361f,
      -0.023511f, 0.0f, 0.032361f,
      -0.028944f, 0.017889f, 0.021029f,
      -0.038042f, 0.0f, 0.012361f,
      -0.027528f, -0.021029f, 0.02f,
      -0.023511f, 0.0f, 0.032361f,
      -0.027528f, -0.021029f, 0.02f,
      -0.011056f, -0.017889f, 0.034026f,
      -0.023511f, 0.0f, 0.032361f,
      0.0f, 0.0f, 0.04f,
      0.023511f, 0.0f, 0.032361f,
      0.011056f, 0.017889f, 0.034026f,
      0.0f, 0.0f, 0.04f,
      0.010515f, -0.02103f, 0.03236f,
      0.023511f, 0.0f, 0.032361f,
      0.010515f, -0.02103f, 0.03236f,
      0.028944f, -0.017889f, 0.021029f,
      0.023511f, 0.0f, 0.032361f,
      0.038042f, 0.0f, 0.012361f,
      0.038042f, 0.0f, -0.012361f,
      0.035777f, 0.017889f, 0.0f,
      0.038042f, 0.0f, 0.012361f,
      0.034026f, -0.021029f, 0.0f,
      0.038042f, 0.0f, -0.012361f,
      0.034026f, -0.021029f, 0.0f,
      0.028944f, -0.017889f, -0.021029f,
      0.038042f, 0.0f, -0.012361f,
      0.017013f, -0.034026f, -0.01236f,
      0.010515f, -0.02103f, -0.03236f,
      0.028944f, -0.017889f, -0.021029f,
      0.017013f, -0.034026f, -0.01236f,
      -0.006498f, -0.034026f, -0.02f,
      0.010515f, -0.02103f, -0.03236f,
      -0.006498f, -0.034026f, -0.02f,
      -0.011056f, -0.017889f, -0.034026f,
      0.010515f, -0.02103f, -0.03236f,
      -0.006498f, -0.034026f, -0.02f,
      -0.027528f, -0.021029f, -0.02f,
      -0.011056f, -0.017889f, -0.034026f,
      -0.006498f, -0.034026f, -0.02f,
      -0.021029f, -0.034026f, 0.0f,
      -0.027528f, -0.021029f, -0.02f,
      -0.021029f, -0.034026f, 0.0f,
      -0.035777f, -0.017889f, 0.0f,
      -0.027528f, -0.021029f, -0.02f,
      -0.021029f, -0.034026f, 0.0f,
      -0.027528f, -0.021029f, 0.02f,
      -0.035777f, -0.017889f, 0.0f,
      -0.021029f, -0.034026f, 0.0f,
      -0.006498f, -0.034026f, 0.02f,
      -0.027528f, -0.021029f, 0.02f,
      -0.006498f, -0.034026f, 0.02f,
      -0.011056f, -0.017889f, 0.034026f,
      -0.027528f, -0.021029f, 0.02f,
      0.034026f, -0.021029f, 0.0f,
      0.017013f, -0.034026f, -0.01236f,
      0.028944f, -0.017889f, -0.021029f,
      0.034026f, -0.021029f, 0.0f,
      0.017013f, -0.034026f, 0.01236f,
      0.017013f, -0.034026f, -0.01236f,
      0.017013f, -0.034026f, 0.01236f,
      0.0f, -0.04f, 0.0f,
      0.017013f, -0.034026f, -0.01236f,
      -0.006498f, -0.034026f, 0.02f,
      0.010515f, -0.02103f, 0.03236f,
      -0.011056f, -0.017889f, 0.034026f,
      -0.006498f, -0.034026f, 0.02f,
      0.017013f, -0.034026f, 0.01236f,
      0.010515f, -0.02103f, 0.03236f,
      0.017013f, -0.034026f, 0.01236f,
      0.028944f, -0.017889f, 0.021029f,
      0.010515f, -0.02103f, 0.03236f
  };
  const GLfloat kColors[] = {
      0.63671875f, 0.76953125f, 0.22265625f, 1.0f
  };
  const GLuint kNumVertices = 240;
}

#endif //AR_SHOP_TRIANGLE_H
