//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, TURoute;

@interface CSDAudioRouteCollection : NSObject
{
    NSString *_category;	// 8 = 0x8
    NSString *_mode;	// 16 = 0x10
    NSArray *_routes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000fc43d
@property(copy, nonatomic) NSArray *routes; // @synthesize routes=_routes;
@property(retain, nonatomic) NSString *mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
- (void)_setRoutesFromRouteDictionaries:(id)arg1;	// IMP=0x00100000000fc175
- (void)updatePickableRoutes;	// IMP=0x00100000000fc16f
- (_Bool)_anyRoutePassesTest:(CDUnknownBlockType)arg1;	// IMP=0x00100000000fc095
- (id)_routePassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00100000000fbf2e
- (void)enumerateRoutesInvokingBlock:(CDUnknownBlockType)arg1 forRoutesPassingTest:(CDUnknownBlockType)arg2;	// IMP=0x00100000000fbdbb
@property(readonly, nonatomic, getter=isInEarAudioRouteAvailable) _Bool inEarAudioRouteAvailable;
@property(readonly, nonatomic) _Bool isAnyPreferredRouteAvailableAndActive;
- (_Bool)isAnyRouteAvailableWithUniqueIdentifier:(id)arg1;	// IMP=0x00100000000fbc44
- (_Bool)isAnyRouteAvailableWithBluetoothEndpointType:(long long)arg1;	// IMP=0x00100000000fbbcb
@property(readonly, nonatomic, getter=isBluetoothRouteAvailable) _Bool bluetoothRouteAvailable;
@property(readonly, nonatomic, getter=isCarAudioRouteAvailable) _Bool carAudioRouteAvailable;
@property(readonly, nonatomic, getter=isAirTunesRouteAvailable) _Bool airTunesRouteAvailable;
@property(readonly, nonatomic, getter=isWirelessHeadsetRouteAvailable) _Bool wirelessHeadsetAvailable;
@property(readonly, nonatomic, getter=isSpeakerRouteAvailable) _Bool speakerRouteAvailable;
@property(readonly, nonatomic, getter=isReceiverRouteAvailable) _Bool receiverRouteAvailable;
@property(readonly, nonatomic) TURoute *preferredAndActiveRoute;
@property(readonly, nonatomic) TURoute *preferredRoute;
- (id)description;	// IMP=0x00100000000fb982
- (id)initWithCategory:(id)arg1 mode:(id)arg2;	// IMP=0x00100000000fb8e4

@end

