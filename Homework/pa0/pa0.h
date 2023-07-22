void Homework01(){
    Eigen::Vector3f P(2.0f,1.0f,1.0f);

    float angle = 45.0/180.0*acos(-1);

    Eigen::Matrix3f r,t;

    r<< cos(angle), -sin(angle),0,
        sin(angle),cos(angle),0.0,
        0.0,       0.0,       1.0;

    t<< 1.0,0.0,1.0,
        0.0,1.0,2.0,
        0.0,0.0,1.0;
    P=t*r*P;

    std::cout<< P << std::endl;
}
