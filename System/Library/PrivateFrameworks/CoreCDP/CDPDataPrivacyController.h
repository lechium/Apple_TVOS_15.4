//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CDPDataPrivacyController : NSObject
{
}

- (void)_logDataPrivacyStatUpdateError:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001227d
- (void)_checkUseConsentForContext:(id)arg1 shouldContinue:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000012033
- (void)_updateDataPrivacyWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000011efb
- (void)updateDataPrivacyWithContext:(id)arg1 shouldContinue:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000011d66
- (void)statusForDataPrivacyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000011b28

@end
