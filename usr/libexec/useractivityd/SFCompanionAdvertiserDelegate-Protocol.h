//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSInputStream, NSOutputStream, SFCompanionAdvertiser;

@protocol SFCompanionAdvertiserDelegate <NSObject>

@optional
- (void)advertiser:(SFCompanionAdvertiser *)arg1 didReceiveInputStream:(NSInputStream *)arg2 outputStream:(NSOutputStream *)arg3;
@end

