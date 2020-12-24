 #include"space.h"

 void Space::addPoint(int a,int b){
     Space2d.emplace_back(a,b);
 }
  void Space::displayall(){
       std::vector<Point>::iterator iter;
   for(iter=Space2d.begin(); iter!=Space2d.end(); ++iter)
       iter->display();
  }
  int Space::countbyquad(int i){
    std::vector<Point>::iterator iter;
    int count=0;
    for(iter=Space2d.begin(); iter!=Space2d.end(); ++iter){
       switch (i){
       case  1:
           if(iter->m_x>0&&iter->m_y>0){
               count++;
           }
           break;
        case  2:
           if(iter->m_x<0&&iter->m_y>0){
               count++;
           }
           break;
        case  3:
           if(iter->m_x<0&&iter->m_y<0){
               count++;
           }
           break;
        case  4:
           if(iter->m_x>0&&iter->m_y<0){
               count++;
           }
           break;
       
       default:
           break;
       }
   }
   return count;
  }
  int Space::countoncircle(double r){
    std::vector<Point>::iterator iter;
    int count=0;
    for(iter=Space2d.begin(); iter!=Space2d.end(); ++iter){
             if(iter->distance()==r){
                 count++;
             }
    }
   return count;
  }
  Point* Space::findonquad(int i){
    std::vector<Point>::iterator iter; 
    iter=Space2d.begin();
    auto quad=iter;
    for(iter=Space2d.begin(); iter!=Space2d.end(); ++iter){
       switch (i){
       case  1:
           if(iter->m_x>0&&iter->m_y>0){
              quad=iter;
              break;
           }
           break;
        case  2:
           if(iter->m_x<0&&iter->m_y>0){
               quad=iter;
              break;
           }
           break;
        case  3:
           if(iter->m_x<0&&iter->m_y<0){
                quad=iter;
              break;
           }
           break;
        case  4:
           if(iter->m_x>0&&iter->m_y<0){
               quad=iter;
              break;
           }
           break;
       
       default:
           break;
       }
     }
   if(iter!=Space2d.end())
     return &(*quad);
   else
     return nullptr;
  }
  Point* Space::findoncircle(double r){
    std::vector<Point>::iterator iter; 
    for(iter=Space2d.begin(); iter!=Space2d.end(); ++iter){
          if(iter->distance()==r){
              break;
          }
    }
    if(iter!=Space2d.end())
     return &(*iter);
   else
     return nullptr;
  }
  int Space::countincircle(double r){
    std::vector<Point>::iterator iter;
    int count=0;
    for(iter=Space2d.begin(); iter!=Space2d.end(); ++iter){
             if(iter->distance()<r){
                 count++;
             }
    }
   return count;
  }