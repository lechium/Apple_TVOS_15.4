//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface BKSMutableHIDEventHitTestLayerInformation
{
    _Bool _backgroundStatisticsValid;	// 298 = 0x12a
}

@property(nonatomic) _Bool backgroundStatisticsValid; // @synthesize backgroundStatisticsValid=_backgroundStatisticsValid;
@property(copy, nonatomic) NSArray *maximumBackgroundColor; // @dynamic maximumBackgroundColor;
@property(copy, nonatomic) NSArray *minimumBackgroundColor; // @dynamic minimumBackgroundColor;
@property(nonatomic) float backgroundStandardDeviation; // @dynamic backgroundStandardDeviation;
@property(nonatomic) float backgroundAverage; // @dynamic backgroundAverage;
@property(nonatomic) float backgroundMaximum; // @dynamic backgroundMaximum;
@property(nonatomic) float backgroundMinimum; // @dynamic backgroundMinimum;
@property(nonatomic) _Bool detectedOcclusion; // @dynamic detectedOcclusion;
@property(nonatomic) _Bool hasInsecureFilter; // @dynamic hasInsecureFilter;
@property(nonatomic) float cumulativeOpacity; // @dynamic cumulativeOpacity;
@property(nonatomic) struct CATransform3D cumulativeContentsTransform; // @dynamic cumulativeContentsTransform;
@property(nonatomic) struct CATransform3D cumulativeLayerTransform; // @dynamic cumulativeLayerTransform;
@property(nonatomic) struct CATransform3D cumulativeTransform; // @dynamic cumulativeTransform;
@property(nonatomic) unsigned long long validMask; // @dynamic validMask;

@end

