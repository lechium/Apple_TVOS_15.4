//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/REMLMetricsProvider-Protocol.h>

@class NSMutableDictionary, NSMutableSet;

@interface REMLMetricsSet : NSObject <REMLMetricsProvider>
{
    NSMutableDictionary *metricsIndex;	// 8 = 0x8
    NSMutableSet *metricsSet;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000071bfa
- (void)reset;	// IMP=0x0000000000071ad1
- (void)updateMetricsFromFeatures:(id)arg1 prediction:(id)arg2 truth:(id)arg3;	// IMP=0x0000000000071942
- (id)name;	// IMP=0x0000000000071935
- (id)getMetricsByName:(id)arg1;	// IMP=0x00000000000718c3
- (_Bool)addMetrics:(id)arg1;	// IMP=0x00000000000717a2
- (id)init;	// IMP=0x000000000007171b

@end

