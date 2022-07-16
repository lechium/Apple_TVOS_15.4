//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSNumber, NSString;

@interface EDAMAd
{
    NSNumber *_id;	// 8 = 0x8
    NSNumber *_width;	// 16 = 0x10
    NSNumber *_height;	// 24 = 0x18
    NSString *_advertiserName;	// 32 = 0x20
    NSString *_imageUrl;	// 40 = 0x28
    NSString *_destinationUrl;	// 48 = 0x30
    NSNumber *_displaySeconds;	// 56 = 0x38
    NSNumber *_score;	// 64 = 0x40
    NSData *_image;	// 72 = 0x48
    NSString *_imageMime;	// 80 = 0x50
    NSString *_html;	// 88 = 0x58
    NSNumber *_displayFrequency;	// 96 = 0x60
    NSNumber *_openInTrunk;	// 104 = 0x68
}

+ (id)structFields;	// IMP=0x0000000000226c0f
+ (id)structName;	// IMP=0x0000000000226c02
- (void).cxx_destruct;	// IMP=0x00000000002271bb
@property(retain, nonatomic) NSNumber *openInTrunk; // @synthesize openInTrunk=_openInTrunk;
@property(retain, nonatomic) NSNumber *displayFrequency; // @synthesize displayFrequency=_displayFrequency;
@property(retain, nonatomic) NSString *html; // @synthesize html=_html;
@property(retain, nonatomic) NSString *imageMime; // @synthesize imageMime=_imageMime;
@property(retain, nonatomic) NSData *image; // @synthesize image=_image;
@property(retain, nonatomic) NSNumber *score; // @synthesize score=_score;
@property(retain, nonatomic) NSNumber *displaySeconds; // @synthesize displaySeconds=_displaySeconds;
@property(retain, nonatomic) NSString *destinationUrl; // @synthesize destinationUrl=_destinationUrl;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSString *advertiserName; // @synthesize advertiserName=_advertiserName;
@property(retain, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(retain, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(retain, nonatomic) NSNumber *id; // @synthesize id=_id;

@end
