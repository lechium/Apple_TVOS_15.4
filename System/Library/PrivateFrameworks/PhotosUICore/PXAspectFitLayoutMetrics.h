//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXAspectFitLayoutMetrics
{
    double _interTileSpacing;	// 8 = 0x8
    long long _minTilesPerRow;	// 16 = 0x10
    long long _maxTilesPerRow;	// 24 = 0x18
    double _minRowAspectRatio;	// 32 = 0x20
    struct UIEdgeInsets _contentInsets;	// 40 = 0x28
}

@property(nonatomic) double minRowAspectRatio; // @synthesize minRowAspectRatio=_minRowAspectRatio;
@property(nonatomic) long long maxTilesPerRow; // @synthesize maxTilesPerRow=_maxTilesPerRow;
@property(nonatomic) long long minTilesPerRow; // @synthesize minTilesPerRow=_minTilesPerRow;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) double interTileSpacing; // @synthesize interTileSpacing=_interTileSpacing;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000083f48
- (id)init;	// IMP=0x0000000000083ee1

@end

