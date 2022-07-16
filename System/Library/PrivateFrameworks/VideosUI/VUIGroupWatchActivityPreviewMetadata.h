//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL, TVImageProxy;

@interface VUIGroupWatchActivityPreviewMetadata : NSObject
{
    NSString *_title;	// 8 = 0x8
    NSString *_subtitle;	// 16 = 0x10
    NSString *_imageUrlFormat;	// 24 = 0x18
    TVImageProxy *_imageProxy;	// 32 = 0x20
    struct CGImage *_artworkImage;	// 40 = 0x28
    NSURL *_fallbackUrl;	// 48 = 0x30
}

+ (id)metadataFromSerializedData:(id)arg1;	// IMP=0x00000000000d2327
- (void).cxx_destruct;	// IMP=0x00000000000d24a3
@property(readonly, copy, nonatomic) NSURL *fallbackUrl; // @synthesize fallbackUrl=_fallbackUrl;
@property(readonly, nonatomic) struct CGImage *artworkImage; // @synthesize artworkImage=_artworkImage;
@property(readonly, copy, nonatomic) TVImageProxy *imageProxy; // @synthesize imageProxy=_imageProxy;
@property(readonly, copy, nonatomic) NSString *imageUrlFormat; // @synthesize imageUrlFormat=_imageUrlFormat;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)serializedData;	// IMP=0x00000000000d21b1
- (id)localizedSubtitleForSeasonNumber:(id)arg1 episodeNumber:(id)arg2;	// IMP=0x00000000000d2070
- (id)initWithTitle:(id)arg1 showTitle:(id)arg2 seasonTitle:(id)arg3 seasonNumber:(id)arg4 episodeNumber:(id)arg5 imageUrlFormat:(id)arg6 artworkImage:(struct CGImage *)arg7 fallbackUrl:(id)arg8 isTVShow:(_Bool)arg9 isSeasonTitleEnabled:(_Bool)arg10;	// IMP=0x00000000000d1f01
- (id)initWithMediaItem:(id)arg1 fallbackUrl:(id)arg2 isSeasonTitleEnabled:(_Bool)arg3;	// IMP=0x00000000000d1d31
- (id)initWithPlayable:(id)arg1 fallbackUrl:(id)arg2 isSeasonTitleEnabled:(_Bool)arg3;	// IMP=0x00000000000d1a72
- (id)initWithContextData:(id)arg1;	// IMP=0x00000000000d18ba
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 imageUrlFormat:(id)arg3 artworkImage:(struct CGImage *)arg4 fallbackUrl:(id)arg5;	// IMP=0x00000000000d17d7

@end

