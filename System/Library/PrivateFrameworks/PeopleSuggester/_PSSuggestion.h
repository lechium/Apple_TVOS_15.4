//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PeopleSuggester/NSSecureCoding-Protocol.h>

@class INImage, NSArray, NSDictionary, NSNumber, NSString;

@interface _PSSuggestion : NSObject <NSSecureCoding>
{
    _Bool _familySuggestion;	// 8 = 0x8
    _Bool _isAdaptedModelCreated;	// 9 = 0x9
    _Bool _isAdaptedModelUsed;	// 10 = 0xa
    NSString *_conversationIdentifier;	// 16 = 0x10
    NSString *_groupName;	// 24 = 0x18
    NSArray *_recipients;	// 32 = 0x20
    NSString *_bundleID;	// 40 = 0x28
    INImage *_image;	// 48 = 0x30
    long long _suggestionType;	// 56 = 0x38
    NSString *_derivedIntentIdentifier;	// 64 = 0x40
    NSString *_messagesGroupIdentifier;	// 72 = 0x48
    NSNumber *_score;	// 80 = 0x50
    NSString *_adaptedModelRecipeID;	// 88 = 0x58
    NSString *_supportedBundleIDs;	// 96 = 0x60
    NSString *_utiList;	// 104 = 0x68
    NSDictionary *_modelSuggestionProxies;	// 112 = 0x70
    NSString *_reason;	// 120 = 0x78
    NSString *_reasonType;	// 128 = 0x80
    NSString *_trialID;	// 136 = 0x88
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000942f1
+ (id)suggestionForBundleID:(id)arg1 derivedIntentIdentifier:(id)arg2 knowledgeStore:(id)arg3 contactResolver:(id)arg4 reason:(id)arg5 reasonType:(id)arg6;	// IMP=0x0000000000093b0c
- (void).cxx_destruct;	// IMP=0x000000000009553d
@property(copy, nonatomic) NSString *trialID; // @synthesize trialID=_trialID;
@property(copy, nonatomic) NSString *reasonType; // @synthesize reasonType=_reasonType;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(retain, nonatomic) NSDictionary *modelSuggestionProxies; // @synthesize modelSuggestionProxies=_modelSuggestionProxies;
@property(retain, nonatomic) NSString *utiList; // @synthesize utiList=_utiList;
@property(retain, nonatomic) NSString *supportedBundleIDs; // @synthesize supportedBundleIDs=_supportedBundleIDs;
@property(retain, nonatomic) NSString *adaptedModelRecipeID; // @synthesize adaptedModelRecipeID=_adaptedModelRecipeID;
@property(nonatomic) _Bool isAdaptedModelUsed; // @synthesize isAdaptedModelUsed=_isAdaptedModelUsed;
@property(nonatomic) _Bool isAdaptedModelCreated; // @synthesize isAdaptedModelCreated=_isAdaptedModelCreated;
@property(readonly, nonatomic) _Bool familySuggestion; // @synthesize familySuggestion=_familySuggestion;
@property(readonly, copy, nonatomic) NSNumber *score; // @synthesize score=_score;
@property(copy, nonatomic) NSString *messagesGroupIdentifier; // @synthesize messagesGroupIdentifier=_messagesGroupIdentifier;
@property(readonly, copy, nonatomic) NSString *derivedIntentIdentifier; // @synthesize derivedIntentIdentifier=_derivedIntentIdentifier;
@property(nonatomic) long long suggestionType; // @synthesize suggestionType=_suggestionType;
@property(retain, nonatomic) INImage *image; // @synthesize image=_image;
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(readonly, copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(readonly, copy, nonatomic) NSString *conversationIdentifier; // @synthesize conversationIdentifier=_conversationIdentifier;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000094d00
- (unsigned long long)hash;	// IMP=0x0000000000094b27
- (id)description;	// IMP=0x0000000000094976
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000947b9
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000942f9
- (id)initWithBundleID:(id)arg1 conversationIdentifier:(id)arg2 groupName:(id)arg3 recipients:(id)arg4 derivedIntentIdentifier:(id)arg5 image:(id)arg6 reason:(id)arg7 reasonType:(id)arg8 score:(id)arg9 familySuggestion:(_Bool)arg10;	// IMP=0x00000000000938bc
- (id)initWithBundleID:(id)arg1 conversationIdentifier:(id)arg2 groupName:(id)arg3 recipients:(id)arg4 derivedIntentIdentifier:(id)arg5 image:(id)arg6 reason:(id)arg7 reasonType:(id)arg8 score:(id)arg9;	// IMP=0x000000000009387f
- (id)initWithBundleID:(id)arg1 conversationIdentifier:(id)arg2 groupName:(id)arg3 recipients:(id)arg4 reason:(id)arg5 reasonType:(id)arg6 score:(id)arg7;	// IMP=0x000000000009384b
- (id)initWithBundleID:(id)arg1 conversationIdentifier:(id)arg2 groupName:(id)arg3 recipients:(id)arg4 reason:(id)arg5 reasonType:(id)arg6;	// IMP=0x0000000000093817
- (id)initWithBundleID:(id)arg1 conversationIdentifier:(id)arg2 groupName:(id)arg3 recipients:(id)arg4;	// IMP=0x00000000000937f5

@end

