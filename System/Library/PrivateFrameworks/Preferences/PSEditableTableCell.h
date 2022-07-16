//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/UITextFieldDelegate-Protocol.h>
#import <Preferences/UITextViewDelegate-Protocol.h>

@class NSString, PSListController, UIColor;

@interface PSEditableTableCell <UITextViewDelegate, UITextFieldDelegate>
{
    UIColor *_textColor;	// 120 = 0x78
    id _delegate;	// 128 = 0x80
    _Bool _forceFirstResponder;	// 136 = 0x88
    _Bool _delaySpecifierRelease;	// 137 = 0x89
    SEL _targetSetter;	// 144 = 0x90
    id _realTarget;	// 152 = 0x98
    _Bool _valueChanged;	// 160 = 0xa0
    _Bool _returnKeyTapped;	// 161 = 0xa1
    PSListController *_controllerDelegate;	// 168 = 0xa8
}

+ (long long)cellStyle;	// IMP=0x00000000000a6e17
- (void).cxx_destruct;	// IMP=0x00000000000a8f37
@property(nonatomic) __weak PSListController *controllerDelegate; // @synthesize controllerDelegate=_controllerDelegate;
@property(readonly, nonatomic) _Bool returnKeyTapped; // @synthesize returnKeyTapped=_returnKeyTapped;
- (id)textField;	// IMP=0x00000000000a8ee8
- (void)setPlaceholderText:(id)arg1;	// IMP=0x00000000000a8ed6
- (void)setValue:(id)arg1;	// IMP=0x00000000000a8d04
- (id)value;	// IMP=0x00000000000a8cb4
- (_Bool)_cellIsEditing;	// IMP=0x00000000000a8c85
- (_Bool)isEditing;	// IMP=0x00000000000a8c73
- (_Bool)isTextFieldEditing;	// IMP=0x00000000000a8c2f
- (_Bool)resignFirstResponder;	// IMP=0x00000000000a8b97
- (_Bool)becomeFirstResponder;	// IMP=0x00000000000a8b53
- (_Bool)isFirstResponder;	// IMP=0x00000000000a8b0f
- (_Bool)canResignFirstResponder;	// IMP=0x00000000000a8acb
- (_Bool)canBecomeFirstResponder;	// IMP=0x00000000000a8a87
- (void)layoutSubviews;	// IMP=0x00000000000a87f8
- (void)setDelegate:(id)arg1;	// IMP=0x00000000000a87e4
- (void)setTitle:(id)arg1;	// IMP=0x00000000000a8730
- (void)setCellEnabled:(_Bool)arg1;	// IMP=0x00000000000a8572
- (id)_defaultTextColor;	// IMP=0x00000000000a84b5
- (void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 specifier:(id)arg3;	// IMP=0x00000000000a8433
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x00000000000a83cc
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x00000000000a82ea
- (_Bool)textFieldShouldClear:(id)arg1;	// IMP=0x00000000000a8244
- (void)textFieldDidBeginEditing:(id)arg1;	// IMP=0x00000000000a808b
- (void)_saveForExit;	// IMP=0x00000000000a8079
- (void)_setValueChanged;	// IMP=0x00000000000a7fb8
- (void)cellRemovedFromView;	// IMP=0x00000000000a7f12
- (void)endEditingAndSave;	// IMP=0x00000000000a7db1
- (void)controlChanged:(id)arg1;	// IMP=0x00000000000a7cba
- (_Bool)canReload;	// IMP=0x00000000000a7c8c
- (void)prepareForReuse;	// IMP=0x00000000000a7be0
- (void)refreshCellContentsWithSpecifier:(id)arg1;	// IMP=0x00000000000a6fc7
- (void)dealloc;	// IMP=0x00000000000a6ed1
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;	// IMP=0x00000000000a6e22

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

