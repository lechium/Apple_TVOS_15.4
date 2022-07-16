//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSError, NSMutableArray, NSMutableDictionary;

@interface ENSessionListNotebooksContext : NSObject
{
    NSMutableArray *_resultNotebooks;	// 8 = 0x8
    NSMutableArray *_linkedPersonalNotebooks;	// 16 = 0x10
    NSMutableDictionary *_sharedBusinessNotebooks;	// 24 = 0x18
    NSCountedSet *_sharedBusinessNotebookGuids;	// 32 = 0x20
    NSMutableDictionary *_businessNotebooks;	// 40 = 0x28
    NSMutableDictionary *_sharedNotebooks;	// 48 = 0x30
    long long _pendingSharedNotebooks;	// 56 = 0x38
    NSError *_error;	// 64 = 0x40
    CDUnknownBlockType _completion;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000002d2d54
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long pendingSharedNotebooks; // @synthesize pendingSharedNotebooks=_pendingSharedNotebooks;
@property(retain, nonatomic) NSMutableDictionary *sharedNotebooks; // @synthesize sharedNotebooks=_sharedNotebooks;
@property(retain, nonatomic) NSMutableDictionary *businessNotebooks; // @synthesize businessNotebooks=_businessNotebooks;
@property(retain, nonatomic) NSCountedSet *sharedBusinessNotebookGuids; // @synthesize sharedBusinessNotebookGuids=_sharedBusinessNotebookGuids;
@property(retain, nonatomic) NSMutableDictionary *sharedBusinessNotebooks; // @synthesize sharedBusinessNotebooks=_sharedBusinessNotebooks;
@property(retain, nonatomic) NSMutableArray *linkedPersonalNotebooks; // @synthesize linkedPersonalNotebooks=_linkedPersonalNotebooks;
@property(retain, nonatomic) NSMutableArray *resultNotebooks; // @synthesize resultNotebooks=_resultNotebooks;

@end

