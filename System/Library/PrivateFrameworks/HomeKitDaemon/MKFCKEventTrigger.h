//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSPredicate, NSSet;

@interface MKFCKEventTrigger
{
}

+ (id)fetchRequest;	// IMP=0x0000000000b5749e
- (_Bool)exportFromLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;	// IMP=0x00000000007fc403
- (_Bool)importIntoLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;	// IMP=0x00000000007fc147
- (id)_decodeEventDictionary:(id)arg1 localModel:(id)arg2 context:(id)arg3;	// IMP=0x00000000007fb28f
- (id)_encodeEvent:(id)arg1 accessories:(id)arg2 users:(id)arg3 context:(id)arg4;	// IMP=0x00000000007fa7d4

// Remaining properties
@property(retain, nonatomic) NSSet *accessories; // @dynamic accessories;
@property(retain, nonatomic) NSPredicate *condition; // @dynamic condition;
@property(retain, nonatomic) NSArray *events; // @dynamic events;
@property(retain, nonatomic) NSSet *users; // @dynamic users;

@end

