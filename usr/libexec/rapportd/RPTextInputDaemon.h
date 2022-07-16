//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, RTIInputSystemService, RTIInputSystemServiceSession;
@protocol OS_dispatch_queue, RPMessageable;

@interface RPTextInputDaemon : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    RTIInputSystemService *_rtiService;	// 16 = 0x10
    RTIInputSystemServiceSession *_rtiSession;	// 24 = 0x18
    NSMutableSet *_sessionPeerIDs;	// 32 = 0x20
    id <RPMessageable> _messenger;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000066e6a
@property(retain, nonatomic) id <RPMessageable> messenger; // @synthesize messenger=_messenger;
- (void)inputSystemService:(id)arg1 inputSessionDidUnpause:(id)arg2 withReason:(id)arg3;	// IMP=0x0010000000066d59
- (void)inputSystemService:(id)arg1 inputSessionDidPause:(id)arg2 withReason:(id)arg3;	// IMP=0x0010000000066c63
- (void)inputSystemService:(id)arg1 inputSessionDocumentDidChange:(id)arg2;	// IMP=0x0010000000066aea
- (void)inputSystemService:(id)arg1 inputSessionDidDie:(id)arg2;	// IMP=0x0010000000066a06
- (void)inputSystemService:(id)arg1 inputSessionDidEnd:(id)arg2;	// IMP=0x0010000000066922
- (void)inputSystemService:(id)arg1 inputSessionDidBegin:(id)arg2;	// IMP=0x0010000000066628
- (void)inputSystemService:(id)arg1 didCreateInputSession:(id)arg2;	// IMP=0x0010000000066585
- (void)_sendTextInputPayloadEvent:(id)arg1 rtiPayload:(id)arg2;	// IMP=0x00100000000661f1
- (void)_handleTextInputChange:(id)arg1 options:(id)arg2;	// IMP=0x0010000000065ec3
- (void)_handleSessionStop:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000065da9
- (void)_handleSessionStart:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000065b6d
- (void)invalidate;	// IMP=0x0010000000065a82
- (_Bool)activateAndReturnError:(id *)arg1;	// IMP=0x0010000000065720
- (id)init;	// IMP=0x00100000000656b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

