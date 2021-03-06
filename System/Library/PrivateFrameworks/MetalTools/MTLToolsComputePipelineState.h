//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetalTools/MTLComputePipelineStateSPI-Protocol.h>

@class MTLDebugInstrumentationData, NSString;
@protocol MTLDevice, MTLFunction;

@interface MTLToolsComputePipelineState <MTLComputePipelineStateSPI>
{
    id <MTLFunction> _function;	// 40 = 0x28
}

@property(readonly, retain, nonatomic) MTLDebugInstrumentationData *debugInstrumentationData;
@property(readonly) unsigned long long uniqueIdentifier;
@property(readonly, nonatomic) unsigned long long allocatedSize;
@property(readonly, nonatomic) unsigned long long gpuAddress;
@property(readonly, nonatomic) unsigned long long resourceIndex;
- (unsigned long long)imageblockMemoryLengthForDimensions:(CDStruct_14f26992)arg1;	// IMP=0x0000000000012c9c
@property(readonly) unsigned long long staticThreadgroupMemoryLength;
@property(readonly) unsigned long long threadExecutionWidth;
@property(readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property(readonly) long long textureWriteRoundingMode;
@property(readonly) _Bool supportIndirectCommandBuffers;
- (id)functionPointerHandlesWithFunctions:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000012a07
- (id)functionPointerHandleWithFunction:(id)arg1;	// IMP=0x00000000000129bf
@property(readonly) id <MTLDevice> device;
@property(readonly) NSString *label;
- (void)dealloc;	// IMP=0x00000000000128f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

