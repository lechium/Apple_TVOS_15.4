//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSSet, NSString, PSSearchResults;
@protocol PSSearchOperationDelegate;

@interface PSSearchOperation : NSOperation
{
    _Bool _newQuery;	// 8 = 0x8
    NSString *_query;	// 16 = 0x10
    NSSet *_rootEntries;	// 24 = 0x18
    PSSearchResults *_currentResults;	// 32 = 0x20
    id <PSSearchOperationDelegate> _delegate;	// 40 = 0x28
}

+ (struct __CFStringTokenizer *)_wordBoundaryTokenizer;	// IMP=0x00000000000d4bb8
- (void).cxx_destruct;	// IMP=0x00000000000d5401
@property __weak id <PSSearchOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isNewQuery) _Bool newQuery; // @synthesize newQuery=_newQuery;
@property(readonly, copy) PSSearchResults *currentResults; // @synthesize currentResults=_currentResults;
@property(readonly, copy, nonatomic) NSSet *rootEntries; // @synthesize rootEntries=_rootEntries;
@property(readonly, copy, nonatomic) NSString *query; // @synthesize query=_query;
- (id)debugDescription;	// IMP=0x00000000000d530c
- (id)description;	// IMP=0x00000000000d5273
- (id)_filterEntriesMatchingQuery:(id)arg1 forQuery:(id)arg2;	// IMP=0x00000000000d4e00
- (_Bool)_systemLanguageHasContinuousScript;	// IMP=0x00000000000d4c3f
- (_Bool)_searchEntries:(id)arg1 forQuery:(id)arg2;	// IMP=0x00000000000d4883
- (void)main;	// IMP=0x00000000000d46c4
- (void)_didCancel;	// IMP=0x00000000000d4667
- (void)dealloc;	// IMP=0x00000000000d4627
- (id)initWithSearchQuery:(id)arg1 rootEntries:(id)arg2;	// IMP=0x00000000000d4560

@end

