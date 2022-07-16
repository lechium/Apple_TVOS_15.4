//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDictionary, NSNumber;

@interface GKRealTimeMultiplayerBulletin
{
    _Bool _serverHosted;	// 16 = 0x10
    _Bool _isMessageBasedInvite;	// 17 = 0x11
    NSData *_sessionToken;	// 24 = 0x18
    NSNumber *_selfNatType;	// 32 = 0x20
    NSData *_peerPushToken;	// 40 = 0x28
    NSNumber *_peerNatType;	// 48 = 0x30
    NSData *_peerNatIP;	// 56 = 0x38
    NSData *_peerBlob;	// 64 = 0x40
    NSData *_selfTicket;	// 72 = 0x48
    NSNumber *_declineReason;	// 80 = 0x50
    NSDictionary *_clientDictionary;	// 88 = 0x58
    NSNumber *_inviteVersion;	// 96 = 0x60
    unsigned long long _inviteApproach;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000000392ca
- (void).cxx_destruct;	// IMP=0x002000000003b1ed
@property unsigned long long inviteApproach; // @synthesize inviteApproach=_inviteApproach;
@property(nonatomic) _Bool isMessageBasedInvite; // @synthesize isMessageBasedInvite=_isMessageBasedInvite;
@property(retain) NSNumber *inviteVersion; // @synthesize inviteVersion=_inviteVersion;
@property(retain) NSDictionary *clientDictionary; // @synthesize clientDictionary=_clientDictionary;
@property(retain) NSNumber *declineReason; // @synthesize declineReason=_declineReason;
@property(retain) NSData *selfTicket; // @synthesize selfTicket=_selfTicket;
@property(retain) NSData *peerBlob; // @synthesize peerBlob=_peerBlob;
@property(retain) NSData *peerNatIP; // @synthesize peerNatIP=_peerNatIP;
@property(retain) NSNumber *peerNatType; // @synthesize peerNatType=_peerNatType;
@property(retain) NSData *peerPushToken; // @synthesize peerPushToken=_peerPushToken;
@property _Bool serverHosted; // @synthesize serverHosted=_serverHosted;
@property(retain) NSNumber *selfNatType; // @synthesize selfNatType=_selfNatType;
@property(retain) NSData *sessionToken; // @synthesize sessionToken=_sessionToken;
- (id)description;	// IMP=0x001000000003af5e
- (id)customInviteSoundPathForBundleID:(id)arg1;	// IMP=0x001000000003ad5c
- (void)declineInviteWithReason:(int)arg1;	// IMP=0x001000000003ab2e
- (void)updateDeclineInviteTrackingForReason:(long long)arg1;	// IMP=0x001000000003a950
- (id)clientNotification;	// IMP=0x001000000003a42e
- (id)clientNotificationWithiCloudID:(id)arg1;	// IMP=0x001000000003a389
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000039f79
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000039aef
- (id)initWithPushNotification:(id)arg1;	// IMP=0x001000000003967f
- (void)parseClientData:(id)arg1;	// IMP=0x00100000000394c3
- (long long)inviteVersionFromMessage:(id)arg1;	// IMP=0x0010000000039301
- (id)init;	// IMP=0x00100000000392d2

@end

