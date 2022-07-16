//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSURL;

@interface CoreDAVMultiMoveWithFallbackTaskGroup
{
    NSSet *_sourceURLs;	// 88 = 0x58
    NSURL *_destinationURL;	// 96 = 0x60
    int _overwrite;	// 104 = 0x68
    _Bool _useFallback;	// 108 = 0x6c
    NSDictionary *_sourceEntityDataPayloads;	// 112 = 0x70
    NSDictionary *_sourceEntityDataContentTypes;	// 120 = 0x78
    NSDictionary *_sourceEntityETags;	// 128 = 0x80
    NSMutableSet *_destinationURLs;	// 136 = 0x88
    NSMutableDictionary *_destinationEntityETags;	// 144 = 0x90
    NSMutableArray *_outstandingSourceURLsToMove;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x00000000000759bd
@property(retain, nonatomic) NSMutableArray *outstandingSourceURLsToMove; // @synthesize outstandingSourceURLsToMove=_outstandingSourceURLsToMove;
@property(readonly, nonatomic) NSMutableSet *destinationURLs; // @synthesize destinationURLs=_destinationURLs;
@property(readonly, nonatomic) NSMutableDictionary *destinationEntityETags; // @synthesize destinationEntityETags=_destinationEntityETags;
@property(readonly, nonatomic) NSDictionary *sourceEntityETags; // @synthesize sourceEntityETags=_sourceEntityETags;
@property(readonly, nonatomic) NSDictionary *sourceEntityDataContentTypes; // @synthesize sourceEntityDataContentTypes=_sourceEntityDataContentTypes;
@property(readonly, nonatomic) NSDictionary *sourceEntityDataPayloads; // @synthesize sourceEntityDataPayloads=_sourceEntityDataPayloads;
@property(readonly, nonatomic) _Bool useFallback; // @synthesize useFallback=_useFallback;
@property(readonly, nonatomic) int overwrite; // @synthesize overwrite=_overwrite;
@property(readonly, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(readonly, nonatomic) NSSet *sourceURLs; // @synthesize sourceURLs=_sourceURLs;
- (void)_completedPutTask:(id)arg1 sourceURL:(id)arg2;	// IMP=0x0000000000074d49
- (void)_completedMoveTask:(id)arg1 sourceURL:(id)arg2;	// IMP=0x0000000000074257
- (id)_eTagFromTaskResponseHeaders:(id)arg1;	// IMP=0x0000000000074238
- (void)_setTagsForDestinationEntityAtURL:(id)arg1 fromTaskResponseHeaders:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000074056
- (void)processOutstandingTasks;	// IMP=0x0000000000073b8a
- (void)startTaskGroup;	// IMP=0x0000000000073ae4
- (id)filenameFromURL:(id)arg1;	// IMP=0x0000000000073acf
- (id)fullDestinationURLFromSourceURL:(id)arg1;	// IMP=0x0000000000073a45
- (id)description;	// IMP=0x000000000007399f
- (id)initWithSourceURLs:(id)arg1 destinationURL:(id)arg2 overwrite:(_Bool)arg3 useFallback:(_Bool)arg4 sourceEntityDataPayloads:(id)arg5 sourceEntityDataContentTypes:(id)arg6 sourceEntityETags:(id)arg7 accountInfoProvider:(id)arg8 taskManager:(id)arg9;	// IMP=0x0000000000073376

@end

