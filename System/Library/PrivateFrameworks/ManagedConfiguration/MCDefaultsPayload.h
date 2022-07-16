//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface MCDefaultsPayload
{
    NSDictionary *_defaultsByDomain;	// 80 = 0x50
}

+ (id)localizedPluralForm;	// IMP=0x000000000002a637
+ (id)localizedSingularForm;	// IMP=0x000000000002a624
+ (id)typeStrings;	// IMP=0x000000000002a604
- (void).cxx_destruct;	// IMP=0x000000000002b5d5
- (id)title;	// IMP=0x000000000002b579
- (id)defaultsForDomain:(id)arg1;	// IMP=0x000000000002b540
- (id)domains;	// IMP=0x000000000002b523
- (id)verboseDescription;	// IMP=0x000000000002b493
- (id)stubDictionary;	// IMP=0x000000000002b1ab
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;	// IMP=0x000000000002a724
- (_Bool)isAllowedToWriteDefaults;	// IMP=0x000000000002a64a

@end
