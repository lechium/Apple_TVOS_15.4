//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface _PXStoryInternalErrorRecoveryAttempter
{
    id _recoveryAttempter;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000058388e
@property(readonly, nonatomic) __weak id recoveryAttempter; // @synthesize recoveryAttempter=_recoveryAttempter;
- (_Bool)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;	// IMP=0x00000000005837f8
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void *)arg5;	// IMP=0x0000000000583753
- (id)description;	// IMP=0x00000000005836c8
- (id)initWithRecoveryAttempter:(id)arg1;	// IMP=0x0000000000583661

@end

