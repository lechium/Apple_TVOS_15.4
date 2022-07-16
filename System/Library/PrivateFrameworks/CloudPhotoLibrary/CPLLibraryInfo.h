//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>
#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class CPLAccountFlags, CPLFeatureVersionHistory, CPLMomentShare, NSData, NSDictionary, NSNumber;

@interface CPLLibraryInfo : NSObject <NSSecureCoding, NSCopying>
{
    NSDictionary *_assetCounts;	// 8 = 0x8
    CPLFeatureVersionHistory *_featureVersionHistory;	// 16 = 0x10
    NSData *_accountFlagsData;	// 24 = 0x18
    CPLMomentShare *_momentShare;	// 32 = 0x20
    NSNumber *_featureCompatibleVersion;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000d8726
+ (id)cplAdditionalSecureClassesForProperty:(id)arg1;	// IMP=0x000000000005b10f
- (void).cxx_destruct;	// IMP=0x00000000000d816a
@property(copy, nonatomic) NSNumber *featureCompatibleVersion; // @synthesize featureCompatibleVersion=_featureCompatibleVersion;
@property(retain, nonatomic) CPLMomentShare *momentShare; // @synthesize momentShare=_momentShare;
@property(copy, nonatomic) NSData *accountFlagsData; // @synthesize accountFlagsData=_accountFlagsData;
@property(retain, nonatomic) CPLFeatureVersionHistory *featureVersionHistory; // @synthesize featureVersionHistory=_featureVersionHistory;
@property(copy, nonatomic) NSDictionary *assetCounts; // @synthesize assetCounts=_assetCounts;
- (unsigned long long)hash;	// IMP=0x00000000000d806d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d7e7b
@property(readonly, nonatomic) CPLAccountFlags *accountFlags;
- (id)prettyDescriptionWithAnchorDesciptionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d7ac1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d79ea
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d7941
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d76ad

@end

