//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class AVCPacketRelay, NSError;

@protocol AVCPacketRelayDelegate <NSObject>
- (void)packetRelay:(AVCPacketRelay *)arg1 didStart:(_Bool)arg2 error:(NSError *)arg3;

@optional
- (void)packetRelay:(AVCPacketRelay *)arg1 didStop:(_Bool)arg2 error:(NSError *)arg3;
@end

