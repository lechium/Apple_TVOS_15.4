//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOComposedWalkingRouteSegment;

@interface MNTransitWalkingSegmentInstruction
{
    GEOComposedWalkingRouteSegment *_walkingSegment;	// 96 = 0x60
}

+ (id)instructionForWalkingSegment:(id)arg1 context:(long long)arg2;	// IMP=0x0000000000005383
- (void).cxx_destruct;	// IMP=0x000000000000563d
@property(readonly, nonatomic) GEOComposedWalkingRouteSegment *walkingSegment; // @synthesize walkingSegment=_walkingSegment;
- (id)overridenInstructionsMapping;	// IMP=0x0000000000005624
- (id)instructionSet;	// IMP=0x0000000000005476
- (id)initWithWalkingSegment:(id)arg1 context:(long long)arg2;	// IMP=0x00000000000053db

@end

