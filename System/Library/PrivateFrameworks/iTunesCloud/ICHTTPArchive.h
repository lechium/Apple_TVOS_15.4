//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSDictionary, NSMutableArray, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ICHTTPArchive : NSObject
{
    NSMutableArray *_loggedEvents;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_accessQueue;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_flushTimer;	// 24 = 0x18
    NSString *_currentArchiveFileName;	// 32 = 0x20
    NSDateFormatter *_dateFormatter;	// 40 = 0x28
    NSDictionary *_creatorDictionary;	// 48 = 0x30
    NSString *_archiveDirectoryPath;	// 56 = 0x38
    NSMutableArray *_archiveFilePaths;	// 64 = 0x40
    _Bool _hasValidArchiveDirectory;	// 72 = 0x48
}

+ (id)sharedArchive;	// IMP=0x0000000000078ecf
- (void).cxx_destruct;	// IMP=0x0000000000078996
- (void)_pruneOldArchives;	// IMP=0x00000000000788c9
- (void)_loadExistingArchivePaths;	// IMP=0x0000000000078798
- (id)_arrayFromHeaderDictionary:(id)arg1;	// IMP=0x000000000007852a
- (id)_archiveForResponse:(id)arg1 responseData:(id)arg2;	// IMP=0x00000000000781c6
- (id)_archiveForRequest:(id)arg1;	// IMP=0x0000000000077e6b
- (id)_archiveCreator;	// IMP=0x0000000000077d0e
- (void)_onQueueFlush;	// IMP=0x00000000000779ba
- (void)flush;	// IMP=0x000000000007796f
- (void)archiveRequest:(id)arg1 withResponse:(id)arg2 responseData:(id)arg3;	// IMP=0x0000000000077889
- (void)dealloc;	// IMP=0x0000000000077810
- (id)init;	// IMP=0x000000000007763f

@end
