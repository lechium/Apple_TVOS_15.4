//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTLComputePipelineDescriptor, MTLComputePipelineReflection;
@protocol MTLFunction;

@interface MTLDebugComputePipelineState
{
    unsigned long long _maxThreadPositionInGrid[3];	// 40 = 0x28
    unsigned long long _maxThreadsPerGrid[3];	// 64 = 0x40
    unsigned long long _maxThreadPositionInThreadgroup[3];	// 88 = 0x58
    unsigned long long _maxThreadIndexInThreadgroup[3];	// 112 = 0x70
    unsigned long long _maxThreadsPerThreadgroup[3];	// 136 = 0x88
    unsigned long long _maxThreadgroupPositionInGrid[3];	// 160 = 0xa0
    unsigned long long _maxThreadgroupsPerGrid[3];	// 184 = 0xb8
    unsigned long long _maxStageInGridSize[3];	// 208 = 0xd0
    unsigned long long _maxStageInGridOrigin[3];	// 232 = 0xe8
    id <MTLFunction> _function;	// 256 = 0x100
    MTLComputePipelineDescriptor *_descriptor;	// 264 = 0x108
    MTLComputePipelineReflection *_reflection;	// 272 = 0x110
}

@property(readonly, nonatomic) MTLComputePipelineReflection *reflection; // @synthesize reflection=_reflection;
@property(readonly, nonatomic) MTLComputePipelineDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(readonly, nonatomic) id <MTLFunction> function; // @synthesize function=_function;
- (id)getParameter:(id)arg1;	// IMP=0x0000000000057c29
- (id)description;	// IMP=0x0000000000057c15
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x0000000000057b8c
- (void)dealloc;	// IMP=0x0000000000057b34
- (id)initWithComputePipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 descriptor:(id)arg4;	// IMP=0x0000000000057758

@end

