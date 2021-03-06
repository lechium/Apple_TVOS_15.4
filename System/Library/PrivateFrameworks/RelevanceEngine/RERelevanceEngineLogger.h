//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class REObserverStore;
@protocol OS_dispatch_queue;

@interface RERelevanceEngineLogger : NSObject
{
    REObserverStore *_loggables;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000dd106
- (void)removeLoggable:(id)arg1;	// IMP=0x00000000000dd0f0
- (void)addLoggable:(id)arg1;	// IMP=0x00000000000dd0da
- (void)collectLogs:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000dc9e5
- (void)enumerateLoggables:(CDUnknownBlockType)arg1;	// IMP=0x00000000000dc944
- (id)init;	// IMP=0x00000000000dc8c7

@end

