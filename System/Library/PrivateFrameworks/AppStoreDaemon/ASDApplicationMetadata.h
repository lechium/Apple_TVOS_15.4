//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSCopying-Protocol.h>
#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface ASDApplicationMetadata : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _deviceBasedVPP;	// 8 = 0x8
    _Bool _isBeta;	// 9 = 0x9
    NSString *_accountName;	// 16 = 0x10
    NSNumber *_accountID;	// 24 = 0x18
    NSString *_altDSID;	// 32 = 0x20
    NSString *_artworkPath;	// 40 = 0x28
    NSString *_bundleID;	// 48 = 0x30
    NSString *_bundleVersion;	// 56 = 0x38
    NSString *_cohort;	// 64 = 0x40
    NSString *_deviceVendorID;	// 72 = 0x48
    NSNumber *_downloaderID;	// 80 = 0x50
    NSNumber *_externalVersionIdentifier;	// 88 = 0x58
    NSNumber *_familyID;	// 96 = 0x60
    NSNumber *_installOrder;	// 104 = 0x68
    NSNumber *_itemID;	// 112 = 0x70
    NSString *_itemName;	// 120 = 0x78
    NSNumber *_purchaserDSID;	// 128 = 0x80
    NSNumber *_storeFront;	// 136 = 0x88
    NSString *_vendorName;	// 144 = 0x90
    NSString *_shortVersion;	// 152 = 0x98
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005ddce
- (void).cxx_destruct;	// IMP=0x000000000005e63d
@property(copy, nonatomic) NSString *shortVersion; // @synthesize shortVersion=_shortVersion;
@property(copy, nonatomic) NSString *vendorName; // @synthesize vendorName=_vendorName;
@property(copy, nonatomic) NSNumber *storeFront; // @synthesize storeFront=_storeFront;
@property(copy, nonatomic) NSNumber *purchaserDSID; // @synthesize purchaserDSID=_purchaserDSID;
@property(copy, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(copy, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(copy, nonatomic) NSNumber *installOrder; // @synthesize installOrder=_installOrder;
@property(nonatomic) _Bool isBeta; // @synthesize isBeta=_isBeta;
@property(copy, nonatomic) NSNumber *familyID; // @synthesize familyID=_familyID;
@property(copy, nonatomic) NSNumber *externalVersionIdentifier; // @synthesize externalVersionIdentifier=_externalVersionIdentifier;
@property(copy, nonatomic) NSNumber *downloaderID; // @synthesize downloaderID=_downloaderID;
@property(nonatomic) _Bool deviceBasedVPP; // @synthesize deviceBasedVPP=_deviceBasedVPP;
@property(copy, nonatomic) NSString *deviceVendorID; // @synthesize deviceVendorID=_deviceVendorID;
@property(copy, nonatomic) NSString *cohort; // @synthesize cohort=_cohort;
@property(copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) NSString *artworkPath; // @synthesize artworkPath=_artworkPath;
@property(copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(copy, nonatomic) NSNumber *accountID; // @synthesize accountID=_accountID;
@property(copy, nonatomic) NSString *accountName; // @synthesize accountName=_accountName;
- (id)description;	// IMP=0x000000000005e3f3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005e209
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005ddd6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005db3c
- (id)initWithBundleID:(id)arg1;	// IMP=0x000000000005dad1

@end

