//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDBackingStoreCacheGroup;

@interface HMDBackingStoreCacheFetchMigratedResult
{
    _Bool _update;	// 8 = 0x8
    _Bool _migration;	// 9 = 0x9
    HMDBackingStoreCacheGroup *_group;	// 16 = 0x10
    CDUnknownBlockType _fetchResult;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001e953d
@property(copy, nonatomic) CDUnknownBlockType fetchResult; // @synthesize fetchResult=_fetchResult;
@property(readonly) _Bool migration; // @synthesize migration=_migration;
@property(readonly) _Bool update; // @synthesize update=_update;
@property(retain, nonatomic) HMDBackingStoreCacheGroup *group; // @synthesize group=_group;
- (id)mainReturningError;	// IMP=0x00000000001e8f2e
- (id)initWithGroup:(id)arg1 update:(_Bool)arg2 migration:(_Bool)arg3 fetchResult:(CDUnknownBlockType)arg4;	// IMP=0x00000000001e8e51

@end

