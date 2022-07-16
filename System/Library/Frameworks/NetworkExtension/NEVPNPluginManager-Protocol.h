//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NETunnelNetworkSettings, NSError;

@protocol NEVPNPluginManager
- (void)setTunnelNetworkSettings:(NETunnelNetworkSettings *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)setStatus:(int)arg1 error:(NSError *)arg2;
- (void)handleIPCDetached;
- (void)createVirtualInterfaceOfType:(long long)arg1 maxPendingPackets:(unsigned long long)arg2 completionHandler:(void (^)(NSFileHandle *))arg3;
@end

