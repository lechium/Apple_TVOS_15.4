//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString, NSUUID;

@interface HFStateRestorationSettings : NSObject
{
    int _notifyRegistrationToken;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00000000001419be
- (void).cxx_destruct;	// IMP=0x0000000000142316
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) int notifyRegistrationToken; // @synthesize notifyRegistrationToken=_notifyRegistrationToken;
- (void)_selectedHomeDidChange;	// IMP=0x0000000000142176
- (void)_setHomeAppPreferencesValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000001420aa
- (id)_homeAppPreferencesValueForKey:(id)arg1 ofClass:(Class)arg2;	// IMP=0x00000000001420a2
- (void)syncToNanoPrefs;	// IMP=0x000000000014209c
@property(copy, nonatomic) NSString *selectedHomeAppTabIdentifier;
- (id)_roomKeyForHomeIdentifier:(id)arg1;	// IMP=0x0000000000141fd8
- (void)saveSelectedRoomIdentifier:(id)arg1 forHomeIdentifier:(id)arg2;	// IMP=0x0000000000141f3e
- (id)selectedRoomIdentifierForHomeIdentifier:(id)arg1;	// IMP=0x0000000000141e97
@property(readonly, copy, nonatomic) NSUUID *selectedRoomIdentifierForSelectedHome;
@property(copy, nonatomic) NSUUID *selectedHomeIdentifier;
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000141c3d
- (void)addObserver:(id)arg1;	// IMP=0x0000000000141bcb
- (void)dealloc;	// IMP=0x0000000000141b86
- (id)init;	// IMP=0x0000000000141a24

@end

