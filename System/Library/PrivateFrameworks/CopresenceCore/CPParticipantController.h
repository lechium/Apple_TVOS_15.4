//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CopresenceCore/CPLinkDelegate-Protocol.h>
#import <CopresenceCore/CPLinkProtocol-Protocol.h>

@class CPLink, CPParticipant, NSMutableDictionary, NSString;
@protocol CPConnectionProviding, CPLinkDelegate, CPParticipantDelegate, OS_dispatch_queue;

@interface CPParticipantController : NSObject <CPLinkDelegate, CPLinkProtocol>
{
    NSObject<OS_dispatch_queue> *_networkQueue;	// 8 = 0x8
    NSMutableDictionary *_links;	// 16 = 0x10
    struct os_unfair_lock_s _connectionsLock;	// 24 = 0x18
    unsigned long long _connectionRetryCount;	// 32 = 0x20
    struct Fsm<States, States::Idle, Triggers> fsm;	// 48 = 0x30
    unsigned int _reliableLinkPriority;	// 128 = 0x80
    unsigned int _unreliableLinkPriority;	// 132 = 0x84
    CPParticipant *_participant;	// 136 = 0x88
    CPLink *_reliableLink;	// 144 = 0x90
    CPLink *_unreliableLink;	// 152 = 0x98
    CPLink *_reservedUnreliableLink;	// 160 = 0xa0
    CPLink *_reservedReliableLink;	// 168 = 0xa8
    CPLink *_modelSyncLink;	// 176 = 0xb0
    id <CPConnectionProviding> _connectionProvider;	// 184 = 0xb8
    id <CPParticipantDelegate> _delegate;	// 192 = 0xc0
    id <CPLinkDelegate> _linkDelegate;	// 200 = 0xc8
}

- (id).cxx_construct;	// IMP=0x000000000001a6b1
- (void).cxx_destruct;	// IMP=0x000000000001a5e4
@property(nonatomic) __weak id <CPLinkDelegate> linkDelegate; // @synthesize linkDelegate=_linkDelegate;
@property(nonatomic) __weak id <CPParticipantDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <CPConnectionProviding> connectionProvider; // @synthesize connectionProvider=_connectionProvider;
@property(nonatomic) unsigned int unreliableLinkPriority; // @synthesize unreliableLinkPriority=_unreliableLinkPriority;
@property(nonatomic) unsigned int reliableLinkPriority; // @synthesize reliableLinkPriority=_reliableLinkPriority;
@property(readonly, nonatomic) CPLink *modelSyncLink; // @synthesize modelSyncLink=_modelSyncLink;
@property(readonly, nonatomic) CPLink *reservedReliableLink; // @synthesize reservedReliableLink=_reservedReliableLink;
@property(readonly, nonatomic) CPLink *reservedUnreliableLink; // @synthesize reservedUnreliableLink=_reservedUnreliableLink;
@property(readonly, nonatomic) CPLink *unreliableLink; // @synthesize unreliableLink=_unreliableLink;
@property(readonly, nonatomic) CPLink *reliableLink; // @synthesize reliableLink=_reliableLink;
@property(readonly, nonatomic) CPParticipant *participant; // @synthesize participant=_participant;
- (void)_triggerAsyncFSMEvent:(int)arg1 timeout:(unsigned long long)arg2;	// IMP=0x000000000001a2c4
- (void)_triggerAsyncFSMEvent:(int)arg1;	// IMP=0x000000000001a2b0
- (void)_dumpConnectionState;	// IMP=0x0000000000019ec6
- (void)didReceiveData:(id)arg1 from:(id)arg2;	// IMP=0x0000000000019dcc
- (void)didFailWithError:(id)arg1;	// IMP=0x0000000000019cec
- (void)didBecomeReady:(id)arg1;	// IMP=0x0000000000019bbf
- (void)sendUnicastData:(id)arg1 ofType:(unsigned char)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000198d1
- (_Bool)isReady;	// IMP=0x00000000000198aa
- (_Bool)_allLinksReady;	// IMP=0x00000000000197a6
- (void)_onError:(id)arg1;	// IMP=0x0000000000019791
- (void)setupLinkOfType:(unsigned char)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001919a
- (void)_initConnections;	// IMP=0x0000000000018f61
- (void)close;	// IMP=0x0000000000018e3b
- (void)_cleanup;	// IMP=0x0000000000018ce7
- (void)notifyAppLaunch;	// IMP=0x0000000000018c21
- (id)initWithParticipant:(id)arg1 connectionProvider:(id)arg2 delegate:(id)arg3 queue:(id)arg4;	// IMP=0x000000000001852d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

