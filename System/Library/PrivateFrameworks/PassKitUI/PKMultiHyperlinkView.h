//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PassKitUI/UITextViewDelegate-Protocol.h>

@class NSArray, NSString, UIColor, UITextView;

@interface PKMultiHyperlinkView : UIView <UITextViewDelegate>
{
    UITextView *_textView;	// 8 = 0x8
    NSString *_text;	// 16 = 0x10
    UIColor *_linkTextColor;	// 24 = 0x18
    long long _textAlignment;	// 32 = 0x20
    NSArray *_sources;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000308130
@property(copy, nonatomic) NSArray *sources; // @synthesize sources=_sources;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) UIColor *linkTextColor; // @synthesize linkTextColor=_linkTextColor;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;	// IMP=0x0000000000307ec1
- (_Bool)_isLinkRangeValid:(struct _NSRange)arg1;	// IMP=0x0000000000307e7a
- (void)_updateText;	// IMP=0x00000000003079de
- (struct CGSize)_layoutWithBounds:(struct CGRect)arg1 isTemplateLayout:(_Bool)arg2;	// IMP=0x0000000000307918
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000003078cf
- (void)layoutSubviews;	// IMP=0x0000000000307860
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000003075df
- (id)init;	// IMP=0x00000000003075ad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

