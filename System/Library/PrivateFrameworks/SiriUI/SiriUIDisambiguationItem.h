//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIImageView;

@interface SiriUIDisambiguationItem : NSObject
{
    _Bool _showsFavoriteStar;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_subtitle;	// 24 = 0x18
    NSString *_headingText;	// 32 = 0x20
    NSString *_extraDisambiguationText;	// 40 = 0x28
    NSString *_extraDisambiguationSubText;	// 48 = 0x30
    UIImageView *_imageView;	// 56 = 0x38
    struct _NSRange _titleBoldedRange;	// 64 = 0x40
}

+ (id)disambiguationItem;	// IMP=0x000000000002cd94
- (void).cxx_destruct;	// IMP=0x000000000002ce6c
@property(nonatomic) _Bool showsFavoriteStar; // @synthesize showsFavoriteStar=_showsFavoriteStar;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) struct _NSRange titleBoldedRange; // @synthesize titleBoldedRange=_titleBoldedRange;
@property(copy, nonatomic) NSString *extraDisambiguationSubText; // @synthesize extraDisambiguationSubText=_extraDisambiguationSubText;
@property(copy, nonatomic) NSString *extraDisambiguationText; // @synthesize extraDisambiguationText=_extraDisambiguationText;
@property(copy, nonatomic) NSString *headingText; // @synthesize headingText=_headingText;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

