//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface SASSpeechPartialResult
{
}

+ (id)speechPartialResultWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000003ee92
+ (id)speechPartialResult;	// IMP=0x000000000003ee80
- (_Bool)requiresResponse;	// IMP=0x000000000003eefc
@property(copy, nonatomic) NSArray *tokens;
@property(copy, nonatomic) NSString *language;
- (id)encodedClassName;	// IMP=0x000000000003ee73
- (id)groupIdentifier;	// IMP=0x000000000003ee5f

@end
