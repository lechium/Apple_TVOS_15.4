//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKKSItem, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface CKKSOutgoingQueueEntry
{
    CKKSItem *_item;	// 8 = 0x8
    NSString *_action;	// 16 = 0x10
    NSString *_state;	// 24 = 0x18
    NSString *_accessgroup;	// 32 = 0x20
    NSDate *_waitUntil;	// 40 = 0x28
}

+ (long long)countByState:(id)arg1 zone:(id)arg2 error:(id *)arg3;	// IMP=0x0040000000068b98
+ (id)countsByStateInZone:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000689d1
+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x0010000000068821
+ (id)sqlColumns;	// IMP=0x00100000000687c3
+ (id)sqlTable;	// IMP=0x00100000000687b6
+ (id)allWithUUID:(id)arg1 states:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000685c0
+ (id)allInState:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000068423
+ (id)fetch:(long long)arg1 state:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x001000000006827e
+ (id)tryFromDatabase:(id)arg1 state:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000068064
+ (id)tryFromDatabase:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000067ec7
+ (id)fromDatabase:(id)arg1 state:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000067cad
+ (id)withItem:(struct SecDbItem *)arg1 action:(id)arg2 zoneID:(id)arg3 keyCache:(id)arg4 error:(id *)arg5;	// IMP=0x00100000000666b5
+ (id)keyForItem:(struct SecDbItem *)arg1 zoneID:(id)arg2 keyCache:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000066142
- (void).cxx_destruct;	// IMP=0x00200000000660de
@property(retain) NSDate *waitUntil; // @synthesize waitUntil=_waitUntil;
@property(retain) NSString *accessgroup; // @synthesize accessgroup=_accessgroup;
@property(retain) NSString *state; // @synthesize state=_state;
@property(retain) NSString *action; // @synthesize action=_action;
@property(retain) CKKSItem *item; // @synthesize item=_item;
- (_Bool)intransactionMarkAsError:(id)arg1 viewState:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000065e14
- (_Bool)intransactionMoveToState:(id)arg1 viewState:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000656d2
- (id)sqlValues;	// IMP=0x00100000000654e7
- (id)whereClauseToFindSelf;	// IMP=0x0010000000065391
@property(retain) NSString *uuid;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000064f94
- (id)initWithCKKSItem:(id)arg1 action:(id)arg2 state:(id)arg3 waitUntil:(id)arg4 accessGroup:(id)arg5;	// IMP=0x0010000000064e78
- (id)description;	// IMP=0x0010000000064d0d

@end

