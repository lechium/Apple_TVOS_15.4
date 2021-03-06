//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface RECGImageImage
{
    struct CGImage *_CGImage;	// 8 = 0x8
    double _scale;	// 16 = 0x10
}

@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) struct CGImage *CGImage; // @synthesize CGImage=_CGImage;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000dc18c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000dc08e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000dbfcd
- (unsigned long long)hash;	// IMP=0x00000000000dbf82
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000dbf26
- (void)dealloc;	// IMP=0x00000000000dbee0
- (id)initWithImage:(struct CGImage *)arg1 scale:(double)arg2;	// IMP=0x00000000000dbe74

@end

