//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSDCallController, CSDCallStateController, CSDRelayMessagingController, NSArray;

@interface CSDRelayController : NSObject
{
    CSDCallStateController *_callStateController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000007c44
@property(retain, nonatomic) CSDCallStateController *callStateController; // @synthesize callStateController=_callStateController;
@property(readonly, nonatomic) NSArray *allCalls;
@property(readonly, nonatomic) CSDCallController *callController;
@property(readonly, nonatomic) CSDRelayMessagingController *relayMessagingController;

@end

