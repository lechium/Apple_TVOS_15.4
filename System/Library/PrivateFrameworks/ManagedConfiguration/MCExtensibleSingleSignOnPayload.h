//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSString;

@interface MCExtensibleSingleSignOnPayload
{
    NSString *_esso_type;	// 80 = 0x50
    NSString *_esso_realm;	// 88 = 0x58
    NSString *_esso_extensionIdentifier;	// 96 = 0x60
    NSString *_esso_teamIdentifier;	// 104 = 0x68
    NSDictionary *_esso_extensionData;	// 112 = 0x70
    NSArray *_esso_URLs;	// 120 = 0x78
    NSArray *_esso_hosts;	// 128 = 0x80
    NSString *_esso_screenLockedBehavior;	// 136 = 0x88
    NSArray *_esso_deniedBundleIdentifiers;	// 144 = 0x90
}

+ (id)localizedPluralForm;	// IMP=0x00000000000609b7
+ (id)localizedSingularForm;	// IMP=0x00000000000609a4
+ (id)typeStrings;	// IMP=0x000000000006093d
- (void).cxx_destruct;	// IMP=0x00000000000635c8
@property(retain, nonatomic) NSArray *esso_deniedBundleIdentifiers; // @synthesize esso_deniedBundleIdentifiers=_esso_deniedBundleIdentifiers;
@property(retain, nonatomic) NSString *esso_screenLockedBehavior; // @synthesize esso_screenLockedBehavior=_esso_screenLockedBehavior;
@property(retain, nonatomic) NSArray *esso_hosts; // @synthesize esso_hosts=_esso_hosts;
@property(retain, nonatomic) NSArray *esso_URLs; // @synthesize esso_URLs=_esso_URLs;
@property(retain, nonatomic) NSDictionary *esso_extensionData; // @synthesize esso_extensionData=_esso_extensionData;
@property(retain, nonatomic) NSString *esso_teamIdentifier; // @synthesize esso_teamIdentifier=_esso_teamIdentifier;
@property(retain, nonatomic) NSString *esso_extensionIdentifier; // @synthesize esso_extensionIdentifier=_esso_extensionIdentifier;
@property(retain, nonatomic) NSString *esso_realm; // @synthesize esso_realm=_esso_realm;
@property(retain, nonatomic) NSString *esso_type; // @synthesize esso_type=_esso_type;
- (id)_validateURLString:(id)arg1 outError:(id *)arg2;	// IMP=0x00000000000631ce
- (_Bool)_validateHost:(id)arg1 outError:(id *)arg2;	// IMP=0x00000000000630ef
- (id)payloadDescriptionKeyValueSections;	// IMP=0x0000000000062870
- (id)title;	// IMP=0x000000000006271c
- (id)stubDictionary;	// IMP=0x0000000000062197
- (id)verboseDescription;	// IMP=0x0000000000061a76
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;	// IMP=0x00000000000609ca

@end

