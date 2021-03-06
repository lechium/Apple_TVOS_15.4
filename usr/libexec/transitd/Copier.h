//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSThread, NSURL;

@interface Copier : NSObject
{
    NSURL *_sourceURL;	// 8 = 0x8
    NSURL *_destURL;	// 16 = 0x10
    NSString *_uniqueID;	// 24 = 0x18
    int _continue;	// 32 = 0x20
    NSThread *_thread;	// 40 = 0x28
    id _callbackTarget;	// 48 = 0x30
    SEL _callbackSelector;	// 56 = 0x38
    int _options;	// 64 = 0x40
}

+ (id)copierWithSourceURL:(id)arg1 uniqueIdentifier:(id)arg2 destURL:(id)arg3 callbackTarget:(id)arg4 selector:(SEL)arg5 options:(int)arg6;	// IMP=0x00400000000019cf
+ (id)inboxPath;	// IMP=0x00100000000019c2
+ (id)sharedInstance;	// IMP=0x00100000000019a2
- (void)invalidate;	// IMP=0x002000000000302c
- (void)cancelCopy;	// IMP=0x001000000000301f
- (_Bool)startCopy;	// IMP=0x0010000000002fc3
- (void)_copyThread:(id)arg1;	// IMP=0x0010000000002b22
- (_Bool)destroyTemporaryDirectory:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000002acc
- (id)createTemporaryDirectory:(id *)arg1;	// IMP=0x00100000000029f3
- (id)uniquePathInDirectory:(id)arg1 sourceURL:(id)arg2;	// IMP=0x0010000000002837
- (id)identicalDocumentInDirectory:(id)arg1 sourceURL:(id)arg2 uniqueIdentifier:(id)arg3;	// IMP=0x0010000000002614
- (_Bool)isCandidateFileName:(id)arg1 forSourceFileName:(id)arg2;	// IMP=0x00100000000024c7
- (_Bool)setUniqueIdentifier:(id)arg1 forPath:(id)arg2;	// IMP=0x0010000000002378
- (_Bool)fileName:(id)arg1 inDirectory:(id)arg2 hasUniqueIdentifier:(id)arg3;	// IMP=0x0010000000002184
- (_Bool)createDirectory:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000001fc9
- (_Bool)validateSourceURLForMoving:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000001e76
- (_Bool)validateSourceURLForCopying:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000001b80
- (void)dealloc;	// IMP=0x0010000000001af2
- (id)initWithSourceURL:(id)arg1 uniqueIdentifier:(id)arg2 destURL:(id)arg3 callbackTarget:(id)arg4 selector:(SEL)arg5 options:(int)arg6;	// IMP=0x0010000000001a39

@end

