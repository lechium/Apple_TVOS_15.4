//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface IFConcreteImage
{
    struct CGImage *_CGImage;	// 16 = 0x10
    double _scale;	// 24 = 0x18
    unsigned long long _validationFlags;	// 32 = 0x20
    struct CGSize _size;	// 40 = 0x28
    struct CGSize _minimumSize;	// 56 = 0x38
}

- (void)setMinimumSize:(struct CGSize)arg1;	// IMP=0x000000000000bbf4
- (struct CGSize)minimumSize;	// IMP=0x000000000000bbb8
- (void)setValidationFlags:(unsigned long long)arg1;	// IMP=0x000000000000bba7
- (unsigned long long)validationFlags;	// IMP=0x000000000000bb96
- (double)scale;	// IMP=0x000000000000bb84
- (struct CGSize)size;	// IMP=0x000000000000bb48
- (void)setPlaceholder:(_Bool)arg1;	// IMP=0x000000000000bb2a
- (_Bool)placeholder;	// IMP=0x000000000000bb18
- (id)description;	// IMP=0x000000000000bae8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000ba46
- (struct CGImage *)_CGImage;	// IMP=0x000000000000ba35
- (struct CGImage *)CGImage;	// IMP=0x000000000000b9de
- (void)dealloc;	// IMP=0x000000000000b998
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 minimumSize:(struct CGSize)arg3 placeholder:(_Bool)arg4;	// IMP=0x000000000000b878
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 placeholder:(_Bool)arg3;	// IMP=0x000000000000b7b4
- (id)_init;	// IMP=0x000000000000b785

@end

