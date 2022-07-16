//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PHAVisionServiceFaceProcessingWorkerJobKeepAlive;

@interface PHAFaceClusteringJob
{
    PHAVisionServiceFaceProcessingWorkerJobKeepAlive *_keepAlive;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000009c3f3
- (_Bool)stopJob:(id *)arg1;	// IMP=0x000000000009c37e
- (_Bool)startJob:(id *)arg1;	// IMP=0x000000000009c20c
- (void)_handleClusteringCompletion;	// IMP=0x000000000009c1de
- (void)_stopJobKeepAlive;	// IMP=0x000000000009c1c1
- (void)_startJobKeepAlive;	// IMP=0x000000000009c1a4
- (float)completionScore;	// IMP=0x000000000009c180
- (id)initWithFaceProcessingWorker:(id)arg1 jobScenario:(unsigned long long)arg2;	// IMP=0x000000000009c0fe

@end

