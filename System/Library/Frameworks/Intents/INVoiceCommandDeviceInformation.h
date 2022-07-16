//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface INVoiceCommandDeviceInformation : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>
{
    long long _deviceIdiom;	// 8 = 0x8
    NSNumber *_isHomePodInUltimateMode;	// 16 = 0x10
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;	// IMP=0x000000000038e213
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000038e20b
- (void).cxx_destruct;	// IMP=0x000000000038e1fb
@property(readonly, copy, nonatomic) NSNumber *isHomePodInUltimateMode; // @synthesize isHomePodInUltimateMode=_isHomePodInUltimateMode;
@property(readonly, nonatomic) long long deviceIdiom; // @synthesize deviceIdiom=_deviceIdiom;
- (id)_dictionaryRepresentation;	// IMP=0x000000000038e0ec
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x000000000038e010
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;	// IMP=0x000000000038dead
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000038de3b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000038dd92
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000038dd87
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000038dced
@property(readonly) unsigned long long hash;
- (id)initWithDeviceIdiom:(long long)arg1 isHomePodInUltimateMode:(id)arg2;	// IMP=0x000000000038dbfc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
