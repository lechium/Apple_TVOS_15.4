//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HAPSecuritySessionEncryption, HMDDataStreamSetupOperation, NSError;
@protocol HMDDataStreamTransport;

@protocol HMDDataStreamSetupOperationDelegate <NSObject>
- (void)dataStreamSetupOperation:(HMDDataStreamSetupOperation *)arg1 didFailWithError:(NSError *)arg2;
- (void)dataStreamSetupOperation:(HMDDataStreamSetupOperation *)arg1 didSucceedWithTransport:(id <HMDDataStreamTransport>)arg2 sessionEncryption:(HAPSecuritySessionEncryption *)arg3;
@end

