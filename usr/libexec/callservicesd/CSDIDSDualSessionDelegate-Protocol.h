//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CSDIDSDualSession, NSArray, NSData;

@protocol CSDIDSDualSessionDelegate <NSObject>
- (void)session:(CSDIDSDualSession *)arg1 endedWithReason:(int)arg2;

@optional
- (void)session:(CSDIDSDualSession *)arg1 receivedData:(NSData *)arg2;
- (void)session:(CSDIDSDualSession *)arg1 receivedInvitationCancelWithData:(NSData *)arg2;
- (void)session:(CSDIDSDualSession *)arg1 receivedInvitationDeclineWithData:(NSData *)arg2;
- (void)session:(CSDIDSDualSession *)arg1 receivedInvitationAcceptWithData:(NSData *)arg2;
- (void)session:(CSDIDSDualSession *)arg1 invitationSentToPushTokens:(NSArray *)arg2 shouldBreakBeforeMake:(_Bool)arg3;
- (void)sessionStarted:(CSDIDSDualSession *)arg1;
@end

