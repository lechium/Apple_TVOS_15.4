//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface CKDTokenRegistrationURLRequest
{
    _Bool _skipBundleIDCheck;	// 8 = 0x8
    NSData *_apsToken;	// 16 = 0x10
    NSString *_apsEnvironmentString;	// 24 = 0x18
    NSString *_bundleID;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001bbb18
@property(nonatomic) _Bool skipBundleIDCheck; // @synthesize skipBundleIDCheck=_skipBundleIDCheck;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSString *apsEnvironmentString; // @synthesize apsEnvironmentString=_apsEnvironmentString;
@property(retain, nonatomic) NSData *apsToken; // @synthesize apsToken=_apsToken;
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x00000000001bba81
- (id)sourceApplicationSecondaryIdentifier;	// IMP=0x00000000001bba79
- (id)applicationBundleIdentifierForNetworkAttribution;	// IMP=0x00000000001bba6c
- (id)applicationBundleIdentifierForContainerAccess;	// IMP=0x00000000001bba5f
- (id)generateRequestOperations;	// IMP=0x00000000001bb558
- (id)requestOperationClasses;	// IMP=0x00000000001bb4ec
- (_Bool)requiresTokenRegistration;	// IMP=0x00000000001bb4e4
- (id)flowControlKey;	// IMP=0x00000000001bb4d7
- (id)initWithOperation:(id)arg1 apsToken:(id)arg2 apsEnvironmentString:(id)arg3 bundleID:(id)arg4 skipBundleIDCheck:(_Bool)arg5;	// IMP=0x00000000001bb3f0

@end

