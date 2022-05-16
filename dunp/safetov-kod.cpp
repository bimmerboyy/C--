Vektor Vektor::operator ++(int){
    for(int i=0;i<3;i++)
        v[i]++; 
    return *this;
}
