//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSCopying-Protocol.h>
#import <TelephonyUtilities/NSSecureCoding-Protocol.h>

@class NSString, TUConversationParticipantCapabilities, TUHandle;

@interface TUConversationParticipant : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _muted;	// 8 = 0x8
    _Bool _audioEnabled;	// 9 = 0x9
    _Bool _videoEnabled;	// 10 = 0xa
    _Bool _screenEnabled;	// 11 = 0xb
    _Bool _audioPaused;	// 12 = 0xc
    _Bool _momentsAvailable;	// 13 = 0xd
    _Bool _lightweight;	// 14 = 0xe
    _Bool _remoteAudioEnabled;	// 15 = 0xf
    _Bool _remoteVideoEnabled;	// 16 = 0x10
    _Bool _localAccountHandle;	// 17 = 0x11
    unsigned long long _identifier;	// 24 = 0x18
    TUHandle *_handle;	// 32 = 0x20
    TUConversationParticipantCapabilities *_capabilities;	// 40 = 0x28
    long long _streamToken;	// 48 = 0x30
    long long _screenToken;	// 56 = 0x38
    long long _audioPriority;	// 64 = 0x40
    long long _videoPriority;	// 72 = 0x48
    NSString *_avcIdentifier;	// 80 = 0x50
    NSString *_activeIDSDestination;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002a772
- (void).cxx_destruct;	// IMP=0x000000000002bc86
@property(nonatomic, getter=isLocalAccountHandle) _Bool localAccountHandle; // @synthesize localAccountHandle=_localAccountHandle;
@property(copy, nonatomic) NSString *activeIDSDestination; // @synthesize activeIDSDestination=_activeIDSDestination;
@property(nonatomic, getter=isRemoteVideoEnabled) _Bool remoteVideoEnabled; // @synthesize remoteVideoEnabled=_remoteVideoEnabled;
@property(nonatomic, getter=isRemoteAudioEnabled) _Bool remoteAudioEnabled; // @synthesize remoteAudioEnabled=_remoteAudioEnabled;
@property(copy, nonatomic) NSString *avcIdentifier; // @synthesize avcIdentifier=_avcIdentifier;
@property(nonatomic) long long videoPriority; // @synthesize videoPriority=_videoPriority;
@property(nonatomic) long long audioPriority; // @synthesize audioPriority=_audioPriority;
@property(nonatomic) long long screenToken; // @synthesize screenToken=_screenToken;
@property(nonatomic) long long streamToken; // @synthesize streamToken=_streamToken;
@property(copy, nonatomic) TUConversationParticipantCapabilities *capabilities; // @synthesize capabilities=_capabilities;
@property(nonatomic, getter=isLightweight) _Bool lightweight; // @synthesize lightweight=_lightweight;
@property(nonatomic, getter=isMomentsAvailable) _Bool momentsAvailable; // @synthesize momentsAvailable=_momentsAvailable;
@property(nonatomic, getter=isAudioPaused) _Bool audioPaused; // @synthesize audioPaused=_audioPaused;
@property(nonatomic, getter=isScreenEnabled) _Bool screenEnabled; // @synthesize screenEnabled=_screenEnabled;
@property(nonatomic, getter=isVideoEnabled) _Bool videoEnabled; // @synthesize videoEnabled=_videoEnabled;
@property(nonatomic, getter=isAudioEnabled) _Bool audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_muted;
@property(readonly, copy, nonatomic) TUHandle *handle; // @synthesize handle=_handle;
@property(readonly, nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
- (_Bool)isEqualToParticipant:(id)arg1;	// IMP=0x000000000002b78c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002b725
- (unsigned long long)hash;	// IMP=0x000000000002b4bb
- (id)description;	// IMP=0x000000000002b2da
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002b2a2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002b26a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002ac6b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002a77a
- (id)initWithConversationParticipant:(id)arg1;	// IMP=0x000000000002a674
- (id)initWithIdentifier:(unsigned long long)arg1 handle:(id)arg2;	// IMP=0x000000000002a5e4

@end

