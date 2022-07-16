//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface PKAccountWebServiceCertificatesResponse
{
    _Bool _devSigned;	// 8 = 0x8
    NSArray *_encryptionCertificates;	// 16 = 0x10
    NSString *_encryptionVersion;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001f0fa0
@property(nonatomic) _Bool devSigned; // @synthesize devSigned=_devSigned;
@property(readonly, copy, nonatomic) NSString *encryptionVersion; // @synthesize encryptionVersion=_encryptionVersion;
@property(readonly, copy, nonatomic) NSArray *encryptionCertificates; // @synthesize encryptionCertificates=_encryptionCertificates;
- (id)initWithData:(id)arg1;	// IMP=0x00000000001f0baf

@end

