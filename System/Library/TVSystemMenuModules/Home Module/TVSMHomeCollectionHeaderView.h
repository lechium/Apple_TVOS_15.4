//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

@class NSString, UILabel;

@interface TVSMHomeCollectionHeaderView : UICollectionReusableView
{
    NSString *_title;	// 8 = 0x8
    UILabel *_headerLabel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000005fd0
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)_updateEffect;	// IMP=0x0000000000005d80
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000005c00
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000005720

@end

