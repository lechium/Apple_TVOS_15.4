//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface SFRankingFeedback <NSCopying>
{
    double _blendingDuration;	// 24 = 0x18
    NSArray *_sections;	// 32 = 0x20
    NSString *_l2ModelVersion;	// 40 = 0x28
    NSString *_l3ModelVersion;	// 48 = 0x30
    NSString *_l2ShadowModelVersion;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001b1b1e
- (void).cxx_destruct;	// IMP=0x00000000001b1acb
@property(copy, nonatomic) NSString *l2ShadowModelVersion; // @synthesize l2ShadowModelVersion=_l2ShadowModelVersion;
@property(copy, nonatomic) NSString *l3ModelVersion; // @synthesize l3ModelVersion=_l3ModelVersion;
@property(copy, nonatomic) NSString *l2ModelVersion; // @synthesize l2ModelVersion=_l2ModelVersion;
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) double blendingDuration; // @synthesize blendingDuration=_blendingDuration;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001b1929
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001b174c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001b165e
- (id)initWithSections:(id)arg1 blendingDuration:(double)arg2;	// IMP=0x00000000001b1540

@end

