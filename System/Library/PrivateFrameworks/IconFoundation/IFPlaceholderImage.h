//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IFImage;

@interface IFPlaceholderImage
{
    unsigned long long _validationFlags;	// 16 = 0x10
    IFImage *_image;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000c7fb
@property(readonly) IFImage *image; // @synthesize image=_image;
- (void)setValidationFlags:(unsigned long long)arg1;	// IMP=0x000000000000c7d4
- (void)setPlaceholder:(_Bool)arg1;	// IMP=0x000000000000c7ce
- (_Bool)placeholder;	// IMP=0x000000000000c7b9
- (unsigned long long)validationFlags;	// IMP=0x000000000000c782
- (id)validationToken;	// IMP=0x000000000000c765
- (struct CGSize)minimumSize;	// IMP=0x000000000000c748
- (struct CGImage *)CGImage;	// IMP=0x000000000000c72b
- (double)scale;	// IMP=0x000000000000c70e
- (struct CGSize)size;	// IMP=0x000000000000c6f1
- (id)initWithImage:(id)arg1;	// IMP=0x000000000000c683

@end

