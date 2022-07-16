//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreMotion/CMFallDetectionServerXPC-Protocol.h>
#import <CoreMotion/NSXPCListenerDelegate-Protocol.h>

@class NSMutableArray, NSString, NSXPCListener;
@protocol CMFallDetectionServerDelegate;

@interface CMFallDetectionServer : NSObject <CMFallDetectionServerXPC, NSXPCListenerDelegate>
{
    NSXPCListener *_listener;	// 8 = 0x8
    struct os_unfair_lock_s _connectionsLock;	// 16 = 0x10
    NSMutableArray *_connections;	// 24 = 0x18
    id <CMFallDetectionServerDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001460a8
@property(nonatomic) __weak id <CMFallDetectionServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didHideFallDetectionPromptForProcessID:(int)arg1;	// IMP=0x0000000000145dee
- (void)clientDidStart;	// IMP=0x0000000000145ccf
- (void)appDidRequestFallDetectionPrompt;	// IMP=0x0000000000145c2e
- (void)appDidFinishProcessingEventWithDuration:(double)arg1;	// IMP=0x0000000000145b83
- (void)_removeConnection:(id)arg1;	// IMP=0x0000000000145b00
- (void)_addConnection:(id)arg1;	// IMP=0x0000000000145a86
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000000145440
- (void)dealloc;	// IMP=0x00000000001453c0
- (id)init;	// IMP=0x0000000000145320

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
