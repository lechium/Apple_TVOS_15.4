//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MTLGPUDebugLibrary
{
}

- (void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000c77d
- (id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 error:(id *)arg4;	// IMP=0x000000000000c728
- (id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 functionCache:(id)arg3 error:(id *)arg4;	// IMP=0x000000000000c6d3
- (void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000c5a7
- (id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000c524
- (id)newFunctionWithName:(id)arg1;	// IMP=0x000000000000c4b4
- (void)newFunctionWithDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c374
- (id)newFunctionWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000c30d
- (id)initWithLibrary:(id)arg1 device:(id)arg2;	// IMP=0x000000000000c2de

@end
