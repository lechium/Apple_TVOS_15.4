//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface HMImmutableStringSetting
{
    NSString *_stringValue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001be102
@property(readonly, copy) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001bdfe8
- (id)attributeDescriptions;	// IMP=0x00000000001bdec1
- (id)initWithKeyPath:(id)arg1 readOnly:(_Bool)arg2 payload:(id)arg3;	// IMP=0x00000000001bdd48
- (id)payloadCopy;	// IMP=0x00000000001bdc06
- (id)protoPayload;	// IMP=0x00000000001bdacc
- (id)initWithProtoPayload:(id)arg1;	// IMP=0x00000000001bd789
- (id)settingValue;	// IMP=0x00000000001bd720
- (id)settingWithSettingValue:(id)arg1;	// IMP=0x00000000001bd611
- (id)initWithKeyPath:(id)arg1 readOnly:(_Bool)arg2 stringValue:(id)arg3;	// IMP=0x00000000001bd556

@end

