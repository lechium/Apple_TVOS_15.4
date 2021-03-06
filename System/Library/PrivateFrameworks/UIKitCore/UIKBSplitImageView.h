//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSLayoutConstraint, NSString, UIImageView;

__attribute__((visibility("hidden")))
@interface UIKBSplitImageView
{
    _Bool _canStretchAsFullWidth;	// 8 = 0x8
    UIImageView *_fullView;	// 16 = 0x10
    UIImageView *_splitLeft;	// 24 = 0x18
    UIImageView *_splitRight;	// 32 = 0x20
    NSString *_currentFilterType;	// 40 = 0x28
    NSArray *_splitConstraints;	// 48 = 0x30
    NSLayoutConstraint *_leftWidthConstraint;	// 56 = 0x38
    NSLayoutConstraint *_rightWidthConstraint;	// 64 = 0x40
}

@property(retain, nonatomic) NSString *filterType; // @synthesize filterType=_currentFilterType;
- (void)clearImages;	// IMP=0x00000000008a1e2a
- (void)setImage:(id)arg1 cachedWidth:(double)arg2 keyplane:(id)arg3;	// IMP=0x00000000008a1a11
- (void)setImage:(id)arg1 splitLeft:(id)arg2 splitRight:(id)arg3 keyplane:(id)arg4;	// IMP=0x00000000008a17a6
- (void)setContentsMultiplyColor:(id)arg1;	// IMP=0x00000000008a16dd
- (void)insertSubviewAtBottom:(id)arg1;	// IMP=0x00000000008a16ab
- (void)prepareForDisplay:(_Bool)arg1;	// IMP=0x00000000008a1256
- (_Bool)_shouldInheritScreenScaleAsContentScaleFactor;	// IMP=0x00000000008a124e
- (void)dealloc;	// IMP=0x00000000008a1097
- (id)initWithFrame:(struct CGRect)arg1 canStretchAsFullWidth:(_Bool)arg2;	// IMP=0x00000000008a1026

@end

