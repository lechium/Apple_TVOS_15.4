//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface HMSettingStringValue
{
    NSString *_stringValue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000016f9c9
@property(readonly, copy) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (unsigned long long)hash;	// IMP=0x000000000016f96f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000016f89b
- (id)attributeDescriptions;	// IMP=0x000000000016f774
- (id)initWithProtoPayload:(id)arg1;	// IMP=0x000000000016f546
- (id)protoPayload;	// IMP=0x000000000016f4af
- (id)initWithPayload:(id)arg1;	// IMP=0x000000000016f35b
- (id)payloadCopy;	// IMP=0x000000000016f219
- (id)initWithStringValue:(id)arg1;	// IMP=0x000000000016f18e

@end
