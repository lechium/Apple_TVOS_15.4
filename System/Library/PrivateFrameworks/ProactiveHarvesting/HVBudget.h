//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HVBudget : NSObject
{
    unsigned int _alwaysAllowSourcesOverride;	// 8 = 0x8
    unsigned int _alwaysDenySourcesOverride;	// 12 = 0xc
    unsigned int _noServiceSources;	// 16 = 0x10
    unsigned int _neverUseBatterySources;	// 20 = 0x14
    unsigned int _delayedBudgetedSources;	// 24 = 0x18
    unsigned int _budgetedSources;	// 28 = 0x1c
    unsigned int _realtimeSources;	// 32 = 0x20
}

- (id)init;	// IMP=0x000000000001f26a

@end

