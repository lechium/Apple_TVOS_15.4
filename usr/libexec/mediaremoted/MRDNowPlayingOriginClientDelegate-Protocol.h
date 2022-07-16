//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class MRApplicationActivity, MRDNowPlayingClient, MRDNowPlayingOriginClient, MRDeviceInfo, MRPlayerPath, NSArray;

@protocol MRDNowPlayingOriginClientDelegate <NSObject>

@optional
- (void)nowPlayingOriginClientDidChangeAudioFormatContentInfo:(MRDNowPlayingOriginClient *)arg1;
- (void)nowPlayingOriginClientPlaybackDidTimeout:(MRDNowPlayingOriginClient *)arg1;
- (void)nowPlayingOriginClient:(MRDNowPlayingOriginClient *)arg1 activePlayerClientsDidChange:(NSArray *)arg2;
- (void)nowPlayingOriginClient:(MRDNowPlayingOriginClient *)arg1 currentRouteVolumeDidChange:(float)arg2;
- (void)nowPlayingOriginClient:(MRDNowPlayingOriginClient *)arg1 currentRouteVolumeControlCapabilitiesDidChange:(unsigned int)arg2;
- (void)nowPlayingOriginClient:(MRDNowPlayingOriginClient *)arg1 clientDidUnregister:(MRDNowPlayingClient *)arg2;
- (void)nowPlayingOriginClient:(MRDNowPlayingOriginClient *)arg1 clientDidRegister:(MRDNowPlayingClient *)arg2;
- (void)nowPlayingOriginClient:(MRDNowPlayingOriginClient *)arg1 applicationActivityStatusDidChange:(MRApplicationActivity *)arg2;
- (void)nowPlayingOriginClient:(MRDNowPlayingOriginClient *)arg1 applicationActivityDidEnd:(MRApplicationActivity *)arg2;
- (void)nowPlayingOriginClient:(MRDNowPlayingOriginClient *)arg1 applicationActivityDidBegin:(MRApplicationActivity *)arg2;
- (void)nowPlayingOriginClient:(MRDNowPlayingOriginClient *)arg1 activePlayerPathDidChange:(MRPlayerPath *)arg2 withPlaybackState:(unsigned int)arg3;
- (void)nowPlayingOriginClient:(MRDNowPlayingOriginClient *)arg1 deviceInfoDidChange:(MRDeviceInfo *)arg2 previousDeviceInfo:(MRDeviceInfo *)arg3;
@end

