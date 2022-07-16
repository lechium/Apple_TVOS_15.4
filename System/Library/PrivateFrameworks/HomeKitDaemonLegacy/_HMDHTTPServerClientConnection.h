//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHTTPDevice, HMFHTTPClientConnection, HMFTimer, HMFUnfairLock, NSMutableArray, NSMutableDictionary, NSOperationQueue;

@interface _HMDHTTPServerClientConnection : HMFObject
{
    NSMutableDictionary *_pendingTransactionCompletionHandlers;	// 8 = 0x8
    HMFUnfairLock *_lock;	// 16 = 0x10
    HMDHTTPDevice *_device;	// 24 = 0x18
    HMFHTTPClientConnection *_connection;	// 32 = 0x20
    NSOperationQueue *_requestOperationQueue;	// 40 = 0x28
    NSMutableArray *_receiveMessageRequests;	// 48 = 0x30
    NSOperationQueue *_transactionOperationQueue;	// 56 = 0x38
    HMFTimer *_lostConnectionTimer;	// 64 = 0x40
}

+ (id)shortDescription;	// IMP=0x000000000063512e
- (void).cxx_destruct;	// IMP=0x0000000000634414
@property(readonly, nonatomic) HMFTimer *lostConnectionTimer; // @synthesize lostConnectionTimer=_lostConnectionTimer;
@property(readonly, nonatomic) NSOperationQueue *transactionOperationQueue; // @synthesize transactionOperationQueue=_transactionOperationQueue;
@property(readonly, nonatomic) NSMutableArray *receiveMessageRequests; // @synthesize receiveMessageRequests=_receiveMessageRequests;
@property(readonly, nonatomic) NSOperationQueue *requestOperationQueue; // @synthesize requestOperationQueue=_requestOperationQueue;
@property(retain, nonatomic) HMFHTTPClientConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) HMDHTTPDevice *device; // @synthesize device=_device;
- (void)_reallySendMessage:(id)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000633d7e
- (void)sendMessage:(id)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000633b40
- (id)dequeueRequest;	// IMP=0x00000000006338f2
- (void)queueRequest:(id)arg1;	// IMP=0x000000000063371e
- (CDUnknownBlockType)removeCompletionHandlerForTransactionIdentifier:(id)arg1;	// IMP=0x00000000006333ff
- (void)addCompletionHandler:(CDUnknownBlockType)arg1 forTransactionIdentifier:(id)arg2;	// IMP=0x000000000063332d
@property(readonly, nonatomic, getter=isConnected) _Bool connected;
- (id)description;	// IMP=0x00000000006332e6
- (id)debugDescription;	// IMP=0x00000000006332cf
- (id)descriptionWithPointer:(_Bool)arg1;	// IMP=0x0000000000633189
- (id)shortDescription;	// IMP=0x000000000063309c
- (void)invalidate;	// IMP=0x0000000000632c0c
- (id)initWithDevice:(id)arg1;	// IMP=0x0000000000632922
- (id)init;	// IMP=0x000000000063287a

@end
