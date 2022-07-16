//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIPickerTableView, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface UIPickerTableViewCell
{
    UITapGestureRecognizer *_tap;	// 112 = 0x70
    UIPickerTableView *pickerTable;	// 120 = 0x78
}

+ (id)_nonCenterCellDigitFont;	// IMP=0x0000000000ad7711
+ (id)_centerCellDigitFont;	// IMP=0x0000000000ad76b1
+ (id)_nonCenterCellFont;	// IMP=0x0000000000ad765c
+ (id)_centerCellFont;	// IMP=0x0000000000ad7607
+ (void)_resetFontCacheForLegitbilityWeight:(long long)arg1;	// IMP=0x0000000000ad759a
- (void).cxx_destruct;	// IMP=0x0000000000ad78ae
@property(nonatomic) UIPickerTableView *pickerTable; // @synthesize pickerTable;
- (void)_tapAction:(id)arg1;	// IMP=0x0000000000ad780b
- (void)_setIsCenterCell:(_Bool)arg1 shouldModifyAlphaOfView:(_Bool)arg2;	// IMP=0x0000000000ad7805
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000ad7771

@end

