//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSProgress, PXStoryTimelineProducerConfiguration;

@protocol PXStoryTimelineProducer
- (NSProgress *)requestTimelineWithConfiguration:(PXStoryTimelineProducerConfiguration *)arg1 options:(unsigned long long)arg2 resultHandler:(void (^)(PXStoryProducerResult *))arg3;
@end

