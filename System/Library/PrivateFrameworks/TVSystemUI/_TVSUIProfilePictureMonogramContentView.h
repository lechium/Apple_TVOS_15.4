//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <TVSystemUI/TVLockupViewComponent-Protocol.h>

@class NSPersonNameComponents, NSString, TVSUIProfilePictureView, UIImage, UIImageView, _UIFloatingContentView;

@interface _TVSUIProfilePictureMonogramContentView : UIView <TVLockupViewComponent>
{
    _Bool _showSelection;	// 8 = 0x8
    UIImage *_image;	// 16 = 0x10
    NSPersonNameComponents *_personNameComponents;	// 24 = 0x18
    _UIFloatingContentView *_floatingContentView;	// 32 = 0x20
    TVSUIProfilePictureView *_profilePictureView;	// 40 = 0x28
    UIImageView *_checkmarkView;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000003970d
@property(readonly, nonatomic) UIImageView *checkmarkView; // @synthesize checkmarkView=_checkmarkView;
@property(readonly, nonatomic) TVSUIProfilePictureView *profilePictureView; // @synthesize profilePictureView=_profilePictureView;
@property(readonly, nonatomic) _UIFloatingContentView *floatingContentView; // @synthesize floatingContentView=_floatingContentView;
@property(nonatomic) _Bool showSelection; // @synthesize showSelection=_showSelection;
@property(retain, nonatomic) NSPersonNameComponents *personNameComponents; // @synthesize personNameComponents=_personNameComponents;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)updateAppearanceForLockupViewState:(unsigned long long)arg1;	// IMP=0x0000000000039686
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000000038703

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

