//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface CNStarkContactNameView : UIView
{
    UILabel *_nameLabel;	// 8 = 0x8
    UIImageView *_photoImageView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000aa67e
@property(retain, nonatomic) UIImageView *photoImageView; // @synthesize photoImageView=_photoImageView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void)layoutSubviews;	// IMP=0x00000000000aa39e
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000aa29a
- (id)initWithName:(id)arg1;	// IMP=0x00000000000a9ecb

@end

