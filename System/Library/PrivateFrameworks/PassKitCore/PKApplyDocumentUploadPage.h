//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface PKApplyDocumentUploadPage
{
    _Bool _requiresCoreIDVImageCaptureUpload;	// 8 = 0x8
    NSArray *_acceptableDocuments;	// 16 = 0x10
    NSArray *_imageCaptureEncryptionCertificates;	// 24 = 0x18
    NSString *_imageCaptureEncryptionVersion;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002974c5
@property(readonly, copy, nonatomic) NSString *imageCaptureEncryptionVersion; // @synthesize imageCaptureEncryptionVersion=_imageCaptureEncryptionVersion;
@property(readonly, copy, nonatomic) NSArray *imageCaptureEncryptionCertificates; // @synthesize imageCaptureEncryptionCertificates=_imageCaptureEncryptionCertificates;
@property(readonly, nonatomic) _Bool requiresCoreIDVImageCaptureUpload; // @synthesize requiresCoreIDVImageCaptureUpload=_requiresCoreIDVImageCaptureUpload;
@property(retain, nonatomic) NSArray *acceptableDocuments; // @synthesize acceptableDocuments=_acceptableDocuments;
- (id)initWithJSONObject:(id)arg1;	// IMP=0x0000000000296e63

@end

