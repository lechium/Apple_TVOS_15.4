//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLSCurationContext, NSArray, NSDate, PGManagerWorkingContext, PGSuggestionNotificationProfile, PHPhotoLibrary;
@protocol OS_os_log;

@interface PGSuggestionSession : NSObject
{
    NSDate *_universalToday;	// 8 = 0x8
    unsigned char _profile;	// 16 = 0x10
    PGManagerWorkingContext *_workingContext;	// 24 = 0x18
    CLSCurationContext *_curationContext;	// 32 = 0x20
    NSObject<OS_os_log> *_loggingConnection;	// 40 = 0x28
    NSArray *_existingSuggestions;	// 48 = 0x30
    NSArray *_collidableMemories;	// 56 = 0x38
    PGSuggestionNotificationProfile *_notificationProfile;	// 64 = 0x40
    NSArray *_deniedSuggestions;	// 72 = 0x48
}

+ (id)availableSuggestionTypeInfosWithProfile:(unsigned char)arg1;	// IMP=0x00000000001ce6ca
+ (id)suggestionSubtypesWithProfile:(unsigned char)arg1;	// IMP=0x00000000001ce517
+ (id)suggestionTypesWithProfile:(unsigned char)arg1;	// IMP=0x00000000001ce364
+ (id)suggesterClassesWithProfile:(unsigned char)arg1;	// IMP=0x00000000001ce18d
- (void).cxx_destruct;	// IMP=0x00000000001cdc71
@property(retain, nonatomic) NSArray *deniedSuggestions; // @synthesize deniedSuggestions=_deniedSuggestions;
@property(readonly, nonatomic) PGSuggestionNotificationProfile *notificationProfile; // @synthesize notificationProfile=_notificationProfile;
@property(retain, nonatomic) NSArray *collidableMemories; // @synthesize collidableMemories=_collidableMemories;
@property(retain, nonatomic) NSArray *existingSuggestions; // @synthesize existingSuggestions=_existingSuggestions;
@property(readonly, nonatomic) CLSCurationContext *curationContext; // @synthesize curationContext=_curationContext;
@property(readonly, nonatomic) PGManagerWorkingContext *workingContext; // @synthesize workingContext=_workingContext;
@property(readonly, nonatomic) unsigned char profile; // @synthesize profile=_profile;
- (id)existingSuggestionsWithState:(unsigned short)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000001cda24
- (id)infosWithSuggestions:(id)arg1;	// IMP=0x00000000001cd4d8
- (id)infoWithSuggestion:(id)arg1;	// IMP=0x00000000001cd086
- (_Bool)suggestion:(id)arg1 isEqualToSuggestion:(id)arg2;	// IMP=0x00000000001ccae0
- (_Bool)_suggestionIsColliding:(id)arg1 relaxCollisionRules:(_Bool)arg2;	// IMP=0x00000000001cc824
- (id)uncoordinatedSuggestionsWithOptions:(id)arg1 progress:(CDUnknownBlockType)arg2;	// IMP=0x00000000001cb6f4
- (id)coordinatedSuggestionsWithOptions:(id)arg1 progress:(CDUnknownBlockType)arg2;	// IMP=0x00000000001ca78e
- (id)activeSuggestersWithOptions:(id)arg1;	// IMP=0x00000000001ca415
- (id)suggestionsWithOptions:(id)arg1 progress:(CDUnknownBlockType)arg2;	// IMP=0x00000000001c977e
- (_Bool)suggesterClass:(Class)arg1 supportsOptions:(id)arg2;	// IMP=0x00000000001c95d1
- (id)suggesterClasses;	// IMP=0x00000000001c95a9
- (id)bestSuggestionBetween:(id)arg1 and:(id)arg2;	// IMP=0x00000000001c959c
- (id)electedSuggestionsFromSuggestions:(id)arg1 options:(id)arg2 progress:(CDUnknownBlockType)arg3;	// IMP=0x00000000001c8caf
- (_Bool)suggestion:(id)arg1 collidesWithMemories:(id)arg2;	// IMP=0x00000000001c8a2d
- (id)suggestionsByCollisionReasonCollidingWithSuggestion:(id)arg1 inSuggestions:(id)arg2 relaxCollisionRules:(_Bool)arg3;	// IMP=0x00000000001c8748
- (id)anySuggestionCollidingWithSuggestion:(id)arg1 inSuggestions:(id)arg2 relaxCollisionRules:(_Bool)arg3 collisionReason:(unsigned long long *)arg4;	// IMP=0x00000000001c8545
- (_Bool)supportsRelaxedCollisionRulesForSuggester:(id)arg1;	// IMP=0x00000000001c84fa
- (unsigned long long)deniedSuggestion:(id)arg1 collidesWithSuggestion:(id)arg2;	// IMP=0x00000000001c8363
- (unsigned long long)outstanderSuggestion:(id)arg1 collidesWithSuggestion:(id)arg2 relaxCollisionRules:(_Bool)arg3;	// IMP=0x00000000001c80dd
- (unsigned long long)singleAssetSuggestion:(id)arg1 collidesWithSuggestion:(id)arg2;	// IMP=0x00000000001c7b1f
- (unsigned long long)reasonForSuggestion:(id)arg1 collidingWithSuggestion:(id)arg2 relaxCollisionRules:(_Bool)arg3;	// IMP=0x00000000001c7a1f
@property(readonly, nonatomic) NSObject<OS_os_log> *loggingConnection; // @synthesize loggingConnection=_loggingConnection;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary;
- (id)initWithProfile:(unsigned char)arg1 workingContext:(id)arg2;	// IMP=0x00000000001c78c8

@end

