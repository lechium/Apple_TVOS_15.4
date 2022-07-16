//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVCoreSettings/HMHomeDelegatePrivate-Protocol.h>

@class HMHome, NSArray, NSString;

@interface TVCSHome : NSObject <HMHomeDelegatePrivate>
{
    HMHome *_hmHome;	// 8 = 0x8
}

+ (id)suggestedRoomNames:(unsigned long long)arg1 existingRoomNames:(id)arg2;	// IMP=0x0000000000022db0
+ (id)suggestedRoomNames:(unsigned long long)arg1;	// IMP=0x0000000000022d70
+ (id)_homeWithHMHome:(id)arg1;	// IMP=0x0000000000020de0
- (void).cxx_destruct;	// IMP=0x0000000000024200
@property(retain, nonatomic) HMHome *hmHome; // @synthesize hmHome=_hmHome;
@property(readonly, copy) NSString *description;
- (void)removeAccessory:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000023d80
- (void)addRoomWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000023320
- (id)suggestedRoomNames:(unsigned long long)arg1;	// IMP=0x0000000000023260
- (void)home:(id)arg1 didUpdateMediaPassword:(id)arg2;	// IMP=0x0000000000022c10
- (void)home:(id)arg1 didUpdateMinimumMediaUserPrivilege:(long long)arg2;	// IMP=0x0000000000022ad0
- (void)home:(id)arg1 didUpdateMediaPeerToPeerEnabled:(_Bool)arg2;	// IMP=0x0000000000022990
- (void)home:(id)arg1 didUpdateNameForRoom:(id)arg2;	// IMP=0x00000000000227f0
- (void)home:(id)arg1 didRemoveRoom:(id)arg2;	// IMP=0x0000000000022650
- (void)home:(id)arg1 didAddRoom:(id)arg2;	// IMP=0x00000000000224b0
- (void)home:(id)arg1 didRemoveActionSet:(id)arg2;	// IMP=0x0000000000022350
- (void)home:(id)arg1 didAddActionSet:(id)arg2;	// IMP=0x00000000000221f0
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;	// IMP=0x0000000000022050
- (void)home:(id)arg1 didAddAccessory:(id)arg2;	// IMP=0x0000000000021eb0
- (void)homeDidUpdateName:(id)arg1;	// IMP=0x0000000000021d80
- (void)home:(id)arg1 didUpdateRoom:(id)arg2 forAccessory:(id)arg3;	// IMP=0x0000000000021b80
- (void)updateMediaPassword:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000021970
- (void)updateMediaPeerToPeerEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000021780
- (void)updateMinimumMediaUserPrivilege:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000215a0
@property(readonly, copy) NSString *mediaPassword;
@property(readonly, getter=isMediaPeerToPeerEnabled) _Bool mediaPeerToPeerEnabled;
@property(readonly) long long minimumMediaUserPrivilege;
@property(readonly, nonatomic) NSArray *rooms;
@property(readonly, nonatomic) NSString *name;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000021100

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

