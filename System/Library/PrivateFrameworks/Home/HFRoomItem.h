//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFHomeKitItemProtocol-Protocol.h>

@class HMHome, HMRoom, NSString;
@protocol HFHomeKitObject;

@interface HFRoomItem <HFHomeKitItemProtocol>
{
    HMRoom *_room;	// 8 = 0x8
    HMHome *_home;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000e56e2
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) HMRoom *room; // @synthesize room=_room;
- (id)togglePowerState;	// IMP=0x00000000000e4d0f
- (id)_subclass_updateWithOptions:(id)arg1;	// IMP=0x00000000000e4900
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
- (id)init;	// IMP=0x00000000000e477f
- (id)initWithHome:(id)arg1 room:(id)arg2;	// IMP=0x00000000000e46dd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
