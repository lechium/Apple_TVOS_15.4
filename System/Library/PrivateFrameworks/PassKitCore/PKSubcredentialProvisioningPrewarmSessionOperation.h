//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PKSubcredentialProvisioningPrewarmSessionOperation
{
    _Bool _operationWasCancelled;	// 8 = 0x8
}

- (void)appletSubcredentialPairingSession:(id)arg1 didFinishPreWarmWithResult:(id)arg2;	// IMP=0x0000000000285e0c
- (void)session:(id)arg1 didChangeState:(unsigned long long)arg2;	// IMP=0x0000000000285d30
- (id)issuerName;	// IMP=0x0000000000285ca9
- (void)cancelOperation;	// IMP=0x0000000000285bf4
- (_Bool)canCancelOperation;	// IMP=0x0000000000285bec
- (void)startPrewarming;	// IMP=0x0000000000285aee
- (void)performOperation;	// IMP=0x00000000002859c4

@end

