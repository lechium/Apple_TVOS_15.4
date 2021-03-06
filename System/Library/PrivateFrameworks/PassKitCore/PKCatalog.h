//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>
#import <PassKitCore/PKCloudStoreCoding-Protocol.h>

@class NSDate, NSMutableArray;

@interface PKCatalog : NSObject <NSCopying, NSSecureCoding, PKCloudStoreCoding>
{
    NSMutableArray *_groups;	// 8 = 0x8
    NSDate *_timestamp;	// 16 = 0x10
}

+ (id)catalogWithLocalCatalog:(id)arg1 ubiquitousCatalog:(id)arg2;	// IMP=0x000000000033f103
+ (id)recordNamePrefix;	// IMP=0x000000000033f0f6
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000033e6b7
+ (id)catalogWithContentsOfURL:(id)arg1 nonUbiquitousCatalogURL:(id)arg2 directoryCoordinator:(id)arg3;	// IMP=0x000000000033d5b3
+ (id)catalogWithContentsOfURL:(id)arg1 nonUbiquitousCatalogURL:(id)arg2;	// IMP=0x000000000033d59e
- (void).cxx_destruct;	// IMP=0x000000000033f1b5
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSMutableArray *groups; // @synthesize groups=_groups;
- (unsigned long long)itemType;	// IMP=0x000000000033f0eb
- (id)primaryIdentifier;	// IMP=0x000000000033f0de
- (id)recordTypesAndNamesForCodingType:(unsigned long long)arg1;	// IMP=0x000000000033efc0
- (void)encodeWithCloudStoreCoder:(id)arg1 codingType:(unsigned long long)arg2;	// IMP=0x000000000033ee6b
- (void)applyPropertiesFromCloudStoreRecord:(id)arg1;	// IMP=0x000000000033ee65
- (id)initWithCloudStoreCoder:(id)arg1;	// IMP=0x000000000033ebed
- (void)shuffle:(int)arg1;	// IMP=0x000000000033ea91
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000033ea23
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000033e7ef
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000033e6bf
- (id)description;	// IMP=0x000000000033e68a
- (id)allGroupIDs;	// IMP=0x000000000033e4da
- (_Bool)isNewerThanCatalog:(id)arg1;	// IMP=0x000000000033e442
- (_Bool)isEquivalentToCatalog:(id)arg1;	// IMP=0x000000000033e312
- (void)writeToURL:(id)arg1 nonUbiquitousCatalogURL:(id)arg2 atomically:(_Bool)arg3;	// IMP=0x000000000033dee0
- (id)init;	// IMP=0x000000000033d4fd

@end

