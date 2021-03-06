//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray, UILayoutGuide;

__attribute__((visibility("hidden")))
@interface _MKPlaceBusinessInfoRow
{
    _Bool _needToRecalculateWidth;	// 8 = 0x8
    unsigned long long _numberOfColumns;	// 16 = 0x10
    NSMutableArray *_labels;	// 24 = 0x18
    NSArray *_constraints;	// 32 = 0x20
    UILayoutGuide *_leftColumnGuide;	// 40 = 0x28
    UILayoutGuide *_rightColumnGuide;	// 48 = 0x30
    double _width;	// 56 = 0x38
    NSArray *_items;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000007fe0
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void)layoutSubviews;	// IMP=0x0000000000007f21
- (void)_createConstraints;	// IMP=0x0000000000006fcb
- (void)_updateFontAndTextColor:(id)arg1;	// IMP=0x0000000000006d49
- (void)infoCardThemeChanged;	// IMP=0x0000000000006cd8
- (void)_contentSizeDidChange;	// IMP=0x00000000000069dd
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000065a2

@end

