//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CDPDBackupIDMSErrorProvider
{
}

- (void)handleSoftLimitError:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000024811
- (void)handleHardLimitError:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000024631
- (id)recordNotFoundErrorWithUnderlyingError:(id)arg1;	// IMP=0x0000000000024565
- (id)hardLimitErrorForRecord:(id)arg1;	// IMP=0x0000000000024209
- (id)globalHardLimitErrorWithRecord:(id)arg1;	// IMP=0x0000000000023ec7
- (id)globalHardLimitError;	// IMP=0x0000000000023bf4
- (id)cooldownErrorWithUnderlyingError:(id)arg1;	// IMP=0x0000000000023934
- (_Bool)supportsErrorPresentation;	// IMP=0x000000000002392c

@end

