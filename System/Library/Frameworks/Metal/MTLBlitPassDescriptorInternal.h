//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MTLBlitPassDescriptorInternal
{
    struct MTLBlitPassDescriptorPrivate _private;	// 8 = 0x8
}

+ (id)blitPassDescriptor;	// IMP=0x00000000000937c6
- (id)sampleBufferAttachments;	// IMP=0x0000000000093a94
- (const struct MTLBlitPassDescriptorPrivate *)_descriptorPrivate;	// IMP=0x0000000000093a84
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000939e4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000938d3
- (unsigned long long)hash;	// IMP=0x0000000000093875
- (void)dealloc;	// IMP=0x0000000000093833
- (id)init;	// IMP=0x00000000000937e0

@end

