//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSAttributedString, NSString, UIColor, UILabel;

__attribute__((visibility("hidden")))
@interface UIPickerTableViewTitledCell
{
    UILabel *_titleLabel;	// 128 = 0x80
    _Bool _isAttributed;	// 136 = 0x88
    UIColor *_textColor;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000000ad847d
@property(readonly, nonatomic) _Bool _isAttributed; // @synthesize _isAttributed;
@property(readonly, nonatomic) UILabel *_titleLabel; // @synthesize _titleLabel;
- (void)prepareForReuse;	// IMP=0x0000000000ad83fb
@property(retain, nonatomic) NSAttributedString *attributedTitle;
@property(retain, nonatomic) NSString *title;
- (_Bool)_canBeReusedInPickerView;	// IMP=0x0000000000ad8369
- (void)_setIsCenterCell:(_Bool)arg1 shouldModifyAlphaOfView:(_Bool)arg2;	// IMP=0x0000000000ad82cb
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 textColor:(id)arg3 forceTextAlignmentCentered:(_Bool)arg4;	// IMP=0x0000000000ad80d2

@end

