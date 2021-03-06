//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSIndexSet;

@interface PGSuggestionOptions : NSObject
{
    _Bool _allowNotification;	// 8 = 0x8
    _Bool _shouldProcessExistingSuggestions;	// 9 = 0x9
    _Bool _discardGeneratedSuggestions;	// 10 = 0xa
    _Bool _ignoreCollisionsWithExistingSuggestions;	// 11 = 0xb
    _Bool _ignoreCollisionsWithSameBatchSuggestions;	// 12 = 0xc
    _Bool _generatesInvalidSuggestions;	// 13 = 0xd
    _Bool _computeReasons;	// 14 = 0xe
    _Bool _clearFeaturedSuggestions;	// 15 = 0xf
    NSDate *_localToday;	// 16 = 0x10
    NSDate *_universalStartDate;	// 24 = 0x18
    NSDate *_universalEndDate;	// 32 = 0x20
    NSDate *_universalEndDateForWholeLibrarySuggestions;	// 40 = 0x28
    unsigned long long _maximumNumberOfSuggestions;	// 48 = 0x30
    NSIndexSet *_suggestionTypeWhitelist;	// 56 = 0x38
    NSIndexSet *_suggestionSubtypeWhitelist;	// 64 = 0x40
    NSIndexSet *_suggestionTypeBlocklist;	// 72 = 0x48
    NSIndexSet *_suggestionSubtypeBlocklist;	// 80 = 0x50
    NSDictionary *_additionalOptions;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000443743
@property(nonatomic) _Bool clearFeaturedSuggestions; // @synthesize clearFeaturedSuggestions=_clearFeaturedSuggestions;
@property(retain, nonatomic) NSDictionary *additionalOptions; // @synthesize additionalOptions=_additionalOptions;
@property(nonatomic) _Bool computeReasons; // @synthesize computeReasons=_computeReasons;
@property(nonatomic) _Bool generateInvalidSuggestions; // @synthesize generateInvalidSuggestions=_generatesInvalidSuggestions;
@property(retain, nonatomic) NSIndexSet *suggestionSubtypeBlocklist; // @synthesize suggestionSubtypeBlocklist=_suggestionSubtypeBlocklist;
@property(retain, nonatomic) NSIndexSet *suggestionTypeBlocklist; // @synthesize suggestionTypeBlocklist=_suggestionTypeBlocklist;
@property(retain, nonatomic) NSIndexSet *suggestionSubtypeWhitelist; // @synthesize suggestionSubtypeWhitelist=_suggestionSubtypeWhitelist;
@property(retain, nonatomic) NSIndexSet *suggestionTypeWhitelist; // @synthesize suggestionTypeWhitelist=_suggestionTypeWhitelist;
@property(nonatomic) _Bool ignoreCollisionsWithSameBatchSuggestions; // @synthesize ignoreCollisionsWithSameBatchSuggestions=_ignoreCollisionsWithSameBatchSuggestions;
@property(nonatomic) _Bool ignoreCollisionsWithExistingSuggestions; // @synthesize ignoreCollisionsWithExistingSuggestions=_ignoreCollisionsWithExistingSuggestions;
@property(nonatomic) _Bool discardGeneratedSuggestions; // @synthesize discardGeneratedSuggestions=_discardGeneratedSuggestions;
@property(nonatomic) _Bool shouldProcessExistingSuggestions; // @synthesize shouldProcessExistingSuggestions=_shouldProcessExistingSuggestions;
@property(nonatomic) _Bool allowNotification; // @synthesize allowNotification=_allowNotification;
@property(nonatomic) unsigned long long maximumNumberOfSuggestions; // @synthesize maximumNumberOfSuggestions=_maximumNumberOfSuggestions;
@property(retain, nonatomic) NSDate *universalEndDateForWholeLibrarySuggestions; // @synthesize universalEndDateForWholeLibrarySuggestions=_universalEndDateForWholeLibrarySuggestions;
@property(retain, nonatomic) NSDate *universalEndDate; // @synthesize universalEndDate=_universalEndDate;
@property(retain, nonatomic) NSDate *universalStartDate; // @synthesize universalStartDate=_universalStartDate;
@property(retain, nonatomic) NSDate *localToday; // @synthesize localToday=_localToday;
- (void)setDefaultStartAndEndDatesIfNeededWithNumberOfDays:(long long)arg1;	// IMP=0x00000000004433b7
- (void)setDefaultStartAndEndDatesIfNeeded;	// IMP=0x00000000004433a0
- (id)initWithOptionsDictionary:(id)arg1;	// IMP=0x0000000000442f5f
- (id)init;	// IMP=0x0000000000442eed

@end

