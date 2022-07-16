//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDAMNoteFilter, EDAMNotesMetadataResultSpec, ENNotebook, NSArray, NSMutableArray, NSSet;

@interface ENSessionFindNotesContext : NSObject
{
    _Bool _requiresLocalMerge;	// 8 = 0x8
    _Bool _sortAscending;	// 9 = 0x9
    ENNotebook *_scopeNotebook;	// 16 = 0x10
    unsigned long long _scope;	// 24 = 0x18
    unsigned long long _sortOrder;	// 32 = 0x20
    EDAMNoteFilter *_noteFilter;	// 40 = 0x28
    EDAMNotesMetadataResultSpec *_resultSpec;	// 48 = 0x30
    unsigned long long _maxResults;	// 56 = 0x38
    NSArray *_allNotebooks;	// 64 = 0x40
    NSMutableArray *_linkedNotebooksToSearch;	// 72 = 0x48
    NSMutableArray *_findMetadataResults;	// 80 = 0x50
    NSSet *_resultGuidsFromBusiness;	// 88 = 0x58
    NSArray *_results;	// 96 = 0x60
    CDUnknownBlockType _completion;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000002d0b25
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
@property(retain, nonatomic) NSSet *resultGuidsFromBusiness; // @synthesize resultGuidsFromBusiness=_resultGuidsFromBusiness;
@property(retain, nonatomic) NSMutableArray *findMetadataResults; // @synthesize findMetadataResults=_findMetadataResults;
@property(retain, nonatomic) NSMutableArray *linkedNotebooksToSearch; // @synthesize linkedNotebooksToSearch=_linkedNotebooksToSearch;
@property(retain, nonatomic) NSArray *allNotebooks; // @synthesize allNotebooks=_allNotebooks;
@property(nonatomic) _Bool sortAscending; // @synthesize sortAscending=_sortAscending;
@property(nonatomic) _Bool requiresLocalMerge; // @synthesize requiresLocalMerge=_requiresLocalMerge;
@property(nonatomic) unsigned long long maxResults; // @synthesize maxResults=_maxResults;
@property(retain, nonatomic) EDAMNotesMetadataResultSpec *resultSpec; // @synthesize resultSpec=_resultSpec;
@property(retain, nonatomic) EDAMNoteFilter *noteFilter; // @synthesize noteFilter=_noteFilter;
@property(nonatomic) unsigned long long sortOrder; // @synthesize sortOrder=_sortOrder;
@property(nonatomic) unsigned long long scope; // @synthesize scope=_scope;
@property(retain, nonatomic) ENNotebook *scopeNotebook; // @synthesize scopeNotebook=_scopeNotebook;

@end

