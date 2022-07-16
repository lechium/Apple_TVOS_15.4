//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TFImageUpload, TFPendingImageUpload;

@interface UploadTestFlightImageTask
{
    TFPendingImageUpload *_pendingUpload;	// 8 = 0x8
    TFImageUpload *_successfulUpload;	// 16 = 0x10
}

+ (id)taskWithPendingImageUpload:(id)arg1 andEntity:(id)arg2;	// IMP=0x004000000007e9d2
- (void).cxx_destruct;	// IMP=0x002000000007f1f4
@property(retain, nonatomic) TFImageUpload *successfulUpload; // @synthesize successfulUpload=_successfulUpload;
@property(retain, nonatomic) TFPendingImageUpload *pendingUpload; // @synthesize pendingUpload=_pendingUpload;
- (void)_handleResult:(id)arg1;	// IMP=0x001000000007ee59
- (id)contentTypeHeaderValue;	// IMP=0x001000000007ee4c
- (id)acceptHeaderValue;	// IMP=0x001000000007ee44
- (void)main;	// IMP=0x001000000007ea46

@end

