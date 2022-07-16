//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_io, OS_dispatch_queue, __NSCFLocalDownloadFileOpener;

@interface __NSCFLocalDownloadFile : NSObject
{
    struct stat _stat;	// 8 = 0x8
    NSObject<OS_dispatch_io> *_writeIO;	// 152 = 0x98
    NSObject<OS_dispatch_queue> *_workQueue;	// 160 = 0xa0
    _Bool _finished;	// 168 = 0xa8
    NSString *_path;	// 176 = 0xb0
    _Bool _createdPlaceholder;	// 184 = 0xb8
    _Bool _skipUnlink;	// 185 = 0xb9
    _Bool _truncateFile;	// 186 = 0xba
    int _error;	// 188 = 0xbc
    id <__NSCFLocalDownloadFileOpener> _fileProvider;	// 192 = 0xc0
    CDUnknownBlockType _finishCompletion;	// 200 = 0xc8
    NSString *_protectionType;	// 208 = 0xd0
}

@property(retain) NSString *path; // @synthesize path=_path;
- (void)dealloc;	// IMP=0x000000000016790c

@end

