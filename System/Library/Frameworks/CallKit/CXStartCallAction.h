//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CallKit/CXVideoAspectRatioDescriptor-Protocol.h>

@class CXHandle, NSDate, NSString, NSUUID;

@interface CXStartCallAction <CXVideoAspectRatioDescriptor>
{
    _Bool _video;	// 8 = 0x8
    _Bool _relay;	// 9 = 0x9
    _Bool _upgrade;	// 10 = 0xa
    _Bool _retry;	// 11 = 0xb
    _Bool _emergency;	// 12 = 0xc
    _Bool _voicemail;	// 13 = 0xd
    _Bool _shouldSuppressInCallUI;	// 14 = 0xe
    CXHandle *_handle;	// 16 = 0x10
    NSString *_contactIdentifier;	// 24 = 0x18
    NSDate *_dateStarted;	// 32 = 0x20
    long long _ttyType;	// 40 = 0x28
    NSUUID *_localSenderIdentityUUID;	// 48 = 0x30
    struct CGSize _localPortraitAspectRatio;	// 56 = 0x38
    struct CGSize _localLandscapeAspectRatio;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000034dfb
+ (double)timeout;	// IMP=0x00000000000349e7
- (void).cxx_destruct;	// IMP=0x0000000000035901
@property(nonatomic) _Bool shouldSuppressInCallUI; // @synthesize shouldSuppressInCallUI=_shouldSuppressInCallUI;
@property(retain, nonatomic) NSUUID *localSenderIdentityUUID; // @synthesize localSenderIdentityUUID=_localSenderIdentityUUID;
@property(nonatomic, setter=setTTYType:) long long ttyType; // @synthesize ttyType=_ttyType;
@property(nonatomic, getter=isVoicemail) _Bool voicemail; // @synthesize voicemail=_voicemail;
@property(nonatomic, getter=isEmergency) _Bool emergency; // @synthesize emergency=_emergency;
@property(nonatomic, getter=isRetry) _Bool retry; // @synthesize retry=_retry;
@property(nonatomic, getter=isUpgrade) _Bool upgrade; // @synthesize upgrade=_upgrade;
@property(nonatomic, getter=isRelay) _Bool relay; // @synthesize relay=_relay;
@property(copy, nonatomic) NSDate *dateStarted; // @synthesize dateStarted=_dateStarted;
@property(nonatomic, getter=isVideo) _Bool video; // @synthesize video=_video;
@property(copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(copy, nonatomic) CXHandle *handle; // @synthesize handle=_handle;
@property(nonatomic) struct CGSize localLandscapeAspectRatio; // @synthesize localLandscapeAspectRatio=_localLandscapeAspectRatio;
@property(nonatomic) struct CGSize localPortraitAspectRatio; // @synthesize localPortraitAspectRatio=_localPortraitAspectRatio;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000035240
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000034e03
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;	// IMP=0x0000000000034c79
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;	// IMP=0x0000000000034b60
- (void)updateAsFulfilledWithDateStarted:(id)arg1;	// IMP=0x0000000000034b0e
- (void)fulfillWithDateStarted:(id)arg1;	// IMP=0x0000000000034a48
- (void)fulfill;	// IMP=0x00000000000349f5
- (id)customDescription;	// IMP=0x0000000000034714
- (id)initWithCallUUID:(id)arg1 handle:(id)arg2;	// IMP=0x0000000000034662

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

