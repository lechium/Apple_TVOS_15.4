//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _PASLock;
@protocol OS_dispatch_queue;

@interface PPPeopleSuggester : NSObject
{
    _PASLock *_lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueueForSweeping;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00000000000b85eb
- (void).cxx_destruct;	// IMP=0x00000000000b7bd5
- (void)_sweepCache;	// IMP=0x00000000000b7b82
- (id)_rankedContactIdentifiersMatchingName:(id)arg1;	// IMP=0x00000000000b7a20
- (double)_cacheEntryAgeThresholdSecondsSince1970;	// IMP=0x00000000000b79d9
- (id)rankedContactIdentifiersMatchingName:(id)arg1;	// IMP=0x00000000000b79c7
- (id)rankedContactIdentifiers;	// IMP=0x00000000000b79b3
- (id)init;	// IMP=0x00000000000b7813

@end

