//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _SFPBGraphicalFloat, _SFPBSearchSuggestion;

@protocol _SFPBSearchSuggestion <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSDictionary *serverFeatures;
@property(copy, nonatomic) NSString *detailText;
@property(copy, nonatomic) NSString *utteranceText;
@property(copy, nonatomic) NSString *scopedSearchApplicationBundleIdentifier;
@property(copy, nonatomic) NSString *fbr;
@property(nonatomic) _Bool previouslyEngaged;
@property(copy, nonatomic) NSString *bundleIdentifier;
@property(copy, nonatomic) NSString *topicIdentifier;
@property(copy, nonatomic) NSArray *duplicateSuggestions;
@property(nonatomic) int type;
@property(retain, nonatomic) _SFPBGraphicalFloat *score;
@property(copy, nonatomic) NSString *query;
@property(copy, nonatomic) NSString *suggestion;
@property(copy, nonatomic) NSString *identifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (void)setServerFeatures:(double)arg1 forKey:(NSString *)arg2;
- (_Bool)getServerFeatures:(double *)arg1 forKey:(NSString *)arg2;
- (_SFPBSearchSuggestion *)duplicateSuggestionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)duplicateSuggestionsCount;
- (void)addDuplicateSuggestions:(_SFPBSearchSuggestion *)arg1;
- (void)clearDuplicateSuggestions;
@end

