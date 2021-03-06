//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CATOperationQueue, CATStateMachine, NSString;
@protocol CATTransportDelegate;

@interface CATTransport : NSObject
{
    CATStateMachine *mFSM;	// 8 = 0x8
    CATOperationQueue *mControlQueue;	// 16 = 0x10
    CATOperationQueue *mMessageQueue;	// 24 = 0x18
    CATTransport *mStrongSelf;	// 32 = 0x20
    NSString *_name;	// 40 = 0x28
    id <CATTransportDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000045063
@property(nonatomic) __weak id <CATTransportDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)delegateDidInvalidate;	// IMP=0x0000000000044f60
- (void)enqueueDelegateDidInterruptWithError:(id)arg1;	// IMP=0x0000000000044cfa
- (void)enqueueDelegateCouldNotConnectWithError:(id)arg1;	// IMP=0x0000000000044c06
- (void)enqueueDelegateDidReceiveMessage:(id)arg1;	// IMP=0x00000000000449a0
- (void)enqueueDelegateDidConnect;	// IMP=0x000000000004477d
- (void)delegateDidResume;	// IMP=0x00000000000446ba
- (id)operationToSendMessage:(id)arg1;	// IMP=0x0000000000044616
- (void)invalidateConnection;	// IMP=0x0000000000044573
- (void)suspendConnection;	// IMP=0x00000000000444d0
- (void)resumeConnection;	// IMP=0x000000000004442d
- (void)enqueueDelegateDidInvalidateAndFinalize;	// IMP=0x00000000000440e1
- (void)cancelAndResumeQueuesAndEnqueueInvalidateConnection;	// IMP=0x0000000000043fb0
- (void)invalidSendForMessage:(id)arg1;	// IMP=0x0000000000043d1f
- (void)enqueueSendForMessage:(id)arg1;	// IMP=0x000000000004389b
- (void)suspendQueue;	// IMP=0x0000000000043856
- (void)resumeQueue;	// IMP=0x0000000000043814
- (void)suspendQueueAndConnection;	// IMP=0x00000000000437c3
- (void)resumeQueueAndConnection;	// IMP=0x00000000000435f9
- (void)cancelHelloMessageAndResumeQueueOperations;	// IMP=0x00000000000435e3
- (void)sendHelloMessageAndResumeQueue;	// IMP=0x00000000000432a8
- (void)didInvalidate;	// IMP=0x00000000000431fe
- (void)didInterruptWithError:(id)arg1;	// IMP=0x000000000004313e
- (void)didReceiveMessage:(id)arg1;	// IMP=0x0000000000042fb8
- (void)sendMessage:(id)arg1;	// IMP=0x0000000000042ef8
- (void)invalidate;	// IMP=0x0000000000042e4e
- (void)suspend;	// IMP=0x0000000000042da4
- (void)resume;	// IMP=0x0000000000042cfa
- (id)debugDescription;	// IMP=0x0000000000042c62
- (id)description;	// IMP=0x0000000000042af0
- (id)init;	// IMP=0x000000000004248e
- (void)dealloc;	// IMP=0x000000000004237f

@end

