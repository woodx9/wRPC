#include "test.pb.h"
#include <string>
#include <iostream>
using namespace fixbug;

// int main() 
// {
//      LoginRequest req;
//      req.set_name("woodx ggbod");
//      req.set_pwd("12345");

//      std::string str;

//      //对象序列话
//      if (req.SerializeToString(&str)) {
//           std::cout << str << std::endl;
//      }

//      //从str的数据转为对象
//      LoginRequest reqB;
//      if (reqB.ParseFromString(str)) {
//           std::cout << reqB.name() << std::endl;
//           std::cout << reqB.pwd() << std::endl;
//      }
     
//      return 0;
// }


int main()
{
     LoginResponse rsp;
     ResultCode * rc = rsp.mutable_result();
     rc->set_errcode(1);
     rc->set_errmsg("登录处理失败了");

     std::string str;
     rsp.SerializeToString(&str);
     std::cout << str << std::endl;


     GetFriendListsResponse rlr;
     User * user1 = rlr.add_friend_list();
     user1->set_name("woodx skr");
     user1->set_age(23);
     user1->set_sex(User::MAN);

      User * user2 = rlr.add_friend_list();
     user2->set_name("woodx skr");
     user2->set_age(23);
     user2->set_sex(User::MAN);

     std::cout << rlr.friend_list_size() << std::endl;

}