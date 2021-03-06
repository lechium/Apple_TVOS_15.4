//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSString, NSTimeZone, PGFeature;

@interface PGMemoryElectorConfiguration
{
    _Bool _shouldPersist;	// 8 = 0x8
    _Bool _useMaximumTargetNumberOfMemories;	// 9 = 0x9
    _Bool _skipEnrichment;	// 10 = 0xa
    _Bool _allowGuestAsset;	// 11 = 0xb
    unsigned short _pendingState;	// 12 = 0xc
    NSDate *_localDate;	// 16 = 0x10
    NSTimeZone *_timeZone;	// 24 = 0x18
    unsigned long long _maximumTargetNumberOfMemories;	// 32 = 0x20
    unsigned long long _minimumTargetNumberOfMemories;	// 40 = 0x28
    unsigned long long _maximumNumberOfMemoriesWithGuestAssets;	// 48 = 0x30
    double _maximumRatioOfGuestAssets;	// 56 = 0x38
    unsigned long long _numberOfDaysToLookInPast;	// 64 = 0x40
    unsigned long long _numberOfDaysToLookInFuture;	// 72 = 0x48
    unsigned long long _numberOfDaysToFocusOnNewMemoryTypes;	// 80 = 0x50
    unsigned long long _minimumNumberOfDaysBeforeTimeDecay;	// 88 = 0x58
    unsigned long long _minimumNumberOfCuratedAssets;	// 96 = 0x60
    NSArray *_collidableSuggestions;	// 104 = 0x68
    unsigned long long _requestedMemoryCategory;	// 112 = 0x70
    unsigned long long _requestedTriggerType;	// 120 = 0x78
    PGFeature *_requestedFeature;	// 128 = 0x80
    NSString *_requestedUniqueMemoryIdentifier;	// 136 = 0x88
    NSArray *_moodHistory;	// 144 = 0x90
}

+ (id)defaultConfigurationDictionarySource;	// IMP=0x00000000004919f1
- (void).cxx_destruct;	// IMP=0x000000000049251e
@property(nonatomic) _Bool allowGuestAsset; // @synthesize allowGuestAsset=_allowGuestAsset;
@property(retain, nonatomic) NSArray *moodHistory; // @synthesize moodHistory=_moodHistory;
@property(retain, nonatomic) NSString *requestedUniqueMemoryIdentifier; // @synthesize requestedUniqueMemoryIdentifier=_requestedUniqueMemoryIdentifier;
@property(retain, nonatomic) PGFeature *requestedFeature; // @synthesize requestedFeature=_requestedFeature;
@property(nonatomic) unsigned long long requestedTriggerType; // @synthesize requestedTriggerType=_requestedTriggerType;
@property(nonatomic) unsigned long long requestedMemoryCategory; // @synthesize requestedMemoryCategory=_requestedMemoryCategory;
@property(nonatomic) _Bool skipEnrichment; // @synthesize skipEnrichment=_skipEnrichment;
@property(retain, nonatomic) NSArray *collidableSuggestions; // @synthesize collidableSuggestions=_collidableSuggestions;
@property(nonatomic) unsigned long long minimumNumberOfCuratedAssets; // @synthesize minimumNumberOfCuratedAssets=_minimumNumberOfCuratedAssets;
@property(nonatomic) unsigned long long minimumNumberOfDaysBeforeTimeDecay; // @synthesize minimumNumberOfDaysBeforeTimeDecay=_minimumNumberOfDaysBeforeTimeDecay;
@property(nonatomic) unsigned long long numberOfDaysToFocusOnNewMemoryTypes; // @synthesize numberOfDaysToFocusOnNewMemoryTypes=_numberOfDaysToFocusOnNewMemoryTypes;
@property(nonatomic) unsigned long long numberOfDaysToLookInFuture; // @synthesize numberOfDaysToLookInFuture=_numberOfDaysToLookInFuture;
@property(nonatomic) unsigned long long numberOfDaysToLookInPast; // @synthesize numberOfDaysToLookInPast=_numberOfDaysToLookInPast;
@property(nonatomic) double maximumRatioOfGuestAssets; // @synthesize maximumRatioOfGuestAssets=_maximumRatioOfGuestAssets;
@property(nonatomic) unsigned long long maximumNumberOfMemoriesWithGuestAssets; // @synthesize maximumNumberOfMemoriesWithGuestAssets=_maximumNumberOfMemoriesWithGuestAssets;
@property(nonatomic) _Bool useMaximumTargetNumberOfMemories; // @synthesize useMaximumTargetNumberOfMemories=_useMaximumTargetNumberOfMemories;
@property(nonatomic) unsigned long long minimumTargetNumberOfMemories; // @synthesize minimumTargetNumberOfMemories=_minimumTargetNumberOfMemories;
@property(nonatomic) unsigned long long maximumTargetNumberOfMemories; // @synthesize maximumTargetNumberOfMemories=_maximumTargetNumberOfMemories;
@property(nonatomic) unsigned short pendingState; // @synthesize pendingState=_pendingState;
@property(nonatomic) _Bool shouldPersist; // @synthesize shouldPersist=_shouldPersist;
@property(copy, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(copy, nonatomic) NSDate *localDate; // @synthesize localDate=_localDate;
- (unsigned long long)targetNumberOfMemoriesWithMemoryContext:(id)arg1 totalNumberOfMemoryNodes:(unsigned long long)arg2 referenceNumberOfDays:(unsigned long long)arg3;	// IMP=0x0000000000491fc5
- (id)futureMemoryCollisionUniversalDateInterval;	// IMP=0x0000000000491ebc
- (id)pastMemoryCollisionUniversalDateInterval;	// IMP=0x0000000000491ddd
- (id)init;	// IMP=0x0000000000491d1e

@end

