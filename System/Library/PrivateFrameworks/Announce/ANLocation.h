//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Announce/ANMessage-Protocol.h>
#import <Announce/NSSecureCoding-Protocol.h>

@class NSArray, NSNumber, NSString, NSUUID;

@interface ANLocation : NSObject <ANMessage, NSSecureCoding>
{
    NSUUID *_homeUUID;	// 8 = 0x8
    NSArray *_roomUUIDs;	// 16 = 0x10
    NSArray *_zoneUUIDs;	// 24 = 0x18
    NSArray *_userUUIDs;	// 32 = 0x20
    NSArray *_deviceIDs;	// 40 = 0x28
    unsigned long long _flags;	// 48 = 0x30
    NSNumber *_homeLocationStatus;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001cec5
- (void).cxx_destruct;	// IMP=0x000000000001d380
@property(retain, nonatomic) NSNumber *homeLocationStatus; // @synthesize homeLocationStatus=_homeLocationStatus;
@property(nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSArray *deviceIDs; // @synthesize deviceIDs=_deviceIDs;
@property(retain, nonatomic) NSArray *userUUIDs; // @synthesize userUUIDs=_userUUIDs;
@property(retain, nonatomic) NSArray *zoneUUIDs; // @synthesize zoneUUIDs=_zoneUUIDs;
@property(retain, nonatomic) NSArray *roomUUIDs; // @synthesize roomUUIDs=_roomUUIDs;
@property(copy, nonatomic) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001d064
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001cecd
- (id)message;	// IMP=0x000000000001c8fc
- (id)initWithMessage:(id)arg1;	// IMP=0x000000000001c1f7
@property(readonly, nonatomic) unsigned long long target;
- (id)copy;	// IMP=0x000000000001beef
- (id)initWithHomeID:(id)arg1;	// IMP=0x000000000001be84

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

