//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSDictionary;

__attribute__((visibility("hidden")))
@interface MTLComputePipelineReflectionInternal
{
    NSArray *_arguments;	// 8 = 0x8
    NSArray *_builtInArguments;	// 16 = 0x10
    NSDictionary *_performanceStatistics;	// 24 = 0x18
    CDStruct_596dc0d1 _flags;	// 32 = 0x20
    unsigned int _traceBufferIndex;	// 40 = 0x28
    NSData *_pluginReturnData;	// 48 = 0x30
    NSArray *_constantSamplerUniqueIdentifiers;	// 56 = 0x38
    NSArray *_constantSamplerDescriptors;	// 64 = 0x40
}

- (id)description;	// IMP=0x000000000007bda1
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x000000000007ba5e
- (id)builtInArguments;	// IMP=0x000000000007ba4d
- (id)arguments;	// IMP=0x000000000007ba3c
- (void)setConstantSamplerDescriptorsFromBitmasks:(unsigned long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000007b9ff
- (void)setConstantSamplerUniqueIdentifiers:(id)arg1;	// IMP=0x000000000007b9c1
- (id)constantSamplerDescriptors;	// IMP=0x000000000007b9b0
- (id)constantSamplerUniqueIdentifiers;	// IMP=0x000000000007b99f
- (id)pluginReturnData;	// IMP=0x000000000007b98e
- (unsigned int)traceBufferIndex;	// IMP=0x000000000007b97e
- (CDStruct_596dc0d1)usageFlags;	// IMP=0x000000000007b96d
- (void)setPerformanceStatistics:(id)arg1;	// IMP=0x000000000007b934
- (id)performanceStatistics;	// IMP=0x000000000007b923
- (void)dealloc;	// IMP=0x000000000007b893
- (id)initWithSerializedData:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3 flags:(CDStruct_596dc0d1)arg4;	// IMP=0x000000000007b869
- (id)initWithSerializedData:(id)arg1 serializedStageInputDescriptor:(id)arg2 device:(id)arg3 options:(unsigned long long)arg4 flags:(CDStruct_596dc0d1)arg5;	// IMP=0x000000000007b5b5

@end

