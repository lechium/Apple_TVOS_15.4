//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface IXPlaceholderAttributes : NSObject
{
    _Bool _launchProhibited;	// 8 = 0x8
    _Bool _watchOnlyApp;	// 9 = 0x9
    _Bool _runsIndependentlyOfCompanionApp;	// 10 = 0xa
    _Bool _arcadeApp;	// 11 = 0xb
    NSString *_bundleVersion;	// 16 = 0x10
    NSDictionary *_extensionDictionary;	// 24 = 0x18
    NSDictionary *_exAppExtensionAttributes;	// 32 = 0x20
    NSString *_minimumOSVersion;	// 40 = 0x28
    NSDictionary *_requiredDeviceCapabilities;	// 48 = 0x30
    NSArray *_sbAppTags;	// 56 = 0x38
    NSArray *_lsCounterpartIdentifiers;	// 64 = 0x40
    NSString *_sbIconMasqueradeIdentifier;	// 72 = 0x48
    NSString *_companionBundleIdentifierForWatchApp;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000000ba3d
- (void).cxx_destruct;	// IMP=0x002000000000d600
@property(nonatomic) _Bool arcadeApp; // @synthesize arcadeApp=_arcadeApp;
@property(nonatomic) _Bool runsIndependentlyOfCompanionApp; // @synthesize runsIndependentlyOfCompanionApp=_runsIndependentlyOfCompanionApp;
@property(nonatomic) _Bool watchOnlyApp; // @synthesize watchOnlyApp=_watchOnlyApp;
@property(copy, nonatomic) NSString *companionBundleIdentifierForWatchApp; // @synthesize companionBundleIdentifierForWatchApp=_companionBundleIdentifierForWatchApp;
@property(copy, nonatomic) NSString *sbIconMasqueradeIdentifier; // @synthesize sbIconMasqueradeIdentifier=_sbIconMasqueradeIdentifier;
@property(copy, nonatomic) NSArray *lsCounterpartIdentifiers; // @synthesize lsCounterpartIdentifiers=_lsCounterpartIdentifiers;
@property(copy, nonatomic) NSArray *sbAppTags; // @synthesize sbAppTags=_sbAppTags;
@property(copy, nonatomic) NSDictionary *requiredDeviceCapabilities; // @synthesize requiredDeviceCapabilities=_requiredDeviceCapabilities;
@property(copy, nonatomic) NSString *minimumOSVersion; // @synthesize minimumOSVersion=_minimumOSVersion;
@property(copy, nonatomic) NSDictionary *exAppExtensionAttributes; // @synthesize exAppExtensionAttributes=_exAppExtensionAttributes;
@property(copy, nonatomic) NSDictionary *extensionDictionary; // @synthesize extensionDictionary=_extensionDictionary;
@property(copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(nonatomic) _Bool launchProhibited; // @synthesize launchProhibited=_launchProhibited;
- (id)description;	// IMP=0x001000000000d435
- (id)infoPlistContent;	// IMP=0x001000000000d136
- (void)setRequiredDeviceCapabilitiesWithArray:(id)arg1;	// IMP=0x001000000000ceef
- (id)initWithInfoPlistDictionary:(id)arg1;	// IMP=0x001000000000c881
- (id)initWithInfoPlistFromBundle:(struct __CFBundle *)arg1 error:(id *)arg2;	// IMP=0x001000000000c7ea
- (id)initWithInfoPlistFromBundleURL:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000c735
- (id)_plistKeys;	// IMP=0x001000000000c693
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000000c428
- (unsigned long long)hash;	// IMP=0x001000000000c1b7
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000ba45
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000000b796
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000b47a
- (id)init;	// IMP=0x001000000000b44b

@end

