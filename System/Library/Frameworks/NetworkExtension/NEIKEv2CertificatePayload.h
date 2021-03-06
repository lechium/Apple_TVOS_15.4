//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface NEIKEv2CertificatePayload
{
    unsigned long long _encoding;	// 24 = 0x18
    NSData *_certificateData;	// 32 = 0x20
}

+ (id)copyTypeDescription;	// IMP=0x00000000000dcffd
- (void).cxx_destruct;	// IMP=0x00000000000dd4e8
@property(retain) NSData *certificateData; // @synthesize certificateData=_certificateData;
@property unsigned long long encoding; // @synthesize encoding=_encoding;
- (_Bool)parsePayloadData;	// IMP=0x00000000000dd2dc
- (_Bool)generatePayloadData;	// IMP=0x00000000000dd18f
- (_Bool)hasRequiredFields;	// IMP=0x00000000000dd13e
- (id)description;	// IMP=0x00000000000dd125
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000000dd015
- (unsigned long long)type;	// IMP=0x00000000000dd00a

@end

