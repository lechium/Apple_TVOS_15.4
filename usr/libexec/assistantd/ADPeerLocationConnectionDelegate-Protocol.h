//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class ADPeerLocationConnection, CLLocation;

@protocol ADPeerLocationConnectionDelegate <NSObject>
- (void)peerLocationConnectionSuggestsClearingCachedLocation:(ADPeerLocationConnection *)arg1;
- (void)peerLocationConnection:(ADPeerLocationConnection *)arg1 didReceiveUnsolicitedLocation:(CLLocation *)arg2;
@end

