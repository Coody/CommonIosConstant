//  Created by coodychou on 2018/10/18.
//  
//  M.I.T
//

#ifndef CommonIosConstant_h
#define CommonIosConstant_h

#include <objc/runtime.h>

#pragma mark - Dynamic Property
#pragma mark : 一般物件
////////////////////////////////
#define Dynamic_Property( ObjectType , property , setProperty )\
Dynamic_Property_Getter( ObjectType , property)\
Dynamic_Property_Setter( ObjectType , property , setProperty , OBJC_ASSOCIATION_RETAIN_NONATOMIC )
//////// Getter ////////
#define Dynamic_Property_Getter( ObjectType , property )\
/*  */-(ObjectType)property{\
/*    */return objc_getAssociatedObject( self, @selector(property) );\
/*  */}
//////// Setter ////////
#define Dynamic_Property_Setter( ObjectType , property , setProperty , associationFlag) \
/*  */-(void)setProperty(ObjectType)property{\
/*    */objc_setAssociatedObject(self, @selector(property), property, associationFlag);\
/*  */}
////////////////////////////////

#pragma mark : Block 物件
////////////////////////////////
#define Dynamic_Block( Key , BlockDefineType , BlockName , setBlockName )\
/*  */Dynamic_Block_Getter( Key , BlockDefineType , BlockName )\
/*  */Dynamic_Block_Setter( Key , BlockDefineType , BlockName , setBlockName , OBJC_ASSOCIATION_RETAIN_NONATOMIC )
//////// Getter ////////
#define Dynamic_Block_Getter( Key , BlockDefineType , BlockName )\
/*  */-(BlockDefineType)BlockName{\
/*    */return objc_getAssociatedObject( self , Key );\
/*  */}
//////// Setter ////////
#define Dynamic_Block_Setter( Key , BlockDefineType , BlockName , setBlockName , OBJC_ASSOCIATION_RETAIN_NONATOMIC )\
/*  */-(void)setBlockName( BlockDefineType )BlockName{\
/*    */objc_setAssociatedObject( self , Key , BlockName , OBJC_ASSOCIATION_RETAIN_NONATOMIC );\
/*  */}
////////////////////////////////

#endif /* CommonIosConstant_h */
