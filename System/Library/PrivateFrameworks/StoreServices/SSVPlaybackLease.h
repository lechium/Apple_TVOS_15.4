//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSMutableArray, NSString, SSURLBag, SSVBarrierOperationQueue, SSVFairPlaySubscriptionController, SSVPlaybackLeaseConfiguration, SSVPlaybackLeaseRequest, SSVRefreshSubscriptionRequest;
@protocol OS_dispatch_queue, OS_dispatch_source, SSVPlaybackLeaseDelegate;

@interface SSVPlaybackLease : NSObject
{
    NSMutableArray *_assetOperations;	// 8 = 0x8
    NSData *_certificateData;	// 16 = 0x10
    NSString *_certificateURLBagKey;	// 24 = 0x18
    SSVPlaybackLeaseConfiguration *_configuration;	// 32 = 0x20
    id <SSVPlaybackLeaseDelegate> _delegate;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 48 = 0x30
    SSVFairPlaySubscriptionController *_fairPlaySubscriptionController;	// 56 = 0x38
    unsigned long long _kdMovieIdentifier;	// 64 = 0x40
    SSVPlaybackLeaseRequest *_lastKDLeaseRequest;	// 72 = 0x48
    int _leaseDidEndNotificationToken;	// 80 = 0x50
    NSDate *_leaseExpirationDate;	// 88 = 0x58
    long long _leaseType;	// 96 = 0x60
    SSVRefreshSubscriptionRequest *_offlineSlotRequest;	// 104 = 0x68
    SSVBarrierOperationQueue *_operationQueue;	// 112 = 0x70
    _Bool _refreshesAutomatically;	// 120 = 0x78
    NSObject<OS_dispatch_source> *_refreshTimer;	// 128 = 0x80
    NSObject<OS_dispatch_queue> *_serialQueue;	// 136 = 0x88
    SSURLBag *_urlBag;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00000000000f0272
- (void)_updateWithLeaseResponseError:(id)arg1;	// IMP=0x00000000000f01b7
- (void)_updateForLeaseResponse:(id)arg1 error:(id)arg2;	// IMP=0x00000000000efedd
- (void)_startRefreshTimerIfNecessary;	// IMP=0x00000000000efbcb
- (_Bool)_shouldEndLeaseForError:(id)arg1 returningEndReasonType:(unsigned long long *)arg2;	// IMP=0x00000000000efb03
- (void)_sendLeaseDidEndWithEndReasonType:(unsigned long long)arg1;	// IMP=0x00000000000ef9bb
- (void)_fireRefreshTimer;	// IMP=0x00000000000ef565
- (void)_endLease;	// IMP=0x00000000000ef4fa
- (void)_cancelRefreshTimer;	// IMP=0x00000000000ef4bb
- (id)_addOperationWithRequest:(id)arg1 configurationURL:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000eef47
- (void)updateWithExternalLeaseResponseError:(id)arg1;	// IMP=0x00000000000eee9c
@property _Bool refreshesAutomatically;
@property __weak id <SSVPlaybackLeaseDelegate> delegate;
@property(copy) NSString *certificateURLBagKey;
@property(copy) NSData *certificateData;
- (void)refreshLeaseWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ee914
- (void)preheatLeaseRequestsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ee7be
- (void)getCertificateDataWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ee508
- (void)getAssetWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ee1fa
- (void)endLease;	// IMP=0x00000000000ee196
- (void)cancelAllAssetRequests;	// IMP=0x00000000000edd22
- (void)beginLeaseWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000eda51
- (void)dealloc;	// IMP=0x00000000000eda07
- (id)initWithURLBag:(id)arg1 leaseType:(long long)arg2;	// IMP=0x00000000000ed9a4
- (id)initWithURLBag:(id)arg1;	// IMP=0x00000000000ed990
- (id)initWithLeaseConfiguration:(id)arg1;	// IMP=0x00000000000ed914
- (id)init;	// IMP=0x00000000000ed857
- (id)_initSSVPlaybackLease;	// IMP=0x00000000000ed5be

@end

