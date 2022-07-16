//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetalTools/NSObject-Protocol.h>

@class NSString;
@protocol MTLDevice;

@protocol MTLComputePipelineState <NSObject>
@property(readonly) _Bool supportIndirectCommandBuffers;
@property(readonly) unsigned long long staticThreadgroupMemoryLength;
@property(readonly) unsigned long long threadExecutionWidth;
@property(readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property(readonly) id <MTLDevice> device;
@property(readonly) NSString *label;
- (unsigned long long)imageblockMemoryLengthForDimensions:(CDStruct_14f26992)arg1;
@end

