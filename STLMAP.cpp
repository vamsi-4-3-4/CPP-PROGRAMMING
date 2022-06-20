#include<iostream>
#include<map>
#include<unordered_map>
#include<string>
#include<list>
using namespace std;
int main(){
    map<string,string> mymap;
//size() method is used to find the number of elements in the map
    cout<<"SIZE OF THE COLLECTION IS:"<<mymap.size()<<endl;
    //pair<key,value>("define key","define value")
    mymap.insert(pair<string,string>("#ffffff","white"));
    mymap.insert(pair<string,string>("#000000","black"));
    mymap.insert(pair<string,string>("cpp","map"));
    mymap.insert(pair<string,string>("python","dictionary"));
//**********************************************
//|||| REMOVES ALL THE ELEMENTS IN THE MAP ||||||
//-----------------------------------------------
    //mymap.clear();
    //uncomment the above statement to clear the map
    //----------------------------------------------------
//********************************************************
//||||||||||| DELETING THE ELEMENTS ||||||||||||||||||||||
//--------------------------------------------------------
//UNCOMMENT THE BELOW STATEMENT TO DELETE THE item
//mymap.erase("cpp");
//mymap.erase("python");
//mymap.erase("#ffffff");
//---------------------------------------------------------    
    for(auto item:mymap){
        //item.first==key
        //item.second==value
        cout<<"{"<<item.first<<":"<<item.second<<"}"<<endl;
        //map collection orders the keys in the ascending order
    }
    cout<<"SIZE OF THE COLLECTION IS:"<<mymap.size()<<endl;
    cout<<endl;


//unordered map collection does not order our key in ascending order

unordered_map<string,string>mymapp;
cout<<"SIZE OF THE COLLECTION IS:"<<mymapp.size()<<endl;
mymapp.insert(pair<string,string>("s","t"));
mymapp.insert(pair<string,string>("u","v"));
mymapp.insert(pair<string,string>("a","b"));
mymapp.insert(pair<string,string>("c","d"));
for(auto item:mymapp){
    cout<<"{"<<item.first<<":"<<item.second<<"}"<<endl;
}
cout<<"SIZE OF THE COLLECTION IS:"<<mymapp.size()<<endl;
cout<<endl;

//how to access the particular key in the map 
//mymap["your key"]
//keys of the dictionary must be unique
//**********************************
//|||| ACCESSING THE VALUES |||||||
//---------------------------------
cout<<mymap["python"]<<endl;
cout<<mymap["cpp"]<<endl;
cout<<mymap["#ffffff"]<<endl;
cout<<mymap["#000000"]<<endl;
cout<<mymapp["a"]<<endl;
cout<<mymapp["c"]<<endl;
cout<<mymapp["s"]<<endl;
cout<<mymapp["u"]<<endl;
//***********************************
//|||||| UPDATING THE VALUES ||||||||
//-----------------------------------
mymap["#ffffff"]="red";
mymap["#000000"]="yellow";
mymapp["c"]="cplusplus";
mymapp["s"]="scalaprogramming";
cout<<endl<<mymap["#ffffff"]<<endl;
cout<<mymap["#000000"]<<endl;
cout<<mymapp["c"]<<endl;
cout<<mymapp["s"]<<endl;
cout<<endl;
for(auto item:mymap){
    cout<<"{"<<item.first<<"::"<<item.second<<"}"<<endl;
}

cout<<endl;
for(auto item:mymapp){
    cout<<"{"<<item.first<<"::"<<item.second<<"}"<<endl;
}

cout<<endl;

//**************************************************
//|||| ADDING COLLECTION OF STRINGS TO ONE KEY ||||||
//---------------------------------------------------
map<string,list<string>>technologies;
list<string>backend{"nodejs","django","springboot"};
list<string>frontend{"angualr","react","vue","next"};
list<string>database{"mongodb","redis","mysql","couchdb","sqlite3","neo4j"};
list<string>clouds{"azure","gcp","aws","digital ocean"};
technologies.insert(pair<string,list<string>>("BACKEND",backend));
technologies.insert(pair<string,list<string>>("FRONTEND",frontend));
technologies.insert(pair<string,list<string>>("DATABASE",database));
technologies.insert(pair<string,list<string>>("CLOUD",clouds));

for(auto item:technologies){
    cout<<item.first<<" : ";
    for(auto item:item.second){
        cout<<item<<" | ";
    }
    cout<<endl;
}
}
