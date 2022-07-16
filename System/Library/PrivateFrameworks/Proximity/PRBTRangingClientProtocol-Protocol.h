//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Proximity/NSObject-Protocol.h>

@class NSError, NSNumber, NSUUID, PRBTRSSI;

@protocol PRBTRangingClientProtocol <NSObject>
- (void)didFailWithError:(NSError *)arg1;

@optional
- (void)didStopOwnerRangingOnDevice:(NSUUID *)arg1 withError:(NSError *)arg2;
- (void)didStartRangingOnDevice:(NSUUID *)arg1 withError:(NSError *)arg2;
- (void)didConnectToDevice:(NSUUID *)arg1 withError:(NSError *)arg2;
- (void)didFetchTxPower:(NSNumber *)arg1 fromDevice:(NSUUID *)arg2 withError:(NSError *)arg3;
- (void)didReceiveNewBTRSSI:(PRBTRSSI *)arg1;
@end

