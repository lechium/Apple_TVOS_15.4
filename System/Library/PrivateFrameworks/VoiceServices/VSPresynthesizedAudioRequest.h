//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceServices/NSCopying-Protocol.h>
#import <VoiceServices/NSSecureCoding-Protocol.h>

@class NSData, NSString, NSUUID;

@interface VSPresynthesizedAudioRequest : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _enqueue;	// 8 = 0x8
    unsigned int _audioSessionID;	// 12 = 0xc
    NSData *_audioData;	// 16 = 0x10
    NSString *_text;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    NSUUID *_siriRequestId;	// 40 = 0x28
    unsigned long long _requestCreatedTimestamp;	// 48 = 0x30
    NSString *_clientBundleIdentifier;	// 56 = 0x38
    NSUUID *_accessoryID;	// 64 = 0x40
    unsigned long long _pcmDataSize;	// 72 = 0x48
    CDUnknownBlockType _stopHandler;	// 80 = 0x50
    struct AudioStreamBasicDescription _decoderStreamDescription;	// 88 = 0x58
    struct AudioStreamBasicDescription _playerStreamDescription;	// 128 = 0x80
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002ad39
- (void).cxx_destruct;	// IMP=0x000000000002b472
@property(copy, nonatomic) CDUnknownBlockType stopHandler; // @synthesize stopHandler=_stopHandler;
@property(nonatomic) unsigned long long pcmDataSize; // @synthesize pcmDataSize=_pcmDataSize;
@property(copy, nonatomic) NSUUID *accessoryID; // @synthesize accessoryID=_accessoryID;
@property(copy, nonatomic) NSString *clientBundleIdentifier; // @synthesize clientBundleIdentifier=_clientBundleIdentifier;
@property(nonatomic) unsigned long long requestCreatedTimestamp; // @synthesize requestCreatedTimestamp=_requestCreatedTimestamp;
@property(retain, nonatomic) NSUUID *siriRequestId; // @synthesize siriRequestId=_siriRequestId;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) _Bool enqueue; // @synthesize enqueue=_enqueue;
@property(readonly, nonatomic) struct AudioStreamBasicDescription playerStreamDescription; // @synthesize playerStreamDescription=_playerStreamDescription;
@property(readonly, nonatomic) struct AudioStreamBasicDescription decoderStreamDescription; // @synthesize decoderStreamDescription=_decoderStreamDescription;
@property(readonly, copy, nonatomic) NSData *audioData; // @synthesize audioData=_audioData;
@property(nonatomic) unsigned int audioSessionID; // @synthesize audioSessionID=_audioSessionID;
- (_Bool)canLogRequestText;	// IMP=0x000000000002b33e
- (id)description;	// IMP=0x000000000002b14e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002b0dd
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002ae79
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002ad41
- (_Bool)hasValidAudio;	// IMP=0x000000000002acb6
- (id)logText;	// IMP=0x000000000002ac8e
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000000002ac23
- (id)initWithAudioData:(id)arg1 decoderStreamDescription:(struct AudioStreamBasicDescription)arg2 playerStreamDescription:(struct AudioStreamBasicDescription)arg3;	// IMP=0x000000000002ab69
- (id)initWithAudioData:(id)arg1 playerStreamDescription:(struct AudioStreamBasicDescription)arg2;	// IMP=0x000000000002aab0
- (id)init;	// IMP=0x000000000002aaa2

@end
