//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PPTemporalClusterStorage;

@interface PPLocalTemporalClusterStore : NSObject
{
    PPTemporalClusterStorage *_storage;	// 8 = 0x8
}

+ (id)defaultStore;	// IMP=0x00000000001291d9
- (void).cxx_destruct;	// IMP=0x00000000001291c9
- (id)rankedTemporalClusterForStartDate:(id)arg1 endDate:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001291b3
- (id)init;	// IMP=0x000000000012913b
- (id)initWithStorage:(id)arg1;	// IMP=0x00000000001290d0

@end

