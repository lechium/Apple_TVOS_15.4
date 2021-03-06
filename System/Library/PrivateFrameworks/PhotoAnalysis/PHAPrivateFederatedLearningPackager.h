//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DESPFLEncryptor, NSNumber;

@interface PHAPrivateFederatedLearningPackager : NSObject
{
    NSNumber *_clippingNorm;	// 8 = 0x8
    NSNumber *_normBinCount;	// 16 = 0x10
    DESPFLEncryptor *_encryptor;	// 24 = 0x18
    struct _NSRange _privacyIdentifierRange;	// 32 = 0x20
    struct _NSRange _privacyIdentifierSmallRange;	// 48 = 0x30
    struct _NSRange _privacyIdentifierLargeRange;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000007da39
@property(readonly, nonatomic) struct _NSRange privacyIdentifierLargeRange; // @synthesize privacyIdentifierLargeRange=_privacyIdentifierLargeRange;
@property(readonly, nonatomic) struct _NSRange privacyIdentifierSmallRange; // @synthesize privacyIdentifierSmallRange=_privacyIdentifierSmallRange;
@property(readonly, nonatomic) struct _NSRange privacyIdentifierRange; // @synthesize privacyIdentifierRange=_privacyIdentifierRange;
@property(retain, nonatomic) DESPFLEncryptor *encryptor; // @synthesize encryptor=_encryptor;
@property(readonly, nonatomic) NSNumber *normBinCount; // @synthesize normBinCount=_normBinCount;
@property(readonly, nonatomic) NSNumber *clippingNorm; // @synthesize clippingNorm=_clippingNorm;
- (_Bool)_generateError:(id *)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3 underlyingError:(id)arg4;	// IMP=0x000000000007d8f3
- (id)_encryptFlattenedTrainingResults:(float *)arg1 elementsCount:(long long)arg2 withEncryptionKey:(id)arg3 shouldEncrypt:(_Bool)arg4 error:(id *)arg5;	// IMP=0x000000000007d7d3
- (_Bool)_callPFLPrivatizeCustomNorm:(float *)arg1 elementsCount:(id)arg2 clippingNorm:(id)arg3 normBinCount:(id)arg4 privacyIdentifier:(id)arg5;	// IMP=0x000000000007d7cb
- (_Bool)_addNoiseToPrePackagedResults:(float *)arg1 elementsCount:(id)arg2 shouldAddNoise:(_Bool)arg3 error:(id *)arg4;	// IMP=0x000000000007d5df
- (id)_flattenTrainingResults:(id)arg1;	// IMP=0x000000000007d3c6
- (id)dataPackageFromTrainingResults:(id)arg1 withEncryptionKey:(id)arg2 shouldAddNoise:(_Bool)arg3 shouldEncrypt:(_Bool)arg4 error:(id *)arg5;	// IMP=0x000000000007d1f1
- (id)initWithClippingNorm:(id)arg1 normBinCount:(id)arg2;	// IMP=0x000000000007d10c

@end

