//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKExplanationViewDelegate-Protocol.h>
#import <PassKitUI/PKSubcredentialPairingFlowControllerOperation-Protocol.h>
#import <PassKitUI/PKViewControllerPreflightable-Protocol.h>

@class NSString, PKHeroCardExplainationHeaderView, PKSubcredentialPairingFlowControllerContext, UIViewController;
@protocol PKSubcredentialPairingFlowControllerProtocol;

@interface PKSubcredentialPairingCompletedViewController <PKExplanationViewDelegate, PKSubcredentialPairingFlowControllerOperation, PKViewControllerPreflightable>
{
    _Bool _isLastOperation;	// 8 = 0x8
    _Bool _isPassExpress;	// 9 = 0x9
    PKHeroCardExplainationHeaderView *_heroCardView;	// 16 = 0x10
    UIViewController *_nextVC;	// 24 = 0x18
    PKSubcredentialPairingFlowControllerContext *_provisioningContext;	// 32 = 0x20
    id <PKSubcredentialPairingFlowControllerProtocol> _flowController;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001f89bc
@property(readonly, nonatomic) id <PKSubcredentialPairingFlowControllerProtocol> flowController; // @synthesize flowController=_flowController;
@property(retain, nonatomic) PKSubcredentialPairingFlowControllerContext *provisioningContext; // @synthesize provisioningContext=_provisioningContext;
@property(readonly, nonatomic) _Bool suppressFieldDetect;
- (void)explanationViewDidSelectSetupLater:(id)arg1;	// IMP=0x00000000001f895e
- (void)explanationViewDidSelectContinue:(id)arg1;	// IMP=0x00000000001f88c9
- (void)viewDidLoad;	// IMP=0x00000000001f83b0
- (void)preflightWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001f7aa8
@property(readonly, nonatomic) unsigned long long operation;
- (id)initWithFlowController:(id)arg1 context:(id)arg2;	// IMP=0x00000000001f7997

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
