//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AXAudioHardwareManager : NSObject
{
}

+ (id)defaultPort;	// IMP=0x0000000000048490
+ (void)setDefaultPort:(id)arg1;	// IMP=0x000000000004847c
+ (id)defaultPortChannels;	// IMP=0x0000000000048416
+ (id)channelsForPort:(id)arg1;	// IMP=0x00000000000481b9
+ (void)updateTestingChannels;	// IMP=0x0000000000047fe0
+ (id)defaultRouteDescription;	// IMP=0x0000000000047dba
+ (void)setDefaultRouteDescription:(id)arg1;	// IMP=0x0000000000047da6
+ (void)setDefaultPortChannels:(id)arg1;	// IMP=0x0000000000047d92
+ (void)disableMultiroute;	// IMP=0x0000000000047cc7
+ (void)enableMultiroute;	// IMP=0x0000000000047bcf
+ (_Bool)channelsAreWiredHeadphones:(id)arg1;	// IMP=0x00000000000479f8
+ (_Bool)channelsAreAirplay:(id)arg1 route:(id)arg2;	// IMP=0x000000000004790f
+ (id)sharedManager;	// IMP=0x000000000004786c
- (void)setSavedChannels:(id)arg1 forOutput:(id)arg2 forSource:(long long)arg3;	// IMP=0x000000000004976c
- (void)_handleSurroundSoundDefaults:(id)arg1 returnedChannels:(id)arg2 port:(id)arg3 source:(long long)arg4;	// IMP=0x0000000000049343
- (id)savedChannelsForOutput:(id)arg1 forSource:(long long)arg2;	// IMP=0x00000000000488fc
- (id)_savedIdForRouteDescription:(id)arg1;	// IMP=0x00000000000486d1
- (_Bool)isDolbyAtmosConfigured;	// IMP=0x0000000000047e26
- (id)init;	// IMP=0x00000000000478c1

@end

