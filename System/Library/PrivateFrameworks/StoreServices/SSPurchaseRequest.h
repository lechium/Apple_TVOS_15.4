//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSPurchaseManagerDelegate-Protocol.h>
#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSArray, NSMutableSet, NSString, SSPurchaseManager;
@protocol SSPurchaseRequestDelegate;

@interface SSPurchaseRequest <SSPurchaseManagerDelegate, SSXPCCoding>
{
    _Bool _isBackgroundRequest;	// 56 = 0x38
    NSArray *_purchases;	// 64 = 0x40
    _Bool _shouldValidatePurchases;	// 72 = 0x48
    CDUnknownBlockType _completionBlock;	// 80 = 0x50
    _Bool _createsDownloads;	// 88 = 0x58
    NSMutableSet *_openPurchaseIdentifiers;	// 96 = 0x60
    CDUnknownBlockType _purchaseBlock;	// 104 = 0x68
    CDUnknownBlockType _purchaseResponseBlock;	// 112 = 0x70
    SSPurchaseManager *_purchaseManager;	// 120 = 0x78
    _Bool _needsAuthentication;	// 128 = 0x80
    _Bool _playbackRequest;	// 129 = 0x81
    _Bool _createsJobs;	// 130 = 0x82
}

@property(nonatomic) _Bool createsJobs; // @synthesize createsJobs=_createsJobs;
@property(nonatomic) _Bool shouldValidatePurchases; // @synthesize shouldValidatePurchases=_shouldValidatePurchases;
@property(nonatomic, getter=isPlaybackRequest) _Bool playbackRequest; // @synthesize playbackRequest=_playbackRequest;
@property(nonatomic) _Bool needsAuthentication; // @synthesize needsAuthentication=_needsAuthentication;
@property(nonatomic) _Bool createsDownloads; // @synthesize createsDownloads=_createsDownloads;
@property(nonatomic, getter=isBackgroundRequest) _Bool backgroundRequest; // @synthesize backgroundRequest=_isBackgroundRequest;
- (id)_purchaseForUniqueIdentifier:(long long)arg1;	// IMP=0x000000000002fe9c
- (void)_finishPurchasesWithResponses:(id)arg1;	// IMP=0x000000000002f329
- (void)_addPurchasesToManager;	// IMP=0x000000000002edb8
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x000000000002edaa
- (id)copyXPCEncoding;	// IMP=0x000000000002eda2
- (void)purchaseManager:(id)arg1 didFinishPurchasesWithResponses:(id)arg2;	// IMP=0x000000000002ed8d
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002ed39
- (_Bool)start;	// IMP=0x000000000002ed24
- (void)cancel;	// IMP=0x000000000002ecce
- (void)startWithPurchaseResponseBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000002ec4e
- (void)startWithPurchaseBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000002ebce
@property(readonly) NSArray *purchases;
- (void)dealloc;	// IMP=0x000000000002eb09
- (id)initWithPurchases:(id)arg1;	// IMP=0x000000000002ea78
- (id)init;	// IMP=0x000000000002ea64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <SSPurchaseRequestDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

