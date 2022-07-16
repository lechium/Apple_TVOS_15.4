//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSpeech/NSCopying-Protocol.h>

@class CSAudioRecordContext;
@protocol OS_xpc_object;

@interface CSAudioStreamRequest : NSObject <NSCopying>
{
    _Bool _requiresHistoricalBuffer;	// 8 = 0x8
    _Bool _useCustomizedRecordSettings;	// 9 = 0x9
    _Bool _lpcmIsFloat;	// 10 = 0xa
    _Bool _isSiri;	// 11 = 0xb
    unsigned int _lpcmBitDepth;	// 12 = 0xc
    unsigned int _numberOfChannels;	// 16 = 0x10
    unsigned int _encoderBitRate;	// 20 = 0x14
    CSAudioRecordContext *_recordContext;	// 24 = 0x18
    long long _audioFormat;	// 32 = 0x20
    double _sampleRate;	// 40 = 0x28
}

+ (id)requestForSpeexRecordSettingsWithContext:(id)arg1;	// IMP=0x000000000002c69b
+ (id)requestForOpusRecordSettingsWithContext:(id)arg1;	// IMP=0x000000000002c52d
+ (id)requestForLpcmRecordSettingsWithContext:(id)arg1;	// IMP=0x000000000002c3a2
+ (id)defaultRequestWithContext:(id)arg1;	// IMP=0x000000000002c0fa
- (void).cxx_destruct;	// IMP=0x000000000002cf07
@property(nonatomic) _Bool isSiri; // @synthesize isSiri=_isSiri;
@property(nonatomic) unsigned int encoderBitRate; // @synthesize encoderBitRate=_encoderBitRate;
@property(nonatomic) unsigned int numberOfChannels; // @synthesize numberOfChannels=_numberOfChannels;
@property(nonatomic) _Bool lpcmIsFloat; // @synthesize lpcmIsFloat=_lpcmIsFloat;
@property(nonatomic) unsigned int lpcmBitDepth; // @synthesize lpcmBitDepth=_lpcmBitDepth;
@property(nonatomic) double sampleRate; // @synthesize sampleRate=_sampleRate;
@property(nonatomic) long long audioFormat; // @synthesize audioFormat=_audioFormat;
@property(nonatomic) _Bool useCustomizedRecordSettings; // @synthesize useCustomizedRecordSettings=_useCustomizedRecordSettings;
@property(nonatomic) _Bool requiresHistoricalBuffer; // @synthesize requiresHistoricalBuffer=_requiresHistoricalBuffer;
@property(retain, nonatomic) CSAudioRecordContext *recordContext; // @synthesize recordContext=_recordContext;
- (id)description;	// IMP=0x000000000002cd37
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002cc56
@property(readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;
- (id)initWithXPCObject:(id)arg1;	// IMP=0x000000000002c969
- (id)initTandemWithRequest:(id)arg1;	// IMP=0x000000000002c7fa

@end

