//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPDBackupRecoveryErrorProvider-Protocol.h>

@class CDPContext, NSString;
@protocol CDPStateUIProviderInternal;

@interface CDPDBackupErrorProviderImpl : NSObject <CDPDBackupRecoveryErrorProvider>
{
    CDPContext *_context;	// 8 = 0x8
    id <CDPStateUIProviderInternal> _uiProvider;	// 16 = 0x10
    unsigned long long _prevailingSecret;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000033d36
- (void)handleSoftLimitError:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000033d25
- (void)handleHardLimitError:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000033d14
- (id)recordNotFoundErrorWithUnderlyingError:(id)arg1;	// IMP=0x0000000000033d01
- (id)verficationFailedErrorwithUnderlyingError:(id)arg1;	// IMP=0x0000000000033a88
- (id)hardLimitErrorForRecord:(id)arg1;	// IMP=0x0000000000033a75
- (id)globalHardLimitErrorWithRecord:(id)arg1;	// IMP=0x0000000000033a62
- (id)globalHardLimitError;	// IMP=0x0000000000033a4f
- (id)cooldownErrorWithUnderlyingError:(id)arg1;	// IMP=0x00000000000339c2
- (void)setPrevailingSecret:(unsigned long long)arg1;	// IMP=0x00000000000339b8
- (_Bool)supportsErrorPresentation;	// IMP=0x00000000000339b0
- (id)initWithContext:(id)arg1 uiProvider:(id)arg2;	// IMP=0x0000000000033917

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

