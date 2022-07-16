//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData, NSDictionary, NSString;

@interface MCSCEPPayload
{
    NSString *_URLString;	// 136 = 0x88
    NSString *_CAInstanceName;	// 144 = 0x90
    NSString *_challenge;	// 152 = 0x98
    NSArray *_subject;	// 160 = 0xa0
    unsigned long long _keySize;	// 168 = 0xa8
    int _usageFlags;	// 176 = 0xb0
    NSData *_CAFingerprint;	// 184 = 0xb8
    NSArray *_CACaps;	// 192 = 0xc0
    NSDictionary *_subjectAltName;	// 200 = 0xc8
    unsigned long long _retries;	// 208 = 0xd0
    unsigned long long _retryDelay;	// 216 = 0xd8
}

+ (id)localizedPluralForm;	// IMP=0x000000000005e7f9
+ (id)localizedSingularForm;	// IMP=0x000000000005e7e6
+ (id)typeStrings;	// IMP=0x000000000005e7c6
- (void).cxx_destruct;	// IMP=0x000000000005fcdb
@property(readonly, nonatomic) unsigned long long retryDelay; // @synthesize retryDelay=_retryDelay;
@property(readonly, nonatomic) unsigned long long retries; // @synthesize retries=_retries;
@property(readonly, retain, nonatomic) NSDictionary *subjectAltName; // @synthesize subjectAltName=_subjectAltName;
@property(readonly, retain, nonatomic) NSArray *CACaps; // @synthesize CACaps=_CACaps;
@property(readonly, retain, nonatomic) NSData *CAFingerprint; // @synthesize CAFingerprint=_CAFingerprint;
@property(readonly, nonatomic) int usageFlags; // @synthesize usageFlags=_usageFlags;
@property(readonly, nonatomic) unsigned long long keySize; // @synthesize keySize=_keySize;
@property(readonly, retain, nonatomic) NSArray *subject; // @synthesize subject=_subject;
@property(readonly, retain, nonatomic) NSString *challenge; // @synthesize challenge=_challenge;
@property(readonly, retain, nonatomic) NSString *CAInstanceName; // @synthesize CAInstanceName=_CAInstanceName;
@property(readonly, retain, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
- (id)payloadDescriptionKeyValueSections;	// IMP=0x000000000005f87f
- (id)verboseDescription;	// IMP=0x000000000005f64c
- (id)stubDictionary;	// IMP=0x000000000005f5b3
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;	// IMP=0x000000000005e81c
- (_Bool)isIdentity;	// IMP=0x000000000005e814
- (_Bool)isRoot;	// IMP=0x000000000005e80c

@end

