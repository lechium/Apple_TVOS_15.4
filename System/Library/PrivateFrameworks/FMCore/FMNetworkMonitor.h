//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NWPathEvaluator;

@interface FMNetworkMonitor : NSObject
{
    NWPathEvaluator *_evaluator;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0000000000015d23
- (void).cxx_destruct;	// IMP=0x0000000000016211
@property(retain, nonatomic) NWPathEvaluator *evaluator; // @synthesize evaluator=_evaluator;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000015f95
- (void)registerNetworkMonitorLaunchEvent:(_Bool)arg1;	// IMP=0x0000000000015f39
- (_Bool)isNetworkUp;	// IMP=0x0000000000015ea8
- (_Bool)isMonitoring;	// IMP=0x0000000000015e75
- (void)stopMonitoring;	// IMP=0x0000000000015e0e
- (void)startMonitoring;	// IMP=0x0000000000015d78

@end

