//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSFileHandle, NSString;

__attribute__((visibility("hidden")))
@interface CDDCloudKitRegistrationMessage
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSFileHandle *_storeFileHandle;	// 16 = 0x10
    NSString *_storePath;	// 24 = 0x18
    NSString *_storeFileProtectionClass;	// 32 = 0x20
    NSString *_storeType;	// 40 = 0x28
    NSString *_storeConfigurationName;	// 48 = 0x30
    NSString *_containerIdentifier;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000017d6fb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000017d5d7
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000017d41f
- (void)dealloc;	// IMP=0x000000000017d381

@end

