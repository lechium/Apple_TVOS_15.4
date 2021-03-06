//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <TVPlayback/TVPMusicNowPlayingBackgroundProvider-Protocol.h>

@class NSString, UIImage, UIImageView;

@interface TVPMusicNowPlayingStaticArtworkBackgroundProvider : UIView <TVPMusicNowPlayingBackgroundProvider>
{
    UIImage *_image;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000a11fa
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) UIView *view;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000a0d88

// Remaining properties
@property(readonly, nonatomic, getter=isBlurDisabled) _Bool blurDisabled;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

