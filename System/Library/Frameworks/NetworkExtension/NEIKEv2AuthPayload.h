//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NEIKEv2AuthenticationProtocol, NSData;

@interface NEIKEv2AuthPayload
{
    NEIKEv2AuthenticationProtocol *_authProtocol;	// 24 = 0x18
    NSData *_authenticationData;	// 32 = 0x20
}

+ (id)copyTypeDescription;	// IMP=0x00000000000dd9f9
- (void).cxx_destruct;	// IMP=0x00000000000de0c8
@property(retain, nonatomic) NSData *authenticationData; // @synthesize authenticationData=_authenticationData;
@property(retain, nonatomic) NEIKEv2AuthenticationProtocol *authProtocol; // @synthesize authProtocol=_authProtocol;
- (_Bool)parsePayloadData;	// IMP=0x00000000000ddda6
- (_Bool)generatePayloadData;	// IMP=0x00000000000ddc52
- (_Bool)hasRequiredFields;	// IMP=0x00000000000ddba2
- (id)description;	// IMP=0x00000000000ddb89
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000000dda55
@property(readonly, nonatomic) unsigned long long method;
- (unsigned long long)type;	// IMP=0x00000000000dda06

@end
