//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccessoryVersion, NSArray, NSString;

@interface HMDVendorModelEntry : HMFObject
{
    NSString *_model;	// 8 = 0x8
    NSString *_manufacturer;	// 16 = 0x10
    NSString *_appBundleID;	// 24 = 0x18
    NSString *_appStoreID;	// 32 = 0x20
    HMDAccessoryVersion *_firmwareVersion;	// 40 = 0x28
    NSString *_productData;	// 48 = 0x30
    NSArray *_productDataAlternates;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000009e24f7
@property(readonly, nonatomic) NSArray *productDataAlternates; // @synthesize productDataAlternates=_productDataAlternates;
@property(readonly, nonatomic) NSString *productData; // @synthesize productData=_productData;
@property(readonly, nonatomic) HMDAccessoryVersion *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property(readonly, nonatomic) NSString *appStoreID; // @synthesize appStoreID=_appStoreID;
@property(readonly, nonatomic) NSString *appBundleID; // @synthesize appBundleID=_appBundleID;
@property(readonly, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(readonly, nonatomic) NSString *model; // @synthesize model=_model;
- (unsigned long long)hash;	// IMP=0x00000000009e2219
- (long long)compare:(id)arg1;	// IMP=0x00000000009e2121
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000009e1d83
- (id)attributeDescriptions;	// IMP=0x00000000009e1a99
- (id)initWithManufacturer:(id)arg1 model:(id)arg2 appBundleID:(id)arg3 appStoreID:(id)arg4 firmwareVersion:(id)arg5 productData:(id)arg6 productDataAlternates:(id)arg7;	// IMP=0x00000000009e1897

@end
