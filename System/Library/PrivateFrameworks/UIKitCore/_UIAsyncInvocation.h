//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _UIAsyncInvocation : NSObject
{
    _Atomic void *_observer;	// 8 = 0x8
    CDUnknownBlockType _invocationBlock;	// 16 = 0x10
    _Atomic _Bool _invocationBlockHasBeenCalled;	// 24 = 0x18
    _Atomic long long _invokeCallCount;	// 32 = 0x20
}

+ (id)emptyInvocation;	// IMP=0x0000000000f49c95
+ (id)invocationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000f499fe
- (void).cxx_destruct;	// IMP=0x0000000000f49cc1
- (void)dealloc;	// IMP=0x0000000000f49bd3
- (id)invoke;	// IMP=0x0000000000f49a85

@end
