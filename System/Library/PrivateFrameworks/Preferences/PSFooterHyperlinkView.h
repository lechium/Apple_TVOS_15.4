//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewHeaderFooterView.h>

#import <Preferences/PSHeaderFooterView-Protocol.h>
#import <Preferences/UITextViewDelegate-Protocol.h>

@class NSLayoutConstraint, NSString, NSURL, UITextView;

@interface PSFooterHyperlinkView : UITableViewHeaderFooterView <PSHeaderFooterView, UITextViewDelegate>
{
    NSString *_text;	// 8 = 0x8
    NSURL *_URL;	// 16 = 0x10
    id _target;	// 24 = 0x18
    SEL _action;	// 32 = 0x20
    UITextView *_textView;	// 40 = 0x28
    NSLayoutConstraint *_textViewLeadingConstraint;	// 48 = 0x30
    NSLayoutConstraint *_textViewTrailingConstraint;	// 56 = 0x38
    struct _NSRange _linkRange;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000b96f5
@property(retain, nonatomic) NSLayoutConstraint *textViewTrailingConstraint; // @synthesize textViewTrailingConstraint=_textViewTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *textViewLeadingConstraint; // @synthesize textViewLeadingConstraint=_textViewLeadingConstraint;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) struct _NSRange linkRange; // @synthesize linkRange=_linkRange;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void)_accessibilitySetInterfaceStyleIntent:(unsigned long long)arg1;	// IMP=0x00000000000b95be
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;	// IMP=0x00000000000b9525
- (double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2;	// IMP=0x00000000000b94c7
- (_Bool)isValidLinkRange;	// IMP=0x00000000000b9435
- (void)_linkify;	// IMP=0x00000000000b8e73
- (void)updateConstraints;	// IMP=0x00000000000b8c7f
- (void)setTableView:(id)arg1;	// IMP=0x00000000000b8c3e
- (void)setupSubviewsAndContstraints;	// IMP=0x00000000000b83bb
- (void)refreshContentsWithSpecifier:(id)arg1;	// IMP=0x00000000000b8190
- (id)initWithSpecifier:(id)arg1;	// IMP=0x00000000000b810a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

