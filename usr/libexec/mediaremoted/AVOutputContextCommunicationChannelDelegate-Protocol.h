//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class AVOutputContext, AVOutputContextCommunicationChannel, NSData;

@protocol AVOutputContextCommunicationChannelDelegate <NSObject>

@optional
- (void)outputContext:(AVOutputContext *)arg1 didCloseCommunicationChannel:(AVOutputContextCommunicationChannel *)arg2;
- (void)outputContext:(AVOutputContext *)arg1 didReceiveData:(NSData *)arg2 fromCommunicationChannel:(AVOutputContextCommunicationChannel *)arg3;
- (void)outputContextOutgoingCommunicationChannelDidBecomeAvailable:(AVOutputContext *)arg1;
@end

