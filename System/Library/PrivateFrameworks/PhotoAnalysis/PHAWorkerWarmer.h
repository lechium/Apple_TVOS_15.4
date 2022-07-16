//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, PHAJobConstraints, PHAWorker;

@interface PHAWorkerWarmer : NSObject
{
    NSMutableSet *_workers;	// 8 = 0x8
    PHAWorker *_lastActiveWorker;	// 16 = 0x10
    PHAJobConstraints *_lastConstraints;	// 24 = 0x18
}

+ (unsigned long long)stateCode;	// IMP=0x000000000001d6b6
- (void).cxx_destruct;	// IMP=0x000000000001d43c
@property(retain, nonatomic) PHAJobConstraints *lastConstraints; // @synthesize lastConstraints=_lastConstraints;
@property(retain, nonatomic) PHAWorker *lastActiveWorker; // @synthesize lastActiveWorker=_lastActiveWorker;
@property(readonly, nonatomic) NSMutableSet *workers; // @synthesize workers=_workers;
- (void)reportNoMoreJobsExpected;	// IMP=0x000000000001d3e6
- (void)setActiveWorker:(id)arg1 withJob:(id)arg2;	// IMP=0x000000000001d201
- (void)recordConstraintChange:(id)arg1;	// IMP=0x000000000001d1e7
- (id)init;	// IMP=0x000000000001d181
- (id)statusAsDictionary;	// IMP=0x000000000001d0e0
- (_Bool)_cooldownWorkerIfWarmed:(id)arg1;	// IMP=0x000000000001d07c
- (void)_warmupWorkerIfCooled:(id)arg1 withProgressBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000001cff9

@end

