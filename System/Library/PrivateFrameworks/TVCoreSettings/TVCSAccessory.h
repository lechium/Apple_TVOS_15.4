//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVCoreSettings/HMAccessoryDelegatePrivate-Protocol.h>
#import <TVCoreSettings/HMMediaDestinationControllerDelegate-Protocol.h>

@class HMAccessory, NSString, TVCSHome, TVCSRoom;

@interface TVCSAccessory : NSObject <HMAccessoryDelegatePrivate, HMMediaDestinationControllerDelegate>
{
    HMAccessory *_hmAccessory;	// 8 = 0x8
}

+ (id)accessoryWithHMAccessory:(id)arg1;	// IMP=0x000000000002bdc0
- (void).cxx_destruct;	// IMP=0x000000000002c8f0
@property(retain, nonatomic) HMAccessory *hmAccessory; // @synthesize hmAccessory=_hmAccessory;
- (void)mediaDestinationControllerDidUpdateAvailableDestinations:(id)arg1;	// IMP=0x000000000002c820
- (void)mediaDestinationController:(id)arg1 didUpdateDestination:(id)arg2;	// IMP=0x000000000002c780
- (void)accessoryDidUpdateAudioDestinationController:(id)arg1;	// IMP=0x000000000002c690
- (void)accessoryDidUpdateName:(id)arg1;	// IMP=0x000000000002c570
@property(readonly) NSString *name;
@property(readonly, copy) NSString *description;
- (void)setConfiguredName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002c3f0
@property(readonly) NSString *configuredName;
@property(readonly) TVCSRoom *room;
@property(readonly) TVCSHome *home;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

