//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UITextMagnifierTimeWeightedPoint : NSObject
{
    int m_index;	// 8 = 0x8
    struct {
        struct CGPoint point;
        double time;
    } m_points[16];	// 16 = 0x10
}

- (struct CGPoint)diffFromLastPoint;	// IMP=0x0000000000e139bd
- (_Bool)isPlacedCarefully;	// IMP=0x0000000000e13963
- (float)distanceCoveredInInterval:(double)arg1 priorTo:(double)arg2;	// IMP=0x0000000000e138a3
- (struct CGSize)displacementInInterval:(double)arg1 priorTo:(double)arg2;	// IMP=0x0000000000e137c6
- (struct CGSize)displacementInInterval:(double)arg1;	// IMP=0x0000000000e13795
- (float)distanceCoveredInInterval:(double)arg1;	// IMP=0x0000000000e13764
- (_Bool)historyCovers:(double)arg1;	// IMP=0x0000000000e136cd
@property(readonly, nonatomic) struct CGPoint weightedPoint;
- (void)addPoint:(struct CGPoint)arg1;	// IMP=0x0000000000e1359c
- (void)clearHistory;	// IMP=0x0000000000e13568

@end

