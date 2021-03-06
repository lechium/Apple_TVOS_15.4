//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

@interface ADSyncFlagManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableSet *_cachedFlags;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x0040000000227a5c
- (void).cxx_destruct;	// IMP=0x002000000022874e
- (void)_clearSyncNeededFlagsForKeys:(id)arg1;	// IMP=0x001000000022847e
- (void)_setSyncNeededFlagsForKeys:(id)arg1;	// IMP=0x0010000000228152
- (void)_fetchSyncFlagsOnDisk;	// IMP=0x0010000000227e88
- (void)clearAllFlags;	// IMP=0x0010000000227dce
- (void)clearFlagsForKeys:(id)arg1;	// IMP=0x0010000000227cf2
- (void)setSyncNeededFlagForKeys:(id)arg1;	// IMP=0x0010000000227c16
- (void)fetchKeysThatNeedToSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000227b4a
- (id)init;	// IMP=0x0010000000227ab1

@end

