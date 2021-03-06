//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADAudioSessionCoordinationMessageBeginAudioSessionRequest, ADAudioSessionCoordinationMessageBeginAudioSessionResponse, ADAudioSessionCoordinationMessageEndAudioSessionRequest, ADAudioSessionCoordinationMessageEndAudioSessionResponse, ADAudioSessionCoordinationMessageKeepAudioSessionAliveRequest, ADAudioSessionCoordinationMessageKeepAudioSessionAliveResponse, MISSING_TYPE, NSString;

@interface ADAudioSessionCoordinationMessage : NSObject
{
    unsigned long long _hostTime;	// 8 = 0x8
    long long _type;	// 16 = 0x10
    ADAudioSessionCoordinationMessageBeginAudioSessionRequest *_payloadBeginAudioSessionRequest;	// 24 = 0x18
    ADAudioSessionCoordinationMessageBeginAudioSessionResponse *_payloadBeginAudioSessionResponse;	// 32 = 0x20
    ADAudioSessionCoordinationMessageKeepAudioSessionAliveRequest *_payloadKeepAudioSessionAliveRequest;	// 40 = 0x28
    ADAudioSessionCoordinationMessageKeepAudioSessionAliveResponse *_payloadKeepAudioSessionAliveResponse;	// 48 = 0x30
    ADAudioSessionCoordinationMessageEndAudioSessionRequest *_payloadEndAudioSessionRequest;	// 56 = 0x38
    ADAudioSessionCoordinationMessageEndAudioSessionResponse *_payloadEndAudioSessionResponse;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000028ca5a
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x001000000028d927
- (void).cxx_destruct;	// IMP=0x001000000028d481
@property(readonly, copy, nonatomic) ADAudioSessionCoordinationMessageEndAudioSessionResponse *payloadEndAudioSessionResponse; // @synthesize payloadEndAudioSessionResponse=_payloadEndAudioSessionResponse;
@property(readonly, copy, nonatomic) ADAudioSessionCoordinationMessageEndAudioSessionRequest *payloadEndAudioSessionRequest; // @synthesize payloadEndAudioSessionRequest=_payloadEndAudioSessionRequest;
@property(readonly, copy, nonatomic) ADAudioSessionCoordinationMessageKeepAudioSessionAliveResponse *payloadKeepAudioSessionAliveResponse; // @synthesize payloadKeepAudioSessionAliveResponse=_payloadKeepAudioSessionAliveResponse;
@property(readonly, copy, nonatomic) ADAudioSessionCoordinationMessageKeepAudioSessionAliveRequest *payloadKeepAudioSessionAliveRequest; // @synthesize payloadKeepAudioSessionAliveRequest=_payloadKeepAudioSessionAliveRequest;
@property(readonly, copy, nonatomic) ADAudioSessionCoordinationMessageBeginAudioSessionResponse *payloadBeginAudioSessionResponse; // @synthesize payloadBeginAudioSessionResponse=_payloadBeginAudioSessionResponse;
@property(readonly, copy, nonatomic) ADAudioSessionCoordinationMessageBeginAudioSessionRequest *payloadBeginAudioSessionRequest; // @synthesize payloadBeginAudioSessionRequest=_payloadBeginAudioSessionRequest;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) unsigned long long hostTime; // @synthesize hostTime=_hostTime;
- (id)buildDictionaryRepresentation;	// IMP=0x001000000028d1f8
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x001000000028cddd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000028cca0
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000028ca62
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000028ca4f
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000028c7b8
@property(readonly) unsigned long long hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x001000000028c286
@property(readonly, copy) NSString *description;
- (MISSING_TYPE *)initWithHostTime:type:payloadBeginAudioSessionRequest:payloadBeginAudioSessionResponse:payloadKeepAudioSessionAliveRequest:payloadKeepAudioSessionAliveResponse:payloadEndAudioSessionRequest:payloadEndAudioSessionResponse: /* Error: Ran out of types for this method. */;	// IMP=0x001000000028c0f9
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x001000000028d996

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

