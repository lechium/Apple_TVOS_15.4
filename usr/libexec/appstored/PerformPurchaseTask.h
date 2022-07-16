//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AMSPurchaseQueue, NSArray, NSMutableDictionary, NSString, PurchaseBatch;

@interface PerformPurchaseTask
{
    PurchaseBatch *_purchaseBatch;	// 8 = 0x8
    AMSPurchaseQueue *_purchaseQueue;	// 16 = 0x10
    NSMutableDictionary *_presenters;	// 24 = 0x18
    NSMutableDictionary *_purchasing;	// 32 = 0x20
    NSArray *_responses;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000014368c
@property(readonly) NSArray *responses; // @synthesize responses=_responses;
- (_Bool)shouldUseJSONContentTypeForPurchaseInfo:(id)arg1;	// IMP=0x0010000000143367
- (id)_repairedTinkerAccountWithPurchaseInfo:(id)arg1;	// IMP=0x001000000014335f
- (_Bool)_isTinker;	// IMP=0x0010000000143357
- (void)main;	// IMP=0x00100000001419ce
- (void)handleEngagementRequest:(id)arg1 purchase:(id)arg2 purchaseQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000014132a
- (void)handleDialogRequest:(id)arg1 purchase:(id)arg2 purchaseQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001409f2
- (void)handleAuthenticateRequest:(id)arg1 purchase:(id)arg2 purchaseQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001403b9
- (id)_interactiveRequestForPurchase:(id)arg1;	// IMP=0x00100000001401ee
- (id)initWithPurchaseBatch:(id)arg1;	// IMP=0x001000000014014f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
