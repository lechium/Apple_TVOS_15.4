//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface _UITiltMotionEffect
{
    double _maximumHorizontalTiltAngle;	// 8 = 0x8
    double _maximumVerticalTiltAngle;	// 16 = 0x10
    double _rotatingSphereRadius;	// 24 = 0x18
}

@property(nonatomic) double rotatingSphereRadius; // @synthesize rotatingSphereRadius=_rotatingSphereRadius;
@property(nonatomic) double maximumVerticalTiltAngle; // @synthesize maximumVerticalTiltAngle=_maximumVerticalTiltAngle;
@property(nonatomic) double maximumHorizontalTiltAngle; // @synthesize maximumHorizontalTiltAngle=_maximumHorizontalTiltAngle;
- (id)description;	// IMP=0x0000000000a6d0b2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a6d04e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000a6cf88
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000a6cea7
- (id)keyPathsAndRelativeValuesForViewerOffset:(struct UIOffset)arg1;	// IMP=0x0000000000a6cb53

@end

