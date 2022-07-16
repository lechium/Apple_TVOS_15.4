//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString, VUIAppContext;

__attribute__((visibility("hidden")))
@interface VUIActionCommerceTransaction
{
    NSString *_commerceActionRef;	// 8 = 0x8
    NSDictionary *_contextData;	// 16 = 0x10
    VUIAppContext *_appContext;	// 24 = 0x18
}

+ (void)_saveInterruptedPurchaseTransactionContextInfo:(id)arg1 canonicalID:(id)arg2 error:(id)arg3;	// IMP=0x00000000001f8b67
+ (id)_extractCanonicalIDFromTransactionOffer:(id)arg1;	// IMP=0x00000000001f8a8c
+ (id)extractSalableAdamIDFromBuyParams:(id)arg1;	// IMP=0x00000000001f877f
+ (_Bool)isTransactionInProgressForBuyParams:(id)arg1;	// IMP=0x00000000001f8540
+ (void)displayConfirmationUIWithTitle:(id)arg1 andBody:(id)arg2;	// IMP=0x00000000001f84da
+ (void)displayConfirmationUIWithTitle:(id)arg1 andBody:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001f8340
- (void).cxx_destruct;	// IMP=0x00000000001f8dea
@property(nonatomic) __weak VUIAppContext *appContext; // @synthesize appContext=_appContext;
@property(copy, nonatomic) NSDictionary *contextData; // @synthesize contextData=_contextData;
@property(retain, nonatomic) NSString *commerceActionRef; // @synthesize commerceActionRef=_commerceActionRef;
- (void)_recordLog:(id)arg1 withBuyParams:(id)arg2;	// IMP=0x00000000001f85bb
- (void)_notifyDidEndPurchaseType:(long long)arg1 transactionOffer:(id)arg2 withError:(id)arg3;	// IMP=0x00000000001f8108
- (void)_notifyDidStartPurchaseType:(long long)arg1 transactionOffer:(id)arg2;	// IMP=0x00000000001f7f7c
- (void)_showUIConfirmationForSubTransaction:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001f7dd2
- (void)_handleSubscriptionCompletionForOffer:(id)arg1 appContext:(id)arg2 shouldInitiateFamilySetup:(_Bool)arg3 serverResponse:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000001f784e
- (void)_handleBuyCompletionForOffer:(id)arg1 appContext:(id)arg2 shouldPlayWhenDone:(_Bool)arg3 serverResponse:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000001f6f1f
- (void)_startTransactionOfOffer:(id)arg1 withAppContext:(id)arg2 andCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001f65bc
- (id)_preflightManagerForTransactionOffer:(id)arg1;	// IMP=0x00000000001f64c1
- (void)performWithTargetResponder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001f6422
- (id)initWithActionRef:(id)arg1 contextData:(id)arg2 appContext:(id)arg3;	// IMP=0x00000000001f632a

@end

