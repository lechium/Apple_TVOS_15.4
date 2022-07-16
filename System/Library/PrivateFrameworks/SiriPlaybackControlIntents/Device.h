//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INObject.h>

@class DeviceContext, NSArray, NSNumber, NSString;

@interface Device : INObject
{
}

- (id)initWithCoder:(id)arg1;	// IMP=0x000000000018dd80
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;	// IMP=0x000000000018dbd0
@property(nonatomic, readonly) NSString *description;

// Remaining properties
@property(nonatomic, retain) NSNumber *confirmed; // @dynamic confirmed;
@property(nonatomic, retain) DeviceContext *context; // @dynamic context;
@property(nonatomic, retain) NSNumber *currentHome; // @dynamic currentHome;
@property(nonatomic, retain) NSNumber *currentRoom; // @dynamic currentRoom;
@property(nonatomic, retain) NSNumber *disambiguated; // @dynamic disambiguated;
@property(nonatomic, retain) NSNumber *isDeviceSelectedUsingContext; // @dynamic isDeviceSelectedUsingContext;
@property(nonatomic, retain) NSNumber *isEndpoint; // @dynamic isEndpoint;
@property(nonatomic, copy) NSString *mediaSystemId; // @dynamic mediaSystemId;
@property(nonatomic, copy) NSString *name; // @dynamic name;
@property(nonatomic, retain) NSNumber *numberOfAffectedRooms; // @dynamic numberOfAffectedRooms;
@property(nonatomic, copy) NSString *roomName; // @dynamic roomName;
@property(nonatomic, copy) NSString *routeId; // @dynamic routeId;
@property(nonatomic, retain) NSNumber *skipConfirmation; // @dynamic skipConfirmation;
@property(nonatomic, copy) NSString *type; // @dynamic type;
@property(nonatomic, copy) NSArray *zoneNames; // @dynamic zoneNames;

@end

