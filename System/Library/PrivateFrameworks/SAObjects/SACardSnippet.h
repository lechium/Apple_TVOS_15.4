//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData;

@interface SACardSnippet
{
}

+ (id)snippetWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000025948
+ (id)snippet;	// IMP=0x0000000000025936
@property(copy, nonatomic) NSArray *referencedSnippets;
@property(copy, nonatomic) NSArray *referencedCommands;
@property(copy, nonatomic) NSArray *contextItems;
@property(copy, nonatomic) NSData *compactSizeCardData;
@property(copy, nonatomic) NSData *cardData;
- (id)encodedClassName;	// IMP=0x0000000000025929
- (id)groupIdentifier;	// IMP=0x0000000000025915

@end

