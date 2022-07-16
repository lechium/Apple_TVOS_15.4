//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXEditorialLayoutMetrics
{
    _Bool _useSaliency;	// 8 = 0x8
    _Bool _useNewImplementation;	// 9 = 0x9
    unsigned long long _numberOfColumns;	// 16 = 0x10
    double _interTileSpacing;	// 24 = 0x18
    double _headerHeight;	// 32 = 0x20
    unsigned long long _lowerItemCountThreshold;	// 40 = 0x28
    struct UIEdgeInsets _padding;	// 48 = 0x30
}

@property(nonatomic) _Bool useNewImplementation; // @synthesize useNewImplementation=_useNewImplementation;
@property(nonatomic) _Bool useSaliency; // @synthesize useSaliency=_useSaliency;
@property(nonatomic) unsigned long long lowerItemCountThreshold; // @synthesize lowerItemCountThreshold=_lowerItemCountThreshold;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) double interTileSpacing; // @synthesize interTileSpacing=_interTileSpacing;
@property(nonatomic) unsigned long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000008ce1b5
- (id)init;	// IMP=0x00000000008ce12c

@end

