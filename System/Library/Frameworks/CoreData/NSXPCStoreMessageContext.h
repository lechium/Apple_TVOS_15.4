//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCoreDataXPCMessage, NSDictionary, NSError, NSXPCStore;

__attribute__((visibility("hidden")))
@interface NSXPCStoreMessageContext : NSObject
{
    NSXPCStore *_store;	// 8 = 0x8
    NSCoreDataXPCMessage *_message;	// 16 = 0x10
    NSDictionary *_result;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
}

- (void)dealloc;	// IMP=0x0000000000094792
- (id)initForMessage:(id)arg1 store:(id)arg2;	// IMP=0x000000000009472f

@end

