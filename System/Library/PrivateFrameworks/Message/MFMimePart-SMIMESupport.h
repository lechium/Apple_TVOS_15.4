//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MIME/MFMimePart.h>

@interface MFMimePart (SMIMESupport)
- (id)copySigners;	// IMP=0x00000000000b2a28
- (id)SMIMEError;	// IMP=0x00000000000b29f0
- (id)decodeApplicationPkcs7_mime;	// IMP=0x00000000000b3133
- (id)decodeMultipartSigned;	// IMP=0x00000000000b2a68
- (_Bool)_needsSignatureVerification:(id *)arg1;	// IMP=0x00000000000b3c3a
- (void)_setSigners:(id)arg1;	// IMP=0x00000000000b3c19
- (void)_setSMIMEError:(id)arg1;	// IMP=0x00000000000b3bf8
- (id)newEncryptedPartWithData:(id)arg1 compositionSpecification:(id)arg2 encryptedData:(id *)arg3;	// IMP=0x00000000000b4d07
- (id)newSignedPartWithData:(id)arg1 sender:(id)arg2 compositionSpecification:(id)arg3 signatureData:(id *)arg4;	// IMP=0x00000000000b48ea
@end

