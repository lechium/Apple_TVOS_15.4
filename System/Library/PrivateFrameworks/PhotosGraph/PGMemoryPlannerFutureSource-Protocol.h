//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/NSObject-Protocol.h>

@class MAProgressReporter, NSArray, PGGraph, PGMemoryElectorConfiguration;

@protocol PGMemoryPlannerFutureSource <NSObject>
- (NSArray *)futureMemoriesForConfiguration:(PGMemoryElectorConfiguration *)arg1 withGraph:(PGGraph *)arg2 progressReporter:(MAProgressReporter *)arg3;
@end

