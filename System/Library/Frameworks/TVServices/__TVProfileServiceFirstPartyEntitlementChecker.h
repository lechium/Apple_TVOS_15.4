//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVServices/TVProfileServiceFromFirstParty-Protocol.h>

@class NSString;

@interface __TVProfileServiceFirstPartyEntitlementChecker : NSObject <TVProfileServiceFromFirstParty>
{
    _Bool _tvsUserOK;	// 8 = 0x8
    _Bool _inquiryOK;	// 9 = 0x9
    _Bool _resetOK;	// 10 = 0xa
    NSString *_bundleID;	// 16 = 0x10
    int _pid;	// 24 = 0x18
}

+ (_Bool)verifyCurrentProcessHasAnyRecognizedEntitlement;	// IMP=0x000000000005d488
+ (_Bool)connectionHasAnyRecognizedEntitlement:(id)arg1;	// IMP=0x000000000005d3be
- (void).cxx_destruct;	// IMP=0x000000000005e01a
- (void)resetAccountIdentifiers;	// IMP=0x000000000005df91
- (void)setAllowedAccess:(_Bool)arg1 toApplicationWithIdentifier:(id)arg2;	// IMP=0x000000000005dee9
- (void)fetchIsApplicationAllowedAccess:(id)arg1 result:(CDUnknownBlockType)arg2;	// IMP=0x000000000005ddf7
- (void)fetchIdentifiersOfEntitledInstalledApplications:(CDUnknownBlockType)arg1;	// IMP=0x000000000005dd0c
- (void)fetchUsersForCurrentProfileInApplication:(id)arg1 result:(CDUnknownBlockType)arg2;	// IMP=0x000000000005dc15
- (void)setEnabledOnDevice:(_Bool)arg1;	// IMP=0x000000000005db76
- (void)fetchIsEnabledOnDevice:(CDUnknownBlockType)arg1;	// IMP=0x000000000005da90
- (void)setSystemFocusedUser:(id)arg1;	// IMP=0x000000000005d9ee
- (void)fetchSystemFocusedUser:(CDUnknownBlockType)arg1;	// IMP=0x000000000005d908
- (void)fetchAllUsers:(CDUnknownBlockType)arg1;	// IMP=0x000000000005d81d
- (id)initWithConnection:(id)arg1;	// IMP=0x000000000005d633

@end

