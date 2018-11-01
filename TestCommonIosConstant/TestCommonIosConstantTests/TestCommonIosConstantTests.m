//
//  TestCommonIosConstantTests.m
//  TestCommonIosConstantTests
//
//  Created by coodychou on 2018/11/1.
//  Copyright © 2018 coodychou. All rights reserved.
//

#import <XCTest/XCTest.h>

#import "ViewController.h"

@interface TestCommonIosConstantTests : XCTestCase
@property (nonatomic , strong) ViewController *vc;
@end

@implementation TestCommonIosConstantTests

- (void)setUp {
    // Put setup code here. This method is called before the invocation of each test method in the class.
    _vc = [[ViewController alloc] init];
    
    
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
}

- (void)testExample {
    // This is an example of a functional test case.
    // Use XCTAssert and related functions to verify your tests produce the correct results.
    
    // BOOL
    _vc.isOK = YES;
    XCTAssertTrue( _vc.isOK , "isOK YES");
    _vc.isOK = NO;
    XCTAssertFalse( _vc.isOK , "isOK NO" );
    _vc.isOK = 100;
    XCTAssertEqual( _vc.isOK , YES , "isOK is BOOL" );
    _vc.isOK = 0;
    XCTAssertEqual( _vc.isOK , NO , "isOK is BOOL" );
    
    // Int Value
    _vc.intVal = -1000;
    XCTAssertEqual( _vc.intVal , -1000 , "intValue is -1000");
    _vc.intVal = 9999999;
    XCTAssertEqual( _vc.intVal , 9999999 , " 9999999");
    _vc.intVal = 2147483647;
    XCTAssertEqual( _vc.intVal , 2147483647 , " int MAX 2147483647");
    _vc.intVal = 2147483648;
    XCTAssertEqual( _vc.intVal , -2147483648 , " int MAX overload");
    _vc.intVal = -2147483649;
    XCTAssertEqual( _vc.intVal , 2147483647 , " int min overload");
    
    // integerVal
    
}

- (void)testPerformanceExample {
    // This is an example of a performance test case.
    [self measureBlock:^{
        // Put the code you want to measure the time of here.
    }];
}

@end
