//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VCPCNNBlock, VCPCNNData, VCPCNNMetalContext;

__attribute__((visibility("hidden")))
@interface VCPCNNModel : NSObject
{
    VCPCNNBlock *_blocks[200];	// 8 = 0x8
    short _quantFactor;	// 1608 = 0x648
    _Bool _useGPU;	// 1610 = 0x64a
    VCPCNNMetalContext *_context;	// 1616 = 0x650
    VCPCNNData *_output;	// 1624 = 0x658
}

- (void).cxx_destruct;	// IMP=0x00000000000241a4
@property(readonly) VCPCNNData *output; // @synthesize output=_output;
- (int)dynamicForward:(id)arg1 paramFileUrl:(id)arg2 cancel:(CDUnknownBlockType)arg3;	// IMP=0x0000000000023c6c
- (int)forward:(id)arg1;	// IMP=0x0000000000023926
- (int)prepareNetworkFromURL:(id)arg1 withInputSize:(id)arg2;	// IMP=0x00000000000236ed
- (int)add:(id)arg1;	// IMP=0x0000000000023678
- (id)getGPUContext;	// IMP=0x0000000000023667
- (int)size;	// IMP=0x0000000000023647
- (id)initWithParameters:(short)arg1 useGPU:(_Bool)arg2;	// IMP=0x0000000000023551
- (id)init;	// IMP=0x00000000000234e7

@end

