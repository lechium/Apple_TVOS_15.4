//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TipsCore/NSCopying-Protocol.h>
#import <TipsCore/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSString, TPSAssetSizes;

@interface TPSContentPackage : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_language;	// 8 = 0x8
    NSArray *_orderedCollectionIdentifiers;	// 16 = 0x10
    NSDictionary *_collectionMap;	// 24 = 0x18
    NSDictionary *_tipMap;	// 32 = 0x20
    TPSAssetSizes *_assetSizes;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000018a9c
- (void).cxx_destruct;	// IMP=0x000000000001954a
@property(retain, nonatomic) TPSAssetSizes *assetSizes; // @synthesize assetSizes=_assetSizes;
@property(retain, nonatomic) NSDictionary *tipMap; // @synthesize tipMap=_tipMap;
@property(retain, nonatomic) NSDictionary *collectionMap; // @synthesize collectionMap=_collectionMap;
@property(retain, nonatomic) NSArray *orderedCollectionIdentifiers; // @synthesize orderedCollectionIdentifiers=_orderedCollectionIdentifiers;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
- (id)debugDescription;	// IMP=0x0000000000019232
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000190e6
@property(readonly, nonatomic) NSArray *orderedCollections;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000018bd6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000018aa4

@end

