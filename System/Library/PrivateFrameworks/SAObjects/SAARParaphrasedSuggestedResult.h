//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol SAClientBoundCommand;

@interface SAARParaphrasedSuggestedResult
{
}

+ (id)paraphrasedSuggestedResultWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x00000000000281f1
+ (id)paraphrasedSuggestedResult;	// IMP=0x00000000000281df
@property(nonatomic) long long rank;
@property(copy, nonatomic) NSString *displayText;
@property(retain, nonatomic) id <SAClientBoundCommand> command;
- (id)encodedClassName;	// IMP=0x00000000000281d2
- (id)groupIdentifier;	// IMP=0x00000000000281be

@end

