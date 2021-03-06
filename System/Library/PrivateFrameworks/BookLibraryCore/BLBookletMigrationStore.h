//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BLServiceProxy;

@interface BLBookletMigrationStore : NSObject
{
    BLServiceProxy *_serviceProxy;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001e0cb
@property(readonly, nonatomic) BLServiceProxy *serviceProxy; // @synthesize serviceProxy=_serviceProxy;
- (_Bool)removeAllMigrationInfosExcludingStates:(id)arg1 error:(out id *)arg2;	// IMP=0x000000000001dfa3
- (void)migrationInfosWithStates:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001ddb3
- (void)migrationInfosWithState:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001dd0a
- (void)migrationInfosWithStoreIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001dab7
- (_Bool)setMigrationState:(long long)arg1 forStoreIDs:(id)arg2 error:(out id *)arg3;	// IMP=0x000000000001d940
- (id)init;	// IMP=0x000000000001d810

@end

