//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <TVKit/CAAnimationDelegate-Protocol.h>
#import <TVKit/TVPasscodeDigitViewDelegate-Protocol.h>

@class NSArray, NSString, UIButton;
@protocol TVPasscodeEntryViewDelegate;

@interface TVPasscodeEntryView : UIView <TVPasscodeDigitViewDelegate, CAAnimationDelegate>
{
    _Bool _editable;	// 8 = 0x8
    _Bool _showsDigits;	// 9 = 0x9
    unsigned long long _numberOfDigits;	// 16 = 0x10
    NSString *_text;	// 24 = 0x18
    id <TVPasscodeEntryViewDelegate> _delegate;	// 32 = 0x20
    NSArray *_digitViews;	// 40 = 0x28
    UIButton *_doneButton;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000129ab
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) NSArray *digitViews; // @synthesize digitViews=_digitViews;
@property(nonatomic) __weak id <TVPasscodeEntryViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) _Bool showsDigits; // @synthesize showsDigits=_showsDigits;
@property(readonly, nonatomic) _Bool editable; // @synthesize editable=_editable;
@property(readonly, nonatomic) unsigned long long numberOfDigits; // @synthesize numberOfDigits=_numberOfDigits;
- (void)_doneButton:(id)arg1;	// IMP=0x0000000000012855
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000012808
- (id)preferredFocusEnvironments;	// IMP=0x00000000000127e7
- (void)layoutSubviews;	// IMP=0x00000000000123b2
- (_Bool)canBecomeFocused;	// IMP=0x00000000000122fe
- (void)passcodeDigitView:(id)arg1 didChangeText:(id)arg2;	// IMP=0x00000000000121c2
- (void)passcodeDigitViewDidResignFocus:(id)arg1;	// IMP=0x000000000001213b
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x0000000000011f4a
- (void)shake;	// IMP=0x0000000000011dba
- (void)reset;	// IMP=0x0000000000011baa
- (id)initWithNumberOfDigits:(unsigned long long)arg1 userEditable:(_Bool)arg2 showsDigits:(_Bool)arg3;	// IMP=0x0000000000011848

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

