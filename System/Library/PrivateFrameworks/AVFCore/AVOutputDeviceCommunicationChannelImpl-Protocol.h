//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFCore/NSObject-Protocol.h>

@class AVOutputDeviceCommunicationChannel, NSData;

@protocol AVOutputDeviceCommunicationChannelImpl <NSObject>
@property __weak AVOutputDeviceCommunicationChannel *parentChannel;
- (void)close;
- (void)sendData:(NSData *)arg1 completionHandler:(void (^)(NSError *))arg2;
@end

