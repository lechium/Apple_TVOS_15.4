//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Trial/NSCopying-Protocol.h>

@class NSString;
@protocol TRIAssetId;

@interface TRIAssetIdFactorName : NSObject <NSCopying>
{
    NSString<TRIAssetId> *_assetId;	// 8 = 0x8
    NSString *_factorName;	// 16 = 0x10
}

+ (id)nameWithAssetId:(id)arg1 factorName:(id)arg2;	// IMP=0x00000000000484f7
- (void).cxx_destruct;	// IMP=0x000000000004885b
@property(readonly, nonatomic) NSString *factorName; // @synthesize factorName=_factorName;
@property(readonly, nonatomic) NSString<TRIAssetId> *assetId; // @synthesize assetId=_assetId;
- (id)init;	// IMP=0x0000000000048841
- (id)description;	// IMP=0x00000000000487fd
- (unsigned long long)hash;	// IMP=0x00000000000487b6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004874e
- (_Bool)isEqualToName:(id)arg1;	// IMP=0x0000000000048610
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000048605
- (id)copyWithReplacementFactorName:(id)arg1;	// IMP=0x00000000000485b4
- (id)copyWithReplacementAssetId:(id)arg1;	// IMP=0x0000000000048563
- (id)initWithAssetId:(id)arg1 factorName:(id)arg2;	// IMP=0x00000000000483e9

@end

