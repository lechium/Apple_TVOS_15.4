//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AMSBiometricsSignatureRequest;

@interface AMSBiometricsSignatureTask
{
    AMSBiometricsSignatureRequest *_request;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000c7d18
@property(readonly, nonatomic) AMSBiometricsSignatureRequest *request; // @synthesize request=_request;
- (id)_performSignatureInProcess;	// IMP=0x00000000000c6bdf
- (id)_performSignatureOutOfProcess;	// IMP=0x00000000000c6a77
- (id)performSignature;	// IMP=0x00000000000c68d1
- (id)initWithRequest:(id)arg1;	// IMP=0x00000000000c6863

@end

