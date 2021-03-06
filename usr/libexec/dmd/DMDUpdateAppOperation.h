//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DMDUpdateAppOperation
{
    _Bool _didPromptUser;	// 8 = 0x8
}

+ (id)requiredEntitlements;	// IMP=0x004000000006ccf7
+ (id)whitelistedClassesForRequest;	// IMP=0x001000000006cc3c
@property(nonatomic) _Bool didPromptUser; // @synthesize didPromptUser=_didPromptUser;
- (void)_endOperationWithBundleIdentifier:(id)arg1;	// IMP=0x001000000006e1ba
- (void)_setState:(unsigned long long)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x001000000006e0b2
- (void)_showUpdateFailurePromptIfNeededForRequest:(id)arg1 metadata:(id)arg2;	// IMP=0x001000000006ddd1
- (void)_startUpdateAppForRequest:(id)arg1 metadata:(id)arg2;	// IMP=0x001000000006d8ed
- (void)_promptIfNeededAndUpdateAppForRequest:(id)arg1 metadata:(id)arg2;	// IMP=0x001000000006d2d6
- (void)_resumeUpdateForBundleIdentifier:(id)arg1;	// IMP=0x001000000006d16a
- (void)_runWithRequest:(id)arg1 metadata:(id)arg2;	// IMP=0x001000000006cf25
- (void)runWithRequest:(id)arg1;	// IMP=0x001000000006cdc6
- (void)endOperationWithError:(id)arg1;	// IMP=0x001000000006cd65
- (void)endOperationWithResultObject:(id)arg1;	// IMP=0x001000000006cd04

@end

