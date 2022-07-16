//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _TVShelfViewLayout;

__attribute__((visibility("hidden")))
@interface _TVShelfLayoutHelper : NSObject
{
    long long _sectionCount;	// 8 = 0x8
    long long *_sectionOffsets;	// 16 = 0x10
    struct CGRect *_cellFrames;	// 24 = 0x18
    struct CGRect *_headerFrames;	// 32 = 0x20
    struct UIEdgeInsets *_sectionInsets;	// 40 = 0x28
    _TVShelfViewLayout *_shelfViewLayout;	// 48 = 0x30
    long long _actualRowCount;	// 56 = 0x38
    double _tallestInsetTop;	// 64 = 0x40
    double _tallestInsetBottom;	// 72 = 0x48
    double _tallestHeaderHeight;	// 80 = 0x50
    double _tallestColumnHeight;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000009a37a
@property(readonly, nonatomic) double tallestColumnHeight; // @synthesize tallestColumnHeight=_tallestColumnHeight;
@property(readonly, nonatomic) double tallestHeaderHeight; // @synthesize tallestHeaderHeight=_tallestHeaderHeight;
@property(readonly, nonatomic) double tallestInsetBottom; // @synthesize tallestInsetBottom=_tallestInsetBottom;
@property(readonly, nonatomic) double tallestInsetTop; // @synthesize tallestInsetTop=_tallestInsetTop;
@property(readonly, nonatomic) long long actualRowCount; // @synthesize actualRowCount=_actualRowCount;
@property(readonly, nonatomic) __weak _TVShelfViewLayout *shelfViewLayout; // @synthesize shelfViewLayout=_shelfViewLayout;
- (void)_freeBuffers;	// IMP=0x000000000009a2c6
- (void)_compute;	// IMP=0x0000000000099675
- (struct CGRect)frameForItemAtIndexPath:(id)arg1;	// IMP=0x00000000000995d7
- (struct UIEdgeInsets)insetForSection:(long long)arg1;	// IMP=0x000000000009959c
- (struct CGRect)frameForHeaderInSection:(long long)arg1;	// IMP=0x0000000000099561
- (void)dealloc;	// IMP=0x0000000000099523
- (id)initWithShelfViewLayout:(id)arg1;	// IMP=0x00000000000994af

@end

