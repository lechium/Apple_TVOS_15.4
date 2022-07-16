//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLocale, NSMutableDictionary;

@interface AFSpeakableUtteranceParser : NSObject
{
    NSMutableDictionary *_providers;	// 8 = 0x8
    id _functionHandler;	// 16 = 0x10
    NSLocale *_locale;	// 24 = 0x18
}

+ (id)parseUserGeneratedMessage:(id)arg1;	// IMP=0x00000000000811e8
+ (_Bool)_shouldAutomaticallyProvideFunctions;	// IMP=0x00000000000811e0
- (void).cxx_destruct;	// IMP=0x000000000008259e
- (id)parseStringRemovingControlCharacters:(id)arg1 error:(id *)arg2 containsPrivacySensitiveContents:(_Bool *)arg3;	// IMP=0x0000000000082555
- (id)parseStringRemovingControlCharacters:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000082516
- (id)parseStringWithFormat:(id)arg1 error:(id *)arg2 containsPrivacySensitiveContents:(_Bool *)arg3 hasExternalDomains:(_Bool *)arg4;	// IMP=0x00000000000824d2
- (id)parseStringWithFormat:(id)arg1 error:(id *)arg2 containsPrivacySensitiveContents:(_Bool *)arg3;	// IMP=0x00000000000824bd
- (id)parseStringWithFormat:(id)arg1 error:(id *)arg2 hasExternalDomains:(_Bool *)arg3;	// IMP=0x000000000008247c
- (id)parseStringWithFormat:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000082467
- (id)_parseStringWithFormat:(id)arg1 error:(id *)arg2 hadEmpties:(_Bool *)arg3 containsPrivacySensitiveContents:(_Bool *)arg4 externalProviders:(_Bool *)arg5;	// IMP=0x000000000008243e
- (id)parseStringWithFormat:(id)arg1 includeControlCharacters:(_Bool)arg2 error:(id *)arg3 hadEmpties:(_Bool *)arg4 containsPrivacySensitiveContents:(_Bool *)arg5 externalProviders:(_Bool *)arg6;	// IMP=0x000000000008217f
- (id)_handleControlCodeAtIndex:(unsigned int)arg1 withBuffer:(CDStruct_f9502b4c)arg2 totalLength:(unsigned long long)arg3 consumedLength:(unsigned int *)arg4 hadEmpties:(_Bool *)arg5 containsPrivacySensitiveContents:(_Bool *)arg6 externalProviders:(_Bool *)arg7;	// IMP=0x0000000000081f6a
- (id)_handleOptionalAtIndex:(unsigned int)arg1 withBuffer:(CDStruct_f9502b4c)arg2 totalLength:(unsigned long long)arg3 consumedLength:(unsigned int *)arg4 containsPrivacySensitiveContents:(_Bool *)arg5 externalProviders:(_Bool *)arg6;	// IMP=0x0000000000081d68
- (id)_handleProviderAtIndex:(unsigned int)arg1 withBuffer:(CDStruct_f9502b4c)arg2 totalLength:(unsigned long long)arg3 consumedLength:(unsigned int *)arg4 containsPrivacySensitiveContents:(_Bool *)arg5 hadEmpties:(_Bool *)arg6 externalProviders:(_Bool *)arg7;	// IMP=0x00000000000818f8
@property(nonatomic) _Bool handlesFunctions;
@property(nonatomic) _Bool handleTTSCodes;
- (void)registerProvider:(id)arg1 forNamespace:(id)arg2;	// IMP=0x0000000000081515
- (id)initWithLocale:(id)arg1;	// IMP=0x0000000000081437
- (id)init;	// IMP=0x00000000000813dd

@end
