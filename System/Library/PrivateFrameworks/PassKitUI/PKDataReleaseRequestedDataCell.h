//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSMutableArray, NSString, UILabel, UIView;

@interface PKDataReleaseRequestedDataCell : UITableViewCell
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_intentRetainLabel;	// 16 = 0x10
    NSMutableArray *_retainElementViews;	// 24 = 0x18
    UIView *_separatorView;	// 32 = 0x20
    UILabel *_intentDoNotRetainLabel;	// 40 = 0x28
    NSMutableArray *_doNotRetainElementViews;	// 48 = 0x30
    _Bool _isTemplateLayout;	// 56 = 0x38
    NSString *_title;	// 64 = 0x40
    NSString *_intentRetainTitle;	// 72 = 0x48
    NSArray *_intentRetainElements;	// 80 = 0x50
    NSString *_intentDoNotRetainTitle;	// 88 = 0x58
    NSArray *_intentDoNotRetainElements;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000025ff9
@property(copy, nonatomic) NSArray *intentDoNotRetainElements; // @synthesize intentDoNotRetainElements=_intentDoNotRetainElements;
@property(copy, nonatomic) NSString *intentDoNotRetainTitle; // @synthesize intentDoNotRetainTitle=_intentDoNotRetainTitle;
@property(copy, nonatomic) NSArray *intentRetainElements; // @synthesize intentRetainElements=_intentRetainElements;
@property(copy, nonatomic) NSString *intentRetainTitle; // @synthesize intentRetainTitle=_intentRetainTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (struct CGSize)_layoutWithBounds:(struct CGRect)arg1;	// IMP=0x000000000002570f
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000256a8
- (void)layoutSubviews;	// IMP=0x000000000002563b
- (void)_recreateViews:(id)arg1 forElements:(id)arg2;	// IMP=0x0000000000025298
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000024dfc

@end

