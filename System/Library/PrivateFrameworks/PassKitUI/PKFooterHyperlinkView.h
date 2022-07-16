//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewHeaderFooterView.h>

#import <PassKitUI/UITextViewDelegate-Protocol.h>

@class NSAttributedString, NSString, PKHyperlinkTextView, UIColor;

@interface PKFooterHyperlinkView : UITableViewHeaderFooterView <UITextViewDelegate>
{
    PKHyperlinkTextView *_textView;	// 8 = 0x8
    NSString *_text;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000038e687
- (void)setText:(id)arg1;	// IMP=0x000000000038e676
- (id)text;	// IMP=0x000000000038e665
- (id)addFooterStyleAttributes:(id)arg1;	// IMP=0x000000000038e4d9
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000038e3f3
- (void)layoutSubviews;	// IMP=0x000000000038e269
@property(retain, nonatomic) UIColor *linkTextColor;
@property(copy, nonatomic) NSAttributedString *attributedText;
@property(copy, nonatomic) CDUnknownBlockType action;
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x000000000038e0dd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
