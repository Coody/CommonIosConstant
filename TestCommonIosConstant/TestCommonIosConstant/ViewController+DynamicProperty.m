//
//  ViewController+DynamicProperty.m
//  TestCommonIosConstant
//
//  Created by coodychou on 2018/11/1.
//  Copyright © 2018 coodychou. All rights reserved.
//

#import "ViewController+DynamicProperty.h"

#import "CommonIosConstant.h"

@implementation ViewController (DynamicProperty)
Dynamic_Property_BOOL(NSNumber*, isOK, setIsOK:, priIsOK, setPriIsOK:)
Dynamic_Property_Int(NSNumber*, intVal, setIntVal:, priIntVal, setPriIntVal:)
Dynamic_Property_NSInteger(NSNumber*, integerVal, setIntegerVal:, priIntegerVal, setPriIntegerVal:)
Dynamic_Property_NSUInteger(NSNumber*, unIntVal, setUnIntVal:, priUnIntVal, setPriUnIntVal:)
Dynamic_Property_CGFloat(NSNumber*, floatValue, setFloatValue:, priFloatValue, setPriFloatValue:)

@end
