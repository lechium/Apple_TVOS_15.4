//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ABCCallbackInvoker : NSObject
{
    CDUnknownFunctionPointerType cb;	// 8 = 0x8
    void *ab;	// 16 = 0x10
    void *context;	// 24 = 0x18
}

- (void)invoke;	// IMP=0x000000000002eb78

@end

