//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDBackingStoreCacheGroup;

@interface HMDBackingStoreCacheFetchGroupInformation
{
    HMDBackingStoreCacheGroup *_group;	// 8 = 0x8
    CDUnknownBlockType _fetchResult;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001e687b
@property(copy, nonatomic) CDUnknownBlockType fetchResult; // @synthesize fetchResult=_fetchResult;
@property(retain, nonatomic) HMDBackingStoreCacheGroup *group; // @synthesize group=_group;
- (id)mainReturningError;	// IMP=0x00000000001e6619
- (id)initWithGroup:(id)arg1 fetchResult:(CDUnknownBlockType)arg2;	// IMP=0x00000000001e655d

@end

