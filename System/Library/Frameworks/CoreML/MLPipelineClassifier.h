//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MLPipeline;

@interface MLPipelineClassifier
{
    MLPipeline *_engine;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000006f096
@property(retain) MLPipeline *engine; // @synthesize engine=_engine;
- (id)classify:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000006efe2
- (id)initWithEngine:(id)arg1 description:(id)arg2 configuration:(id)arg3 error:(id *)arg4;	// IMP=0x000000000006ee4f
@property(readonly) MLPipeline *pipeline;

@end

