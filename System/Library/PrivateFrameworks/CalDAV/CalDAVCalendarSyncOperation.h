//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, NSString;
@protocol CalDAVCalendar, CalDAVCalendarSyncDelegate;

@interface CalDAVCalendarSyncOperation
{
    NSError *_savedError;	// 88 = 0x58
    NSString *_nextCtag;	// 96 = 0x60
    NSString *_nextSyncToken;	// 104 = 0x68
    id <CalDAVCalendar> _calendar;	// 112 = 0x70
    NSError *_reportJunkError;	// 120 = 0x78
    unsigned long long _currentStage;	// 128 = 0x80
    _Bool _getScheduleTags;	// 136 = 0x88
    _Bool _getScheduleChanges;	// 137 = 0x89
}

- (void).cxx_destruct;	// IMP=0x00000000000386e5
@property(nonatomic) _Bool getScheduleChanges; // @synthesize getScheduleChanges=_getScheduleChanges;
@property(nonatomic) _Bool getScheduleTags; // @synthesize getScheduleTags=_getScheduleTags;
- (void)recurrenceSplitAction:(id)arg1 failedWithError:(id)arg2;	// IMP=0x0000000000038625
- (void)recurrenceSplitAction:(id)arg1 completedWithUpdatedETag:(id)arg2 updatedScheduleTag:(id)arg3 createdURL:(id)arg4 createdETag:(id)arg5 createdScheduleTag:(id)arg6;	// IMP=0x0000000000038531
- (void)containerSyncTask:(id)arg1 completedWithNewCTag:(id)arg2 newSyncToken:(id)arg3 addedOrModified:(id)arg4 removed:(id)arg5 error:(id)arg6;	// IMP=0x0000000000037d0d
- (void)containerSyncTask:(id)arg1 retrievedAddedOrModifiedActions:(id)arg2 removed:(id)arg3;	// IMP=0x0000000000037cf5
- (_Bool)syncDeleteTask:(id)arg1 error:(id)arg2;	// IMP=0x0000000000037c47
- (_Bool)syncPutTask:(id)arg1 completedWithNewETag:(id)arg2 error:(id)arg3;	// IMP=0x0000000000037b99
- (_Bool)setLocalScheduleTag:(id)arg1 forItemWithURL:(id)arg2 inFolderWithURL:(id)arg3;	// IMP=0x0000000000037a36
- (_Bool)setLocalETag:(id)arg1 forItemWithURL:(id)arg2 inFolderWithURL:(id)arg3;	// IMP=0x00000000000378d3
- (id)copyAllLocalURLsInFolderWithURL:(id)arg1;	// IMP=0x000000000003779e
- (id)copyLocalETagsForURLs:(id)arg1 inFolderWithURL:(id)arg2;	// IMP=0x000000000003764d
- (void)_syncEventsForMerge;	// IMP=0x00000000000373da
- (void)_processAddedOrModified:(id)arg1 removed:(id)arg2;	// IMP=0x0000000000037369
- (void)_syncCalendar;	// IMP=0x00000000000369da
- (void)_splitRecurrences;	// IMP=0x0000000000036678
- (void)_reportJunk;	// IMP=0x00000000000363ac
- (void)_performNextStage;	// IMP=0x0000000000036170
- (void)_advanceStage;	// IMP=0x000000000003600c
- (void)syncCalendar;	// IMP=0x0000000000035feb
- (id)_distantFutureEndDate;	// IMP=0x0000000000035ee3
- (void)_finishWithError:(id)arg1;	// IMP=0x0000000000035d4d
- (id)initWithPrincipal:(id)arg1 calendar:(id)arg2 nextCtag:(id)arg3 nextSyncToken:(id)arg4;	// IMP=0x0000000000035c74

// Remaining properties
@property(nonatomic) id <CalDAVCalendarSyncDelegate> delegate; // @dynamic delegate;

@end

