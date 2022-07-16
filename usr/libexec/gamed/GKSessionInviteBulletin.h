//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

@interface GKSessionInviteBulletin
{
    NSURL *_sessionURL;	// 104 = 0x68
    NSString *_senderName;	// 112 = 0x70
    NSString *_userMessage;	// 120 = 0x78
}

+ (void)loadBulletinsForPushNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x004000000010ec43
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000010ec3b
- (void).cxx_destruct;	// IMP=0x002000000011058e
@property(retain, nonatomic) NSString *userMessage; // @synthesize userMessage=_userMessage;
@property(retain, nonatomic) NSString *senderName; // @synthesize senderName=_senderName;
@property(retain, nonatomic) NSURL *sessionURL; // @synthesize sessionURL=_sessionURL;
- (void)assembleBulletin;	// IMP=0x0010000000110494
- (void)handleAction:(id)arg1;	// IMP=0x001000000011017c
- (void)handleAcceptAction;	// IMP=0x001000000010fe2b
- (id)assembledMessage;	// IMP=0x001000000010fc75
- (id)aggregateDictionaryKey;	// IMP=0x001000000010fc61
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000010fa1f
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000010f7b8
- (id)initWithPushNotification:(id)arg1;	// IMP=0x001000000010f4bd

@end

