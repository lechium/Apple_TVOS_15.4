//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFImage.h>

@class INImage, NSValue;

@interface INUISearchFoundationImageAdapter : SFImage
{
    NSValue *_sizeValue;	// 8 = 0x8
    INImage *_intentsImage;	// 16 = 0x10
}

+ (id)_sharedImageLoader;	// IMP=0x0000000000007be2
+ (void)initialize;	// IMP=0x0000000000007b88
- (void).cxx_destruct;	// IMP=0x00000000000082e3
@property(copy, nonatomic) INImage *intentsImage; // @synthesize intentsImage=_intentsImage;
- (void)loadImageDataWithCompletionAndErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008242
- (void)loadImageDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000081b6
- (struct CGSize)size;	// IMP=0x0000000000008134
- (void)setSize:(struct CGSize)arg1;	// IMP=0x00000000000080a1
- (int)source;	// IMP=0x0000000000008096
- (id)payloadImage;	// IMP=0x000000000000800e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000007f18
- (unsigned long long)hash;	// IMP=0x0000000000007efb
- (id)initWithIntentsImage:(id)arg1;	// IMP=0x0000000000007e93
- (id)initWithPayloadImage:(id)arg1;	// IMP=0x0000000000007c47

@end

