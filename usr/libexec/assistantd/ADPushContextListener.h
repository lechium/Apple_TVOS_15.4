//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface ADPushContextListener : NSObject
{
    NSXPCListener *_listener;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    MISSING_TYPE *_delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000235e39
- (void)removeDelegate:(id)arg1;	// IMP=0x0010000000235d51
- (void)setDelegate:(id)arg1;	// IMP=0x0010000000235c8b
- (void)listen;	// IMP=0x0010000000235c26
- (id)init;	// IMP=0x0010000000235ba2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

