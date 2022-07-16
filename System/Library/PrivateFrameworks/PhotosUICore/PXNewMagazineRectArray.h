//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PXNewMagazineGrid;

@interface PXNewMagazineRectArray : NSObject
{
    unsigned long long _currentIndex;	// 8 = 0x8
    unsigned long long _size;	// 16 = 0x10
    PXNewMagazineGrid *_tileGrid;	// 24 = 0x18
    _Bool _isPerfectEnding;	// 32 = 0x20
    double _score;	// 40 = 0x28
    unsigned long long _endingType;	// 48 = 0x30
    struct PXMagazineRect *_rects;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000005709c2
@property(readonly, nonatomic) struct PXMagazineRect *rects; // @synthesize rects=_rects;
@property(nonatomic) unsigned long long endingType; // @synthesize endingType=_endingType;
@property(nonatomic) double score; // @synthesize score=_score;
- (_Bool)isEqualToRectArray:(id)arg1;	// IMP=0x00000000005708f0
- (_Bool)nextEmptyTileX:(long long *)arg1 Y:(long long *)arg2 maxWidth:(long long *)arg3;	// IMP=0x00000000005708c4
- (_Bool)isGoodEnding;	// IMP=0x00000000005708ae
- (_Bool)isPerfectEnding;	// IMP=0x0000000000570886
- (double)tileDensity;	// IMP=0x00000000005707f0
@property(readonly, nonatomic) unsigned long long count;
- (struct PXMagazineRect)rectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000005707c5
- (void)removeLastRect;	// IMP=0x000000000057071a
- (void)addRect:(struct PXMagazineRect)arg1;	// IMP=0x000000000057068a
- (unsigned long long)rowsUsed;	// IMP=0x0000000000570614
- (void)reset;	// IMP=0x00000000005705d6
- (id)immutableCopyForCurrentRectsCount;	// IMP=0x0000000000570542
- (void)dealloc;	// IMP=0x0000000000570508
- (id)initWithSize:(unsigned long long)arg1 tileGrid:(id)arg2;	// IMP=0x0000000000570481

@end

