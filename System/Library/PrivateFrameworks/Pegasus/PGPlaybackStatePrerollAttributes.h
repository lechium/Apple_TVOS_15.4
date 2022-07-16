//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, UIColor;

@interface PGPlaybackStatePrerollAttributes : NSObject
{
    NSDictionary *_dictionaryRepresentation;	// 8 = 0x8
}

+ (id)prerollAttributesForSponsoredContentWithRequiredLinearPlaybackEndTime:(double)arg1 preferredTintColor:(id)arg2;	// IMP=0x000000000002d856
+ (id)prerollAttributesForAdContentWithRequiredLinearPlaybackEndTime:(double)arg1 preferredTintColor:(id)arg2;	// IMP=0x000000000002d7f6
- (void).cxx_destruct;	// IMP=0x000000000002e2f3
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation; // @synthesize dictionaryRepresentation=_dictionaryRepresentation;
- (id)preferredTintColorDescription;	// IMP=0x000000000002e113
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000002e026
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000002dfd6
- (id)succinctDescriptionBuilder;	// IMP=0x000000000002dfba
- (id)succinctDescription;	// IMP=0x000000000002df6a
- (id)description;	// IMP=0x000000000002df56
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002dea4
@property(readonly, nonatomic) double requiredLinearPlaybackEndTime;
@property(readonly, nonatomic) long long contentType;
@property(readonly, nonatomic) UIColor *preferredTintColor;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000002db2f
- (id)initWithRequiredLinearPlaybackEndTime:(double)arg1 preferredTintColor:(id)arg2 contentType:(long long)arg3;	// IMP=0x000000000002d8b6

@end

