//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary;

@interface MCSetupAssistantPayload
{
    NSArray *_skipKeys;	// 80 = 0x50
}

+ (id)localizedPluralForm;	// IMP=0x000000000006ef87
+ (id)localizedSingularForm;	// IMP=0x000000000006ef74
+ (id)typeStrings;	// IMP=0x000000000006ef0d
- (void).cxx_destruct;	// IMP=0x000000000006f56a
@property(readonly, nonatomic) NSArray *skipKeys; // @synthesize skipKeys=_skipKeys;
- (id)payloadDescriptionKeyValueSections;	// IMP=0x000000000006f46c
- (id)verboseDescription;	// IMP=0x000000000006f3b6
- (id)stubDictionary;	// IMP=0x000000000006f333
@property(readonly, nonatomic) NSDictionary *configuration;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;	// IMP=0x000000000006ef9a

@end

