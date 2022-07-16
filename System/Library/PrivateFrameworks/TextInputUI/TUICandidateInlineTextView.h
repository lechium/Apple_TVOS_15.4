//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, UILabel;
@protocol TUICandidateViewStyle;

@interface TUICandidateInlineTextView : UIView
{
    NSString *_text;	// 8 = 0x8
    id <TUICandidateViewStyle> _style;	// 16 = 0x10
    UILabel *_label;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000280a3
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) id <TUICandidateViewStyle> style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void)updateLabels;	// IMP=0x0000000000027ea7
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000027db0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000027d53
- (void)commonInit;	// IMP=0x0000000000027c47

@end

