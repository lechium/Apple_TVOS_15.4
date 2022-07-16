//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Metal/NSCopying-Protocol.h>

@class NSString;
@protocol MTLCounterSet;

@interface MTLCounterSampleBufferDescriptorInternal <NSCopying>
{
    id <MTLCounterSet> _counterSet;	// 8 = 0x8
    unsigned long long _storageMode;	// 16 = 0x10
    NSString *_label;	// 24 = 0x18
    unsigned long long _sampleCount;	// 32 = 0x20
}

- (void)setSampleCount:(unsigned long long)arg1;	// IMP=0x000000000003f29f
- (unsigned long long)sampleCount;	// IMP=0x000000000003f28e
- (void)setLabel:(id)arg1;	// IMP=0x000000000003f27d
- (id)label;	// IMP=0x000000000003f267
- (void)setStorageMode:(unsigned long long)arg1;	// IMP=0x000000000003f256
- (unsigned long long)storageMode;	// IMP=0x000000000003f245
- (void)setCounterSet:(id)arg1;	// IMP=0x000000000003f234
- (id)counterSet;	// IMP=0x000000000003f21e
- (unsigned long long)hash;	// IMP=0x000000000003f174
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003f03b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003ef98
- (void)dealloc;	// IMP=0x000000000003ef40

@end

