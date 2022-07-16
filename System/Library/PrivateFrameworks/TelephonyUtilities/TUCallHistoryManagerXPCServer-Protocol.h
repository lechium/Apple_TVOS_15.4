//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class NSUUID;
@protocol TUCallHistoryManagerXPCClient;

@protocol TUCallHistoryManagerXPCServer <NSObject>
- (void)unregisterClient:(id <TUCallHistoryManagerXPCClient>)arg1;
- (void)registerClient:(id <TUCallHistoryManagerXPCClient>)arg1;
- (oneway void)updateOutgoingLocalParticipantUUID:(NSUUID *)arg1 forCallsWithOutgoingLocalParticipantUUID:(NSUUID *)arg2;
@end

