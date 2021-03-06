//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIColor;
@protocol _UIColorWellControl;

@interface _UIColorWellVisualStyle
{
    _Bool _supportsAlpha;	// 8 = 0x8
    _Bool _wantsSystemDragAndDrop;	// 9 = 0x9
    _Bool _wantsExtraTouchInsets;	// 10 = 0xa
    id <_UIColorWellControl> _colorWell;	// 16 = 0x10
    UIColor *_selectedColor;	// 24 = 0x18
    NSString *_pickerTitle;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000c0f0a3
@property(nonatomic) _Bool wantsExtraTouchInsets; // @synthesize wantsExtraTouchInsets=_wantsExtraTouchInsets;
@property(nonatomic) _Bool wantsSystemDragAndDrop; // @synthesize wantsSystemDragAndDrop=_wantsSystemDragAndDrop;
@property(nonatomic) _Bool supportsAlpha; // @synthesize supportsAlpha=_supportsAlpha;
@property(retain, nonatomic) NSString *pickerTitle; // @synthesize pickerTitle=_pickerTitle;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(nonatomic) __weak id <_UIColorWellControl> colorWell; // @synthesize colorWell=_colorWell;
- (struct CGSize)intrinsicSizeWithinSize:(struct CGSize)arg1;	// IMP=0x0000000000c0eef7
- (void)setSelectedColor:(id)arg1 notifyingPicker:(_Bool)arg2;	// IMP=0x0000000000c0ee31
- (id)initWithColorWell:(id)arg1;	// IMP=0x0000000000c0edc9

@end

