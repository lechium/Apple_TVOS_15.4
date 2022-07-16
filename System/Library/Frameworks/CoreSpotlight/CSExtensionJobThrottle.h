//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CSExtensionJobThrottle : NSObject
{
    unsigned long long _maxRetryCount;	// 8 = 0x8
    unsigned long long _minSecondsBetweenRetries;	// 16 = 0x10
    unsigned long long _maxSecondsBetweenRetries;	// 24 = 0x18
    unsigned long long _minSecondsBetweenRetriesUnderMemoryPressure;	// 32 = 0x20
    unsigned long long _maxSecondsBetweenRetriesUnderMemoryPressure;	// 40 = 0x28
    NSMutableDictionary *_countersByBundleID;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000023cc7
@property(retain, nonatomic) NSMutableDictionary *countersByBundleID; // @synthesize countersByBundleID=_countersByBundleID;
@property(nonatomic) unsigned long long maxSecondsBetweenRetriesUnderMemoryPressure; // @synthesize maxSecondsBetweenRetriesUnderMemoryPressure=_maxSecondsBetweenRetriesUnderMemoryPressure;
@property(nonatomic) unsigned long long minSecondsBetweenRetriesUnderMemoryPressure; // @synthesize minSecondsBetweenRetriesUnderMemoryPressure=_minSecondsBetweenRetriesUnderMemoryPressure;
@property(nonatomic) unsigned long long maxSecondsBetweenRetries; // @synthesize maxSecondsBetweenRetries=_maxSecondsBetweenRetries;
@property(nonatomic) unsigned long long minSecondsBetweenRetries; // @synthesize minSecondsBetweenRetries=_minSecondsBetweenRetries;
@property(nonatomic) unsigned long long maxRetryCount; // @synthesize maxRetryCount=_maxRetryCount;
- (long long)nextDispatchTimeDeltaForExtension:(id)arg1 job:(id)arg2 memoryPressure:(_Bool)arg3;	// IMP=0x0000000000023846
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000023695

@end

