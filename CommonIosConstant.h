//  Created by coodychou on 2018/10/18.
//  
//  M.I.T
//

#ifndef CommonIosConstant_h
#define CommonIosConstant_h

////////////////////////////////////////////////////////////////////////////////////////////////
#include <objc/runtime.h>

#pragma mark - Dynamic Property
#pragma mark : 一般物件
////////////////////////////////
#define Dynamic_Property( ObjectType , property , setProperty )\
/*  */ Dynamic_Property_Getter( ObjectType , property)\
/*  */ Dynamic_Property_Setter( ObjectType , property , setProperty , OBJC_ASSOCIATION_RETAIN_NONATOMIC )
//////// Getter ////////
#define Dynamic_Property_Getter( ObjectType , property )\
/*  */ -(ObjectType)property{\
/*      */ return objc_getAssociatedObject( self, @selector(property) );\
/*  */ }
//////// Setter ////////
#define Dynamic_Property_Setter( ObjectType , property , setProperty , associationFlag) \
/*  */ -(void)setProperty(ObjectType)property{\
/*      */ objc_setAssociatedObject(self, @selector(property), property, associationFlag);\
/*  */ }
////////////////////////////////

#pragma mark : NSNumber -> C Type 
////////////////////////////////
#define Dynamic_Property_C_Type( ObjectType , cType , NSNumberToCType , property , setProperty , privateProperty , setPrivateProperty) \
/*  */ Dynamic_Property( ObjectType , privateProperty , setPrivateProperty )\
/*  */ -(cType)property{\
/*      */ return [self.privateProperty NSNumberToCType];\
/*  */ }\
/*  */ -(void)setProperty(cType)value{\
/*      */ [self setPrivateProperty @(value)];\
/*  */ }
////////////////////////////////

#pragma mark : BOOL 
////////////////////////////////
#define Dynamic_Property_BOOL( ObjectType , property , setProperty , privateProperty , setPrivateProperty) \
/*  */ Dynamic_Property_C_Type( ObjectType , BOOL , boolValue , property , setProperty , privateProperty , setPrivateProperty )
////////////////////////////////

#pragma mark : int 
////////////////////////////////
#define Dynamic_Property_Int( ObjectType , property , setProperty , privateProperty , setPrivateProperty) \
/*  */ Dynamic_Property_C_Type( ObjectType , int , intValue , property , setProperty , privateProperty , setPrivateProperty )
////////////////////////////////

#pragma mark : NSInteger 
////////////////////////////////
#define Dynamic_Property_NSInteger( ObjectType , property , setProperty , privateProperty , setPrivateProperty) \
/*  */ Dynamic_Property_C_Type( ObjectType , NSInteger , integerValue , property , setProperty , privateProperty , setPrivateProperty )
////////////////////////////////

#pragma mark : NSUInteger 
////////////////////////////////
#define Dynamic_Property_NSUInteger( ObjectType , property , setProperty , privateProperty , setPrivateProperty) \
/*  */ Dynamic_Property_C_Type( ObjectType , NSUInteger , unsignedIntegerValue , property , setProperty , privateProperty , setPrivateProperty )
////////////////////////////////

#pragma mark : CGFloat 
////////////////////////////////
#define Dynamic_Property_CGFloat( ObjectType , property , setProperty , privateProperty , setPrivateProperty) \
/*  */ Dynamic_Property_C_Type( ObjectType , CGFloat , floatValue , property , setProperty , privateProperty , setPrivateProperty )
////////////////////////////////

#pragma mark : Block 物件
////////////////////////////////
#define Dynamic_Block( Key , BlockDefineType , BlockName , setBlockName )\
/*  */ Dynamic_Block_Getter( Key , BlockDefineType , BlockName )\
/*  */ Dynamic_Block_Setter( Key , BlockDefineType , BlockName , setBlockName , OBJC_ASSOCIATION_RETAIN_NONATOMIC )
//////// Getter ////////
#define Dynamic_Block_Getter( Key , BlockDefineType , BlockName )\
/*  */ -(BlockDefineType)BlockName{\
/*      */return objc_getAssociatedObject( self , Key );\
/*  */ }
//////// Setter ////////
#define Dynamic_Block_Setter( Key , BlockDefineType , BlockName , setBlockName , OBJC_ASSOCIATION_RETAIN_NONATOMIC )\
/*  */ -(void)setBlockName( BlockDefineType )BlockName{\
/*      */objc_setAssociatedObject( self , Key , BlockName , OBJC_ASSOCIATION_RETAIN_NONATOMIC );\
/*  */ }
////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////

#endif /* CommonIosConstant_h */
