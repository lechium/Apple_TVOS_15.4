//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UILabel;

__attribute__((visibility("hidden")))
@interface UIKBRecentInputCell
{
    UILabel *_label;	// 8 = 0x8
}

+ (id)titleAttributesForRenderConfig:(id)arg1;	// IMP=0x00000000008648ac
+ (id)textColorForRenderConfig:(id)arg1 isSelected:(_Bool)arg2;	// IMP=0x000000000086483b
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)setInputText:(id)arg1;	// IMP=0x00000000008646f2
- (void)layoutSubviews;	// IMP=0x0000000000864629
- (void)setSelected:(_Bool)arg1;	// IMP=0x000000000086458a
- (_Bool)isFocused;	// IMP=0x0000000000864578
- (_Bool)_canFocusProgrammatically;	// IMP=0x0000000000864570
- (void)dealloc;	// IMP=0x000000000086452e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000008644cc

@end

