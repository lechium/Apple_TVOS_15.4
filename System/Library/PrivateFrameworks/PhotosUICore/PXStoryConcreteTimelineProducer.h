//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXStoryTimelineProducer-Protocol.h>

@protocol OS_os_log;

@interface PXStoryConcreteTimelineProducer : NSObject <PXStoryTimelineProducer>
{
    double _initialProductionTimeLimit;	// 8 = 0x8
    long long _initialProductionCountLimit;	// 16 = 0x10
    double _subsequentProductionTimeLimit;	// 24 = 0x18
    long long _subsequentProductionCountLimit;	// 32 = 0x20
    double _subsequentProductionSimulatedDelay;	// 40 = 0x28
    NSObject<OS_os_log> *_log;	// 48 = 0x30
}

+ (id)workQueue;	// IMP=0x00000000006f18a9
- (void).cxx_destruct;	// IMP=0x00000000006f1513
@property(readonly, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(nonatomic) double subsequentProductionSimulatedDelay; // @synthesize subsequentProductionSimulatedDelay=_subsequentProductionSimulatedDelay;
@property(nonatomic) long long subsequentProductionCountLimit; // @synthesize subsequentProductionCountLimit=_subsequentProductionCountLimit;
@property(nonatomic) double subsequentProductionTimeLimit; // @synthesize subsequentProductionTimeLimit=_subsequentProductionTimeLimit;
@property(nonatomic) long long initialProductionCountLimit; // @synthesize initialProductionCountLimit=_initialProductionCountLimit;
@property(nonatomic) double initialProductionTimeLimit; // @synthesize initialProductionTimeLimit=_initialProductionTimeLimit;
- (id)requestTimelineWithConfiguration:(id)arg1 options:(unsigned long long)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000006f0d38
- (id)init;	// IMP=0x00000000006f0c2d

@end

