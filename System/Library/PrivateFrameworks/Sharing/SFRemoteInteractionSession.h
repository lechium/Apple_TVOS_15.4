//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>
#import <Sharing/SFXPCInterface-Protocol.h>

@class NSXPCConnection, SDRemoteInteractionAgent, SFDevice, SFSession;
@protocol OS_dispatch_queue;

@interface SFRemoteInteractionSession : NSObject <NSSecureCoding, SFXPCInterface>
{
    _Bool _activateCalled;	// 8 = 0x8
    _Bool _invalidateCalled;	// 9 = 0x9
    _Bool _invalidateDone;	// 10 = 0xa
    SFSession *_remoteSession;	// 16 = 0x10
    NSXPCConnection *_xpcCnx;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 32 = 0x20
    CDUnknownBlockType _interruptionHandler;	// 40 = 0x28
    CDUnknownBlockType _invalidationHandler;	// 48 = 0x30
    SFDevice *_peerDevice;	// 56 = 0x38
    CDUnknownBlockType _remoteTextEventHandler;	// 64 = 0x40
    CDUnknownBlockType _textSessionDidBegin;	// 72 = 0x48
    CDUnknownBlockType _textSessionDidEnd;	// 80 = 0x50
    CDUnknownBlockType _textSessionDidChange;	// 88 = 0x58
    SDRemoteInteractionAgent *_agent;	// 96 = 0x60
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000f4b84
- (void).cxx_destruct;	// IMP=0x00000000000f6a16
@property(retain, nonatomic) SDRemoteInteractionAgent *agent; // @synthesize agent=_agent;
@property(copy, nonatomic) CDUnknownBlockType textSessionDidChange; // @synthesize textSessionDidChange=_textSessionDidChange;
@property(copy, nonatomic) CDUnknownBlockType textSessionDidEnd; // @synthesize textSessionDidEnd=_textSessionDidEnd;
@property(copy, nonatomic) CDUnknownBlockType textSessionDidBegin; // @synthesize textSessionDidBegin=_textSessionDidBegin;
@property(copy, nonatomic) CDUnknownBlockType remoteTextEventHandler; // @synthesize remoteTextEventHandler=_remoteTextEventHandler;
@property(retain, nonatomic) SFDevice *peerDevice; // @synthesize peerDevice=_peerDevice;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)remoteInteractionSessionTextSessionDidChange:(id)arg1;	// IMP=0x00000000000f68ba
- (void)remoteInteractionSessionTextSessionDidEnd:(id)arg1;	// IMP=0x00000000000f6834
- (void)remoteInteractionSessionTextSessionDidBegin:(id)arg1;	// IMP=0x00000000000f67ae
- (void)remoteInteractionSessionRemoteTextEvent:(id)arg1;	// IMP=0x00000000000f672b
- (void)_interrupted;	// IMP=0x00000000000f6548
- (void)_ensureXPCStarted;	// IMP=0x00000000000f634e
- (void)_sessionHandleEvent:(id)arg1;	// IMP=0x00000000000f5be6
- (void)_sessionSendPayload:(id)arg1;	// IMP=0x00000000000f58c9
- (void)_sessionStart;	// IMP=0x00000000000f581d
- (void)sendPayload:(id)arg1;	// IMP=0x00000000000f56c4
- (void)_invalidated;	// IMP=0x00000000000f559f
- (void)_invalidate;	// IMP=0x00000000000f54c6
- (void)invalidate;	// IMP=0x00000000000f5465
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000f4ecd
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000f4df2
- (id)description;	// IMP=0x00000000000f4ceb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f4cc1
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f4be3
- (id)init;	// IMP=0x00000000000f4b8c

@end

