//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol CKDZoneGatekeeperWaiter, OS_os_activity;

@interface CKWaiterWrapper : NSObject
{
    id <CKDZoneGatekeeperWaiter> _waiter;	// 8 = 0x8
    NSArray *_zoneIDs;	// 16 = 0x10
    NSObject<OS_os_activity> *_activity;	// 24 = 0x18
    CDUnknownBlockType _waitCompletedHandler;	// 32 = 0x20
    NSString *_personaID;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000005dea7
@property(readonly, nonatomic) NSString *personaID; // @synthesize personaID=_personaID;
@property(readonly, nonatomic) CDUnknownBlockType waitCompletedHandler; // @synthesize waitCompletedHandler=_waitCompletedHandler;
@property(readonly, nonatomic) NSObject<OS_os_activity> *activity; // @synthesize activity=_activity;
@property(readonly, nonatomic) NSArray *zoneIDs; // @synthesize zoneIDs=_zoneIDs;
@property(readonly, nonatomic) id <CKDZoneGatekeeperWaiter> waiter; // @synthesize waiter=_waiter;
- (id)CKPropertiesDescription;	// IMP=0x000000000005ddff
- (id)description;	// IMP=0x000000000005dded
- (void)invokeWaitCompletedHandler:(_Bool)arg1;	// IMP=0x000000000005dce0
- (id)initWithWaiter:(id)arg1 zoneIDs:(id)arg2 waitCompletedHandler:(CDUnknownBlockType)arg3 activity:(id)arg4;	// IMP=0x000000000005dbd3

@end

