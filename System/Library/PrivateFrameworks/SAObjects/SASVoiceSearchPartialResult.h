//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface SASVoiceSearchPartialResult
{
}

+ (id)voiceSearchPartialResultWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000003059d
+ (id)voiceSearchPartialResult;	// IMP=0x000000000003058b
- (_Bool)requiresResponse;	// IMP=0x0000000000030629
@property(copy, nonatomic) NSArray *voiceSearchResults;
@property(nonatomic) _Bool stable;
@property(copy, nonatomic) NSString *recognitionText;
- (id)encodedClassName;	// IMP=0x000000000003057e
- (id)groupIdentifier;	// IMP=0x000000000003056a

@end

