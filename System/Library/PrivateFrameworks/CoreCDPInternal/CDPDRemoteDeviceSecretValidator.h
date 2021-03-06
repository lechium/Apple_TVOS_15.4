//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CDPDRemoteDeviceSecretValidator
{
    CDUnknownBlockType _requestToJoinCompletion;	// 8 = 0x8
    _Bool _isWaitingForRemoteApproval;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000e601
- (void)supportedEscapeOfferMaskCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e5a9
- (void)resetAccountCDPState;	// IMP=0x000000000000e4bc
- (void)cancelApproveFromAnotherDevice;	// IMP=0x000000000000e440
- (id)_decoratedDelegate;	// IMP=0x000000000000e375
- (void)validateCustodianRecoveryInfo:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000e18d
- (void)approveFromAnotherDeviceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000dd1d
- (void)setValidSecretHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000dbab

@end

