//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class IMAVChat, IMHandle;

@protocol IMAVControllerDelegate <NSObject>

@optional
- (void)inviteFailedFromIMHandle:(IMHandle *)arg1 reason:(long long)arg2;
- (void)createdOutgoingIMAVChat:(IMAVChat *)arg1;
- (void)invitedToIMAVChat:(IMAVChat *)arg1;
@end

