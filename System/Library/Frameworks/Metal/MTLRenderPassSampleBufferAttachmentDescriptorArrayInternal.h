//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTLRenderPassSampleBufferAttachmentDescriptorInternal;

__attribute__((visibility("hidden")))
@interface MTLRenderPassSampleBufferAttachmentDescriptorArrayInternal
{
    MTLRenderPassSampleBufferAttachmentDescriptorInternal *_sampleDescriptors[4];	// 8 = 0x8
}

- (id)_descriptorAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000078997
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;	// IMP=0x0000000000078918
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x000000000007889d
- (void)dealloc;	// IMP=0x000000000007883d

@end

