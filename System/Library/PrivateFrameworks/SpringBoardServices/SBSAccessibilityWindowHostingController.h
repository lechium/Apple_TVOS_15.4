//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/SBSAccessibilityWindowHostingServerToClientInterface-Protocol.h>

@class BSServiceConnection, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface SBSAccessibilityWindowHostingController : NSObject <SBSAccessibilityWindowHostingServerToClientInterface>
{
    BSServiceConnection *_connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 16 = 0x10
    NSMutableDictionary *_registeredWindowContextIDsToLevel;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001e78a
- (void)_connectionQueue_handleInterruption;	// IMP=0x000000000001e694
- (id)_connectionQueue_connection;	// IMP=0x000000000001e0bc
- (void)invalidate;	// IMP=0x000000000001e01b
- (void)unregisterWindowWithContextID:(unsigned int)arg1;	// IMP=0x000000000001deb8
- (void)registerWindowWithContextID:(unsigned int)arg1 atLevel:(double)arg2;	// IMP=0x000000000001dcfe
- (id)init;	// IMP=0x000000000001dca8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
