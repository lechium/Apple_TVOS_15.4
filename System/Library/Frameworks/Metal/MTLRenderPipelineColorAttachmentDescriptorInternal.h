//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MTLRenderPipelineColorAttachmentDescriptorInternal
{
    struct MTLRenderPipelineAttachmentDescriptorPrivate _private;	// 8 = 0x8
}

- (const struct MTLRenderPipelineAttachmentDescriptorPrivate *)_descriptorPrivate;	// IMP=0x000000000008460c
- (void)setPixelFormat:(unsigned long long)arg1;	// IMP=0x00000000000845e6
- (unsigned long long)pixelFormat;	// IMP=0x00000000000845d1
- (void)setWriteMask:(unsigned long long)arg1;	// IMP=0x00000000000845ab
- (unsigned long long)writeMask;	// IMP=0x0000000000084595
- (void)setAlphaBlendOperation:(unsigned long long)arg1;	// IMP=0x0000000000084573
- (unsigned long long)alphaBlendOperation;	// IMP=0x000000000008455d
- (void)setDestinationAlphaBlendFactor:(unsigned long long)arg1;	// IMP=0x0000000000084537
- (unsigned long long)destinationAlphaBlendFactor;	// IMP=0x0000000000084521
- (void)setSourceAlphaBlendFactor:(unsigned long long)arg1;	// IMP=0x00000000000844fb
- (unsigned long long)sourceAlphaBlendFactor;	// IMP=0x00000000000844e5
- (void)setRgbBlendOperation:(unsigned long long)arg1;	// IMP=0x00000000000844c5
- (unsigned long long)rgbBlendOperation;	// IMP=0x00000000000844b0
- (void)setDestinationRGBBlendFactor:(unsigned long long)arg1;	// IMP=0x000000000008448a
- (unsigned long long)destinationRGBBlendFactor;	// IMP=0x0000000000084474
- (void)setSourceRGBBlendFactor:(unsigned long long)arg1;	// IMP=0x000000000008444e
- (unsigned long long)sourceRGBBlendFactor;	// IMP=0x0000000000084438
- (void)setBlendingEnabled:(_Bool)arg1;	// IMP=0x000000000008441a
- (_Bool)isBlendingEnabled;	// IMP=0x0000000000084408
- (id)description;	// IMP=0x00000000000843f4
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x000000000008437f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000084327
- (unsigned long long)hash;	// IMP=0x000000000008430e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000842bf
- (void)dealloc;	// IMP=0x0000000000084290
- (id)init;	// IMP=0x000000000008424d

@end
