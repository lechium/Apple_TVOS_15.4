//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFQueue, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface ADClientLiteListener : NSObject
{
    NSXPCListener *_listener;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    AFQueue *_workItemQueue;	// 24 = 0x18
    long long _executionCount;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000001121b3
- (void)_decrementAndTestExecutionCount;	// IMP=0x001000000011217b
- (void)_incrementAndTestExecutionCount;	// IMP=0x0010000000112138
- (void)_doDelayedClientWorkIfAny:(id)arg1;	// IMP=0x0010000000111fe8
- (void)doDelayedClientWorkIfAny;	// IMP=0x0010000000111fa0
- (void)doClientWork:(CDUnknownBlockType)arg1 withTimeoutBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000111d66
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000111c3a
- (void)listen;	// IMP=0x0010000000111c24
- (id)init;	// IMP=0x0010000000111b37

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

