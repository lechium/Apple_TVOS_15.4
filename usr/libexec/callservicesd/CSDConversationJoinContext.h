//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString, NSUUID, TUConversationProvider;

@interface CSDConversationJoinContext : NSObject
{
    _Bool _invitation;	// 8 = 0x8
    _Bool _shouldSuppressInCallUI;	// 9 = 0x9
    _Bool _videoEnabled;	// 10 = 0xa
    _Bool _videoPaused;	// 11 = 0xb
    _Bool _wantsStagingArea;	// 12 = 0xc
    _Bool _upgrade;	// 13 = 0xd
    _Bool _initiator;	// 14 = 0xe
    _Bool _momentsAvailable;	// 15 = 0xf
    _Bool _mirageAvailable;	// 16 = 0x10
    _Bool _gftDowngradeToOneToOneAvailable;	// 17 = 0x11
    _Bool _uPlusNDowngradeAvailable;	// 18 = 0x12
    _Bool _video;	// 19 = 0x13
    _Bool _lightweight;	// 20 = 0x14
    _Bool _oneToOneModeEnabled;	// 21 = 0x15
    NSUUID *_messagesGroupUUID;	// 24 = 0x18
    NSString *_messagesGroupName;	// 32 = 0x20
    NSUUID *_upgradeSessionUUID;	// 40 = 0x28
    TUConversationProvider *_provider;	// 48 = 0x30
    NSSet *_invitationPreferences;	// 56 = 0x38
    unsigned long long _sharePlayProtocolVersion;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000005466f
@property(nonatomic) unsigned long long sharePlayProtocolVersion; // @synthesize sharePlayProtocolVersion=_sharePlayProtocolVersion;
@property(retain, nonatomic) NSSet *invitationPreferences; // @synthesize invitationPreferences=_invitationPreferences;
@property(retain, nonatomic) TUConversationProvider *provider; // @synthesize provider=_provider;
@property(nonatomic, getter=isOneToOneModeEnabled) _Bool oneToOneModeEnabled; // @synthesize oneToOneModeEnabled=_oneToOneModeEnabled;
@property(copy, nonatomic) NSUUID *upgradeSessionUUID; // @synthesize upgradeSessionUUID=_upgradeSessionUUID;
@property(copy, nonatomic) NSString *messagesGroupName; // @synthesize messagesGroupName=_messagesGroupName;
@property(copy, nonatomic) NSUUID *messagesGroupUUID; // @synthesize messagesGroupUUID=_messagesGroupUUID;
@property(nonatomic, getter=isLightweight) _Bool lightweight; // @synthesize lightweight=_lightweight;
@property(nonatomic, getter=isVideo) _Bool video; // @synthesize video=_video;
@property(nonatomic, getter=isUPlusNDowngradeAvailable) _Bool uPlusNDowngradeAvailable; // @synthesize uPlusNDowngradeAvailable=_uPlusNDowngradeAvailable;
@property(nonatomic, getter=isGFTDowngradeToOneToOneAvailable) _Bool gftDowngradeToOneToOneAvailable; // @synthesize gftDowngradeToOneToOneAvailable=_gftDowngradeToOneToOneAvailable;
@property(nonatomic, getter=isMirageAvailable) _Bool mirageAvailable; // @synthesize mirageAvailable=_mirageAvailable;
@property(nonatomic, getter=isMomentsAvailable) _Bool momentsAvailable; // @synthesize momentsAvailable=_momentsAvailable;
@property(nonatomic, getter=isInitiator) _Bool initiator; // @synthesize initiator=_initiator;
@property(nonatomic, getter=isUpgrade) _Bool upgrade; // @synthesize upgrade=_upgrade;
@property(nonatomic) _Bool wantsStagingArea; // @synthesize wantsStagingArea=_wantsStagingArea;
@property(nonatomic, getter=isVideoPaused) _Bool videoPaused; // @synthesize videoPaused=_videoPaused;
@property(nonatomic, getter=isVideoEnabled) _Bool videoEnabled; // @synthesize videoEnabled=_videoEnabled;
@property(nonatomic) _Bool shouldSuppressInCallUI; // @synthesize shouldSuppressInCallUI=_shouldSuppressInCallUI;
@property(nonatomic, getter=isInvitation) _Bool invitation; // @synthesize invitation=_invitation;
- (id)description;	// IMP=0x0010000000053dea

@end

