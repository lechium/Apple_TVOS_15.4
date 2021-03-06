//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSNumber, NSString, NSURL;

@interface INAnnouncement : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>
{
    NSURL *_speechDataURL;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSString *_speechDataTranscription;	// 24 = 0x18
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;	// IMP=0x000000000047a385
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000047a37d
- (void).cxx_destruct;	// IMP=0x000000000047a34a
@property(readonly, copy, nonatomic) NSString *speechDataTranscription; // @synthesize speechDataTranscription=_speechDataTranscription;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSURL *speechDataURL; // @synthesize speechDataURL=_speechDataURL;
- (id)_dictionaryRepresentation;	// IMP=0x000000000047a1d0
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x000000000047a0f4
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;	// IMP=0x0000000000479fbd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000479f3a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000479dab
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000479da0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000479cd0
@property(readonly) unsigned long long hash;
- (id)initWithSpeechDataURL:(id)arg1 identifier:(id)arg2;	// IMP=0x0000000000479c61
- (id)initWithSpeechDataURL:(id)arg1 identifier:(id)arg2 speechDataTranscription:(id)arg3;	// IMP=0x0000000000479b7b
@property(readonly, copy, nonatomic) NSNumber *endTime;
@property(readonly, copy, nonatomic) NSNumber *startTime;
- (id)initWithSpeechDataURL:(id)arg1 startTime:(id)arg2 endTime:(id)arg3 identifier:(id)arg4;	// IMP=0x0000000000129c71

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

