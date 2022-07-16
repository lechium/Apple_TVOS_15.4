//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKPeerPaymentAssociatedAccountSetupDelegate-Protocol.h>
#import <PassKitUI/PKSetupAssistantStep-Protocol.h>

@class NSString;
@protocol PKSetupAssistantPeerPaymentAddAssociatedAccountDelegate;

@interface PKSetupAssistantPeerPaymentAddAssociatedAccountViewController <PKPeerPaymentAssociatedAccountSetupDelegate, PKSetupAssistantStep>
{
    id <PKSetupAssistantPeerPaymentAddAssociatedAccountDelegate> _setupAssistantDelegate;	// 8 = 0x8
}

+ (id)defaultWebServiceForContext:(long long)arg1;	// IMP=0x00000000003bb543
+ (_Bool)setupAssistantNeedsToRunReturningRequirements:(unsigned long long *)arg1;	// IMP=0x00000000003bb53b
+ (_Bool)bridgeSetupAssistantNeedsToRunWithContext:(id)arg1 returningRequirements:(unsigned long long *)arg2;	// IMP=0x00000000003bb4b8
+ (_Bool)bridgeSetupAssistantNeedsToRunReturningRequirements:(unsigned long long *)arg1;	// IMP=0x00000000003bb457
- (void).cxx_destruct;	// IMP=0x00000000003bb7cc
- (void)addPeerPaymentAssociatedAccountDidSkipSetupForFamilyMember:(id)arg1;	// IMP=0x00000000003bb790
- (void)addPeerPaymentAssociatedAccountSetupCompletedWithSucess:(_Bool)arg1 updatedAccount:(id)arg2 forFamilyMember:(id)arg3;	// IMP=0x00000000003bb596
- (void)preflightWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000003bb57d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
