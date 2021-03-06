//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MTLBufferLayoutDescriptorInternal
{
    unsigned long long _stride;	// 8 = 0x8
    unsigned long long _stepFunction;	// 16 = 0x10
    unsigned long long _instanceStepRate;	// 24 = 0x18
}

- (void)setStepRate:(unsigned long long)arg1;	// IMP=0x0000000000003acd
- (unsigned long long)stepRate;	// IMP=0x0000000000003abc
- (void)setStepFunction:(unsigned long long)arg1;	// IMP=0x0000000000003aab
- (unsigned long long)stepFunction;	// IMP=0x0000000000003a9a
- (void)setStride:(unsigned long long)arg1;	// IMP=0x0000000000003a89
- (unsigned long long)stride;	// IMP=0x0000000000003a78
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000003a07
- (id)init;	// IMP=0x00000000000039a9

@end

