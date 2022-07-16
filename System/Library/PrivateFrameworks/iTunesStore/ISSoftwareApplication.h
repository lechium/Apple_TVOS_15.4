//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesStore/SSXPCCoding-Protocol.h>

@class NSArray, NSDate, NSNumber, NSString, SSItemContentRating;

@interface ISSoftwareApplication : NSObject <SSXPCCoding>
{
    NSNumber *_accountDSID;	// 8 = 0x8
    NSString *_accountIdentifier;	// 16 = 0x10
    _Bool _beta;	// 24 = 0x18
    NSString *_bundleIdentifier;	// 32 = 0x20
    NSString *_bundleShortVersionString;	// 40 = 0x28
    NSString *_bundleVersion;	// 48 = 0x30
    NSString *_containerPath;	// 56 = 0x38
    SSItemContentRating *_contentRating;	// 64 = 0x40
    NSString *_deviceIdentifierForVendor;	// 72 = 0x48
    NSNumber *_familyAccountIdentifier;	// 80 = 0x50
    _Bool _hasMIDBasedSINF;	// 88 = 0x58
    NSNumber *_itemIdentifier;	// 96 = 0x60
    NSString *_itemName;	// 104 = 0x68
    _Bool _missingRequiredSINF;	// 112 = 0x70
    _Bool _placeholder;	// 113 = 0x71
    _Bool _profileValidated;	// 114 = 0x72
    NSString *_softwareType;	// 120 = 0x78
    NSNumber *_storeFrontIdentifier;	// 128 = 0x80
    NSString *_vendorName;	// 136 = 0x88
    NSNumber *_versionIdentifier;	// 144 = 0x90
    NSArray *_versionOrdering;	// 152 = 0x98
    NSDate *_receiptExpirationDate;	// 160 = 0xa0
    unsigned long long _vppStateFlags;	// 168 = 0xa8
    _Bool _launchProhibited;	// 176 = 0xb0
    _Bool _didCheckLaunchProhibited;	// 177 = 0xb1
    unsigned long long _removableStatus;	// 184 = 0xb8
}

@property(readonly, nonatomic) unsigned long long removableStatus; // @synthesize removableStatus=_removableStatus;
@property(nonatomic) _Bool didCheckLaunchProhibited; // @synthesize didCheckLaunchProhibited=_didCheckLaunchProhibited;
@property(nonatomic, getter=isLaunchProhibited) _Bool launchProhibited; // @synthesize launchProhibited=_launchProhibited;
@property(readonly, nonatomic) NSDate *receiptExpirationDate; // @synthesize receiptExpirationDate=_receiptExpirationDate;
@property(copy, nonatomic) NSArray *versionOrdering; // @synthesize versionOrdering=_versionOrdering;
@property(retain, nonatomic) NSNumber *versionIdentifier; // @synthesize versionIdentifier=_versionIdentifier;
@property(copy, nonatomic) NSString *vendorName; // @synthesize vendorName=_vendorName;
@property(retain, nonatomic) NSNumber *storeFrontIdentifier; // @synthesize storeFrontIdentifier=_storeFrontIdentifier;
@property(copy, nonatomic) NSString *softwareType; // @synthesize softwareType=_softwareType;
@property(nonatomic, getter=isProfileValidated) _Bool profileValidated; // @synthesize profileValidated=_profileValidated;
@property(nonatomic, getter=isPlaceholder) _Bool placeholder; // @synthesize placeholder=_placeholder;
@property(nonatomic) _Bool missingRequiredSINF; // @synthesize missingRequiredSINF=_missingRequiredSINF;
@property(copy, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(retain, nonatomic) NSNumber *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(nonatomic) _Bool hasMIDBasedSINF; // @synthesize hasMIDBasedSINF=_hasMIDBasedSINF;
@property(copy, nonatomic) NSNumber *familyAccountIdentifier; // @synthesize familyAccountIdentifier=_familyAccountIdentifier;
@property(copy, nonatomic) NSString *deviceIdentifierForVendor; // @synthesize deviceIdentifierForVendor=_deviceIdentifierForVendor;
@property(copy, nonatomic) SSItemContentRating *contentRating; // @synthesize contentRating=_contentRating;
@property(copy, nonatomic) NSString *containerPath; // @synthesize containerPath=_containerPath;
@property(copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(copy, nonatomic) NSString *bundleShortVersionString; // @synthesize bundleShortVersionString=_bundleShortVersionString;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic, getter=isBeta) _Bool beta; // @synthesize beta=_beta;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(retain, nonatomic) NSNumber *accountDSID; // @synthesize accountDSID=_accountDSID;
- (void)_loadMetadataFromContainer:(id)arg1;	// IMP=0x0000000000040b1c
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x0000000000040863
- (id)copyXPCEncoding;	// IMP=0x00000000000406f4
- (id)ITunesMetadataDictionary;	// IMP=0x00000000000406af
@property(readonly, nonatomic) unsigned long long vppStateFlags;
- (void)resetVPPStateFlags;	// IMP=0x0000000000040424
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000000401ae
- (id)initWithLaunchServicesApplication:(id)arg1 containerPath:(id)arg2;	// IMP=0x000000000003ffc2
- (id)initWithLaunchServicesApplication:(id)arg1;	// IMP=0x000000000003ff72

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

