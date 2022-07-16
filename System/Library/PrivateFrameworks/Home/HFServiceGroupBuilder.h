//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFServiceLikeBuilder-Protocol.h>

@class HFMutableSetDiff, HFRoomBuilder, HMServiceGroup, NSArray, NSString;
@protocol HFIconDescriptor;

@interface HFServiceGroupBuilder <HFServiceLikeBuilder>
{
    _Bool isFavorite;	// 8 = 0x8
    _Bool _hasSetRoom;	// 9 = 0x9
    _Bool _hasSetIcon;	// 10 = 0xa
    id <HFIconDescriptor> _iconDescriptor;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    HFMutableSetDiff *_serviceUUIDs;	// 32 = 0x20
    HFRoomBuilder *_roomBuilder;	// 40 = 0x28
}

+ (Class)homeKitRepresentationClass;	// IMP=0x00000000001441fa
- (void).cxx_destruct;	// IMP=0x0000000000147fbf
@property(nonatomic) _Bool hasSetIcon; // @synthesize hasSetIcon=_hasSetIcon;
@property(nonatomic) _Bool hasSetRoom; // @synthesize hasSetRoom=_hasSetRoom;
@property(retain, nonatomic) HFRoomBuilder *roomBuilder; // @synthesize roomBuilder=_roomBuilder;
@property(readonly, nonatomic) HFMutableSetDiff *serviceUUIDs; // @synthesize serviceUUIDs=_serviceUUIDs;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool isFavorite; // @synthesize isFavorite;
- (_Bool)_supportsCustomIcons;	// IMP=0x0000000000147d4f
@property(readonly, nonatomic) NSArray *availableIconDescriptors;
@property(retain, nonatomic) id <HFIconDescriptor> iconDescriptor; // @synthesize iconDescriptor=_iconDescriptor;
@property(retain, nonatomic) HFRoomBuilder *room;
- (id)accessories;	// IMP=0x0000000000147a67
@property(readonly, nonatomic) _Bool supportsFavoriting;
@property(readonly, nonatomic) NSString *originalName;
- (id)_rooms;	// IMP=0x0000000000147820
- (id)_updateIcon;	// IMP=0x000000000014735d
- (id)_updateRooms;	// IMP=0x0000000000147030
- (id)_updateFavorite;	// IMP=0x0000000000146b75
- (id)_updateServices;	// IMP=0x000000000014622a
- (id)_updateName;	// IMP=0x0000000000145eba
- (id)_createServiceGroup;	// IMP=0x0000000000145bd7
- (id)_performValidation;	// IMP=0x0000000000145ac1
- (id)commitItem;	// IMP=0x000000000014547e
- (id)removeItemFromHome;	// IMP=0x0000000000144e22
@property(readonly, nonatomic) NSArray *services;
- (void)removeService:(id)arg1;	// IMP=0x0000000000144c36
- (void)addService:(id)arg1;	// IMP=0x0000000000144af0
- (_Bool)shouldAllowAddingService:(id)arg1;	// IMP=0x00000000001448da
- (void)setServiceGroup:(id)arg1;	// IMP=0x00000000001448c8
- (id)_mostCommonIconDescriptor;	// IMP=0x00000000001447cd
@property(readonly, nonatomic) NSString *primaryServiceType;
@property(readonly, nonatomic) HMServiceGroup *serviceGroup;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;	// IMP=0x000000000014420b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
