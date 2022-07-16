//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Catalyst/CATTaskSessionDelegate-Protocol.h>

@class CATOperationQueue, CATStateMachine, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSString;
@protocol CATTaskServerDelegate, OS_dispatch_group;

@interface CATTaskServer : NSObject <CATTaskSessionDelegate>
{
    CATStateMachine *mFSM;	// 8 = 0x8
    NSMutableSet *mSessions;	// 16 = 0x10
    NSMutableDictionary *mActiveSessionsByUUID;	// 24 = 0x18
    NSMutableDictionary *mInvalidatingSessionsByUUID;	// 32 = 0x20
    NSMutableDictionary *mConnectedSessionsByUUID;	// 40 = 0x28
    CATTaskServer *mStrongSelf;	// 48 = 0x30
    NSObject<OS_dispatch_group> *mAllSessionsDidInvalidateGroup;	// 56 = 0x38
    CATOperationQueue *mOrphanedOperationQueue;	// 64 = 0x40
    id <CATTaskServerDelegate> _delegate;	// 72 = 0x48
    NSDictionary *_userInfo;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000003b1e7
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) __weak id <CATTaskServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)delegateClientSession:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3;	// IMP=0x000000000003b0a9
- (void)delegateSessionDidInvalidate:(id)arg1;	// IMP=0x000000000003afdc
- (void)delegateClientSessionDidDisconnect:(id)arg1;	// IMP=0x000000000003af0f
- (void)delegateClientSessionDidConnect:(id)arg1;	// IMP=0x000000000003ae42
- (void)delegateClientSession:(id)arg1 didInterruptWithError:(id)arg2;	// IMP=0x000000000003ad38
- (void)delegateDidInvalidate;	// IMP=0x000000000003ac75
- (_Bool)delegateClientSession:(id)arg1 shouldConnectWithTransport:(id)arg2;	// IMP=0x000000000003ab7f
- (void)session:(id)arg1 enqueueOperation:(id)arg2;	// IMP=0x000000000003a9d9
- (id)session:(id)arg1 prepareOperationForRequest:(id)arg2 error:(id *)arg3;	// IMP=0x000000000003a673
- (void)session:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3;	// IMP=0x000000000003a5d8
- (void)sessionDidInvalidate:(id)arg1;	// IMP=0x000000000003a4f0
- (void)sessionWillInvalidate:(id)arg1;	// IMP=0x000000000003a422
- (void)session:(id)arg1 didInterruptWithError:(id)arg2;	// IMP=0x000000000003a39e
- (void)sessionDidDisconnect:(id)arg1;	// IMP=0x000000000003a2a6
- (void)sessionDidConnect:(id)arg1;	// IMP=0x000000000003a1ff
- (_Bool)session:(id)arg1 shouldAcceptConnectionFromTransport:(id)arg2;	// IMP=0x000000000003a02d
- (void)delegateDidInvalidateAndFinalize;	// IMP=0x0000000000039e9c
- (void)allSessionsDidInvalidate;	// IMP=0x0000000000039df2
- (void)startInvalidatingWithError:(id)arg1;	// IMP=0x0000000000039d09
- (void)invalidateWithError:(id)arg1;	// IMP=0x0000000000039b91
- (void)invalidate;	// IMP=0x0000000000039b7d
- (void)disconnectAllClientSessions;	// IMP=0x0000000000039aac
- (void)invalidateAllClientSessions;	// IMP=0x00000000000399db
- (void)makeSessionWithClientTransport:(id)arg1;	// IMP=0x0000000000039845
- (void)connectWithClientTransport:(id)arg1;	// IMP=0x00000000000396cd
- (void)postNotificationWithName:(id)arg1 userInfo:(id)arg2;	// IMP=0x0000000000039478
@property(readonly, copy, nonatomic) NSArray *connectedClientSessions;
@property(readonly, copy, nonatomic) NSArray *clientSessions;
- (id)init;	// IMP=0x000000000003914f
- (void)dealloc;	// IMP=0x0000000000039040

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

