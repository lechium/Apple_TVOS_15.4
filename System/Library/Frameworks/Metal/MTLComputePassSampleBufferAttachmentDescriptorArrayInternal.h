//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTLComputePassSampleBufferAttachmentDescriptorInternal;

__attribute__((visibility("hidden")))
@interface MTLComputePassSampleBufferAttachmentDescriptorArrayInternal
{
    MTLComputePassSampleBufferAttachmentDescriptorInternal *_sampleDescriptors[4];	// 8 = 0x8
}

- (id)_descriptorAtIndex:(unsigned long long)arg1;	// IMP=0x000000000003b316
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;	// IMP=0x000000000003b297
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x000000000003b21c
- (void)dealloc;	// IMP=0x000000000003b1bc

@end

