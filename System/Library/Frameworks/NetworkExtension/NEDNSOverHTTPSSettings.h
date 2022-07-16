//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL;

@interface NEDNSOverHTTPSSettings
{
    NSURL *_serverURL;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000435af
- (void).cxx_destruct;	// IMP=0x0000000000043ba6
@property(copy) NSURL *serverURL; // @synthesize serverURL=_serverURL;
- (id)initFromLegacyDictionary:(id)arg1;	// IMP=0x0000000000043a8d
- (_Bool)checkValidityAndCollectErrors:(id)arg1;	// IMP=0x0000000000043977
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000000438a0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000043829
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004378e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000043699
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000435c2
- (long long)dnsProtocol;	// IMP=0x00000000000435b7

@end

