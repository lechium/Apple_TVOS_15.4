//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class UITextView;

@interface PKTextViewTableViewCell : UITableViewCell
{
    UITextView *_textView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000345c98
@property(readonly, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000345c1a
- (void)prepareForReuse;	// IMP=0x0000000000345bb5
- (void)layoutSubviews;	// IMP=0x0000000000345a84
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000345970

@end

