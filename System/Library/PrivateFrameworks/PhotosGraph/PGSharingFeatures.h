//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/NSSecureCoding-Protocol.h>

@class NSArray;

@interface PGSharingFeatures : NSObject <NSSecureCoding>
{
    NSArray *_classes;	// 8 = 0x8
    NSArray *_momentFeatureVectors;	// 16 = 0x10
    NSArray *_assetFeatureVectors;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000405b82
- (void).cxx_destruct;	// IMP=0x0000000000405b4f
@property(readonly, nonatomic) NSArray *assetFeatureVectors; // @synthesize assetFeatureVectors=_assetFeatureVectors;
@property(readonly, nonatomic) NSArray *momentFeatureVectors; // @synthesize momentFeatureVectors=_momentFeatureVectors;
@property(readonly, nonatomic) NSArray *classes; // @synthesize classes=_classes;
- (id)description;	// IMP=0x0000000000405a67
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004059e4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000405815
- (id)initWithClasses:(id)arg1 momentFeatureVectors:(id)arg2 assetFeatureVectors:(id)arg3;	// IMP=0x000000000040575e

@end

