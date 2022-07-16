//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, PKPaymentSetupAssistantController, PKPaymentSetupAssistantDelegateProxy;

@interface PKPaymentSetupAssistantRegistrationViewController
{
    PKPaymentSetupAssistantDelegateProxy *_delegateProxy;	// 8 = 0x8
    PKPaymentSetupAssistantController *_setupAssistantController;	// 16 = 0x10
}

+ (_Bool)bridgeSetupAssistantNeedsToRunWithContext:(id)arg1 returningRequirements:(unsigned long long *)arg2;	// IMP=0x0000000000023585
+ (_Bool)bridgeSetupAssistantNeedsToRunReturningRequirements:(unsigned long long *)arg1;	// IMP=0x000000000002357d
+ (_Bool)setupAssistantNeedsToRunReturningRequirements:(unsigned long long *)arg1;	// IMP=0x0000000000023575
+ (id)defaultWebServiceForContext:(long long)arg1;	// IMP=0x000000000002353b
- (void).cxx_destruct;	// IMP=0x00000000000239e6
@property(readonly, nonatomic) NSArray *requiredPaymentSetupFileURLs;
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000002394b
- (void)viewDidLoad;	// IMP=0x000000000002390b
- (void)preflightWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000236c5
- (id)initWithPaymentWebService:(id)arg1 context:(long long)arg2 delegate:(id)arg3;	// IMP=0x000000000002358d

@end

