//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INPayBillIntentExport-Protocol.h>

@class INBillPayee, INDateComponentsRange, INPaymentAccount, INPaymentAmount, NSString;

@interface INPayBillIntent <INPayBillIntentExport>
{
}

- (void)setParametersByName:(id)arg1;	// IMP=0x0000000000154a3a
- (id)parametersByName;	// IMP=0x0000000000154a28
- (void)setVerb:(id)arg1;	// IMP=0x0000000000154a22
- (id)verb;	// IMP=0x0000000000154a15
- (void)setDomain:(id)arg1;	// IMP=0x0000000000154a0f
- (id)domain;	// IMP=0x0000000000154a02
- (_Bool)_isUserConfirmationRequired;	// IMP=0x00000000001549fa
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;	// IMP=0x0000000000154721
- (id)_dictionaryRepresentation;	// IMP=0x0000000000154341
- (void)setDueDate:(id)arg1;	// IMP=0x00000000001542b6
@property(readonly, copy, nonatomic) INDateComponentsRange *dueDate;
- (void)setBillType:(long long)arg1;	// IMP=0x00000000001541e1
@property(readonly, nonatomic) long long billType;
- (void)setTransactionNote:(id)arg1;	// IMP=0x00000000001540ba
@property(readonly, copy, nonatomic) NSString *transactionNote;
- (void)setTransactionScheduledDate:(id)arg1;	// IMP=0x0000000000153fbc
@property(readonly, copy, nonatomic) INDateComponentsRange *transactionScheduledDate;
- (void)setTransactionAmount:(id)arg1;	// IMP=0x0000000000153ebe
@property(readonly, copy, nonatomic) INPaymentAmount *transactionAmount;
- (void)setFromAccount:(id)arg1;	// IMP=0x0000000000153dc0
@property(readonly, copy, nonatomic) INPaymentAccount *fromAccount;
- (void)setBillPayee:(id)arg1;	// IMP=0x0000000000153cc2
@property(readonly, copy, nonatomic) INBillPayee *billPayee;
- (id)initWithBillPayee:(id)arg1 fromAccount:(id)arg2 transactionAmount:(id)arg3 transactionScheduledDate:(id)arg4 transactionNote:(id)arg5 billType:(long long)arg6 dueDate:(id)arg7;	// IMP=0x0000000000153b12
- (id)_categoryVerb;	// IMP=0x0000000000153b05
- (long long)_intentCategory;	// IMP=0x0000000000153afa
- (void)_setMetadata:(id)arg1;	// IMP=0x0000000000153a88
- (id)_metadata;	// IMP=0x0000000000153a38
- (id)_typedBackingStore;	// IMP=0x00000000001539e1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
