//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MLDictionaryFeatureProvider, MLFeatureDescription, MLFeatureValue, MLInternalSettings, MLKey, MLModelConfiguration, MLModelDescription, MLPredictionOptions, MLSecureModelDecryptCredential, NSArray, NSData, NSNumber, NSString, NSURL;

@protocol CoreMLModelSecurityProtocol
- (void)extractTeamIdentifierWithReply:(void (^)(NSString *, NSError *))arg1;
- (void)stopDecryptionOfModelAtPath:(NSString *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (void)startDecryptionOfModelAtPath:(NSString *)arg1 usingKeyBlob:(NSData *)arg2 completionBlock:(void (^)(NSError *))arg3;
- (void)createPersistentKeyBlobForKeyID:(NSString *)arg1 usesCodeSigningIdentityForEncryption:(_Bool)arg2 completionBlock:(void (^)(NSData *, NSError *))arg3;
- (void)secureModelMLFeatureDescription:(MLFeatureDescription *)arg1 withReply:(void (^)(MLFeatureDescription *, NSString *))arg2;
- (void)secureModelMLModelDescription:(MLModelDescription *)arg1 withReply:(void (^)(MLModelDescription *, NSString *))arg2;
- (void)secureModelMLDictionaryFeatureProvider:(MLDictionaryFeatureProvider *)arg1 withReply:(void (^)(MLDictionaryFeatureProvider *, NSString *))arg2;
- (void)secureModelMLFeatureValue:(MLFeatureValue *)arg1 withReply:(void (^)(MLFeatureValue *, NSString *))arg2;
- (void)secureParameterValueForKey:(MLKey *)arg1 withReply:(void (^)(id, NSError *))arg2;
- (void)securePredictionFromLazyBatch:(NSArray *)arg1 options:(MLPredictionOptions *)arg2 internalSettings:(MLInternalSettings *)arg3 withReply:(void (^)(MLArrayDictionaryFeatureProvider *, NSError *))arg4;
- (void)securePredictionFromLazyFeatures:(NSNumber *)arg1 options:(MLPredictionOptions *)arg2 internalSettings:(MLInternalSettings *)arg3 withReply:(void (^)(MLDictionaryFeatureProvider *, NSError *))arg4;
- (void)secureModelWithContentsOfURL:(NSURL *)arg1 sandboxExtensionToken:(NSString *)arg2 configuration:(MLModelConfiguration *)arg3 internalSettings:(MLInternalSettings *)arg4 decryptCredential:(MLSecureModelDecryptCredential *)arg5 withReply:(void (^)(MLSecureModel *, NSError *))arg6;
@end

