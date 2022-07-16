//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

@class NSArray, NSString, UIImageView, UILabel;

@interface TVSMAirPodsModuleHeaderView : UICollectionReusableView
{
    _Bool _configureForAtmos;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_detailText;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UILabel *_detailsLabel;	// 40 = 0x28
    UIImageView *_atmosImageView;	// 48 = 0x30
    NSArray *_atmosConstraints;	// 56 = 0x38
    NSArray *_regularConstraints;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000002fee0
@property(retain, nonatomic) NSArray *regularConstraints; // @synthesize regularConstraints=_regularConstraints;
@property(retain, nonatomic) NSArray *atmosConstraints; // @synthesize atmosConstraints=_atmosConstraints;
@property(retain, nonatomic) UIImageView *atmosImageView; // @synthesize atmosImageView=_atmosImageView;
@property(retain, nonatomic) UILabel *detailsLabel; // @synthesize detailsLabel=_detailsLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool configureForAtmos; // @synthesize configureForAtmos=_configureForAtmos;
@property(retain, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000002eba0

@end

