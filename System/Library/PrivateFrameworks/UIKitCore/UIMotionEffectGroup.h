//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface UIMotionEffectGroup
{
    NSArray *_motionEffects;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000a6b572
@property(copy, nonatomic) NSArray *motionEffects; // @synthesize motionEffects=_motionEffects;
- (id)debugDescription;	// IMP=0x0000000000a6b4d4
- (id)description;	// IMP=0x0000000000a6b423
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000a6b380
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000a6b356
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a6b322
- (id)keyPathsAndRelativeValuesForViewerOffset:(struct UIOffset)arg1;	// IMP=0x0000000000a6b2a5
- (id)_keyPathsAndRelativeValuesForPose:(id)arg1;	// IMP=0x0000000000a6af13

@end
