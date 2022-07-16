//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <LinkPresentation/LPLinkPresentationPropertyProvider-Protocol.h>

@class LPCaptionBarPresentationProperties, LPImage, LPVideo, NSString, UIColor;

@interface LPAppLinkPresentationProperties : NSObject <LPLinkPresentationPropertyProvider>
{
    LPCaptionBarPresentationProperties *_captionBar;	// 8 = 0x8
    LPCaptionBarPresentationProperties *_mediaTopCaptionBar;	// 16 = 0x10
    LPCaptionBarPresentationProperties *_mediaBottomCaptionBar;	// 24 = 0x18
    NSString *_topCaption;	// 32 = 0x20
    NSString *_bottomCaption;	// 40 = 0x28
    NSString *_trailingTopCaption;	// 48 = 0x30
    NSString *_trailingBottomCaption;	// 56 = 0x38
    NSString *_mediaTopCaption;	// 64 = 0x40
    NSString *_mediaBottomCaption;	// 72 = 0x48
    LPImage *_image;	// 80 = 0x50
    LPImage *_icon;	// 88 = 0x58
    LPVideo *_video;	// 96 = 0x60
    UIColor *_backgroundColor;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000000307b5
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) LPVideo *video; // @synthesize video=_video;
@property(retain, nonatomic) LPImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) LPImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *mediaBottomCaption; // @synthesize mediaBottomCaption=_mediaBottomCaption;
@property(copy, nonatomic) NSString *mediaTopCaption; // @synthesize mediaTopCaption=_mediaTopCaption;
@property(copy, nonatomic) NSString *trailingBottomCaption; // @synthesize trailingBottomCaption=_trailingBottomCaption;
@property(copy, nonatomic) NSString *trailingTopCaption; // @synthesize trailingTopCaption=_trailingTopCaption;
@property(copy, nonatomic) NSString *bottomCaption; // @synthesize bottomCaption=_bottomCaption;
@property(copy, nonatomic) NSString *topCaption; // @synthesize topCaption=_topCaption;
@property(retain, nonatomic) LPCaptionBarPresentationProperties *mediaBottomCaptionBar; // @synthesize mediaBottomCaptionBar=_mediaBottomCaptionBar;
@property(retain, nonatomic) LPCaptionBarPresentationProperties *mediaTopCaptionBar; // @synthesize mediaTopCaptionBar=_mediaTopCaptionBar;
@property(retain, nonatomic) LPCaptionBarPresentationProperties *captionBar; // @synthesize captionBar=_captionBar;
- (long long)style;	// IMP=0x0000000000030657

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

