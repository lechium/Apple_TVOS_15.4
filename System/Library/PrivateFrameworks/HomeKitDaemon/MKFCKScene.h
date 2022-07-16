//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFCKHome, NSArray, NSDate, NSDictionary, NSSet, NSString, NSUUID;

@interface MKFCKScene
{
}

+ (id)fetchRequest;	// IMP=0x0000000000b5757e
- (_Bool)exportFromLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;	// IMP=0x0000000000b32008
- (_Bool)importIntoLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;	// IMP=0x0000000000b31d5e
- (id)encodeActionNaturalLight:(id)arg1 accessories:(id)arg2 shouldRemoveAction:(_Bool *)arg3 context:(id)arg4;	// IMP=0x000000000024b3eb
- (id)decodeActionNaturalLight:(id)arg1 localModel:(id)arg2 context:(id)arg3;	// IMP=0x000000000024aace
- (id)encodeActionCharacteristic:(id)arg1 accessories:(id)arg2 shouldRemoveAction:(_Bool *)arg3 context:(id)arg4;	// IMP=0x0000000000307a2c
- (id)decodeActionCharacteristic:(id)arg1 localModel:(id)arg2 context:(id)arg3;	// IMP=0x0000000000306f25
- (id)encodeActionShortcut:(id)arg1 context:(id)arg2;	// IMP=0x0000000000871c6f
- (id)decodeActionShortcut:(id)arg1 localModel:(id)arg2 context:(id)arg3;	// IMP=0x00000000008717b0
- (id)encodeActionMediaPlayback:(id)arg1 accessories:(id)arg2 context:(id)arg3;	// IMP=0x0000000000aadcbb
- (id)decodeActionMediaPlayback:(id)arg1 localModel:(id)arg2 context:(id)arg3;	// IMP=0x0000000000aad066

// Remaining properties
@property(retain, nonatomic) NSSet *accessories; // @dynamic accessories;
@property(retain, nonatomic) NSArray *actions; // @dynamic actions;
@property(retain, nonatomic) NSDictionary *applicationData; // @dynamic applicationData;
@property(retain, nonatomic) NSSet *automations; // @dynamic automations;
@property(copy, nonatomic) NSUUID *conflictResolutionUUID; // @dynamic conflictResolutionUUID;
@property(retain, nonatomic) MKFCKHome *home; // @dynamic home;
@property(copy, nonatomic) NSUUID *homeModelID; // @dynamic homeModelID;
@property(copy, nonatomic) NSUUID *modelID; // @dynamic modelID;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSString *type; // @dynamic type;
@property(copy, nonatomic) NSDate *writerTimestamp; // @dynamic writerTimestamp;
@property(copy, nonatomic) NSString *writerVersion; // @dynamic writerVersion;

@end

