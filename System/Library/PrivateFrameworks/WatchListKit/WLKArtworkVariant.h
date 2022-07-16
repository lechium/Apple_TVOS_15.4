//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface WLKArtworkVariant : NSObject
{
    NSString *_artworkURLTemplate;	// 8 = 0x8
    _Bool _supportsLayeredImage;	// 16 = 0x10
    _Bool _alpha;	// 17 = 0x11
    NSString *_artworkURLString;	// 24 = 0x18
    long long _artworkType;	// 32 = 0x20
    NSString *_format;	// 40 = 0x28
    struct CGSize _artworkSize;	// 48 = 0x30
}

+ (id)artworkURLFromTemplate:(id)arg1 forSize:(struct CGSize)arg2 cropCode:(id)arg3 format:(id)arg4;	// IMP=0x000000000001f7fe
+ (id)artworkURLFromTemplate:(id)arg1 forSize:(struct CGSize)arg2 format:(id)arg3;	// IMP=0x000000000001f7e4
- (void).cxx_destruct;	// IMP=0x000000000001fd2d
@property(nonatomic, getter=hasAlpha) _Bool alpha; // @synthesize alpha=_alpha;
@property(nonatomic) _Bool supportsLayeredImage; // @synthesize supportsLayeredImage=_supportsLayeredImage;
@property(readonly, copy, nonatomic) NSString *format; // @synthesize format=_format;
@property(readonly, nonatomic) long long artworkType; // @synthesize artworkType=_artworkType;
@property(readonly, nonatomic) struct CGSize artworkSize; // @synthesize artworkSize=_artworkSize;
@property(readonly, copy, nonatomic) NSString *artworkURLString; // @synthesize artworkURLString=_artworkURLString;
- (id)_sizeDescription:(struct CGSize)arg1;	// IMP=0x000000000001fcaa
- (id)description;	// IMP=0x000000000001fb94
- (id)artworkSizeTemplateURL;	// IMP=0x000000000001fa90
- (id)artworkURLForSize:(struct CGSize)arg1 cropCode:(id)arg2 format:(id)arg3;	// IMP=0x000000000001f72d
- (id)artworkURLForSize:(struct CGSize)arg1 format:(id)arg2;	// IMP=0x000000000001f716
- (id)artworkURLForSize:(struct CGSize)arg1;	// IMP=0x000000000001f702
@property(readonly, copy, nonatomic) NSURL *artworkURL;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000001ee15

@end
