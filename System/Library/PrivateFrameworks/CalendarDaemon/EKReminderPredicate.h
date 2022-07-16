//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CalendarDaemon/EKDefaultPropertiesLoading-Protocol.h>

@class NSArray, NSDate, NSString;

@interface EKReminderPredicate <EKDefaultPropertiesLoading>
{
    _Bool _limitToCompletedOrIncomplete;	// 32 = 0x20
    _Bool _completed;	// 33 = 0x21
    _Bool _useCompletionDateAsAlternate;	// 34 = 0x22
    _Bool _useDueDateAsCompletionDate;	// 35 = 0x23
    _Bool _shouldLoadDefaultProperties;	// 36 = 0x24
    int _sortOrder;	// 40 = 0x28
    NSString *_listTitle;	// 48 = 0x30
    NSDate *_dueAfter;	// 56 = 0x38
    NSDate *_dueBefore;	// 64 = 0x40
    NSString *_searchTerm;	// 72 = 0x48
    unsigned long long _maxResults;	// 80 = 0x50
    NSArray *_defaultPropertiesToLoad;	// 88 = 0x58
}

+ (id)predicateWithCalendars:(id)arg1;	// IMP=0x00000000000322d1
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000322c9
- (void).cxx_destruct;	// IMP=0x000000000003343c
@property(retain, nonatomic) NSArray *defaultPropertiesToLoad; // @synthesize defaultPropertiesToLoad=_defaultPropertiesToLoad;
@property(nonatomic) _Bool shouldLoadDefaultProperties; // @synthesize shouldLoadDefaultProperties=_shouldLoadDefaultProperties;
@property(nonatomic) unsigned long long maxResults; // @synthesize maxResults=_maxResults;
@property(nonatomic) int sortOrder; // @synthesize sortOrder=_sortOrder;
@property(retain, nonatomic) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
@property(nonatomic) _Bool useDueDateAsCompletionDate; // @synthesize useDueDateAsCompletionDate=_useDueDateAsCompletionDate;
@property(nonatomic) _Bool useCompletionDateAsAlternate; // @synthesize useCompletionDateAsAlternate=_useCompletionDateAsAlternate;
@property(retain, nonatomic) NSDate *dueBefore; // @synthesize dueBefore=_dueBefore;
@property(retain, nonatomic) NSDate *dueAfter; // @synthesize dueAfter=_dueAfter;
@property(nonatomic) _Bool completed; // @synthesize completed=_completed;
@property(nonatomic) _Bool limitToCompletedOrIncomplete; // @synthesize limitToCompletedOrIncomplete=_limitToCompletedOrIncomplete;
@property(retain, nonatomic) NSString *listTitle; // @synthesize listTitle=_listTitle;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000032ff6
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000032ca8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000325ac
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003235c
- (id)initWithCalendars:(id)arg1;	// IMP=0x000000000003231a
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg1;	// IMP=0x00000000000334a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

