//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSOperationQueue, NSRecursiveLock;

@interface ASCWorkspace : NSObject
{
    _Bool _extension;	// 8 = 0x8
    NSMutableDictionary *_pendingResults;	// 16 = 0x10
    NSOperationQueue *;	// 24 = 0x18
    NSRecursiveLock *_stateLock;	// 32 = 0x20
}

+ (void)withSharedWorkspace:(id)arg1 perform:(CDUnknownBlockType)arg2;	// IMP=0x002000000000bca0
+ (id)sharedWorkspace;	// IMP=0x001000000000bbd0
+ (id)log;	// IMP=0x001000000000bb74
- (void).cxx_destruct;	// IMP=0x001000000000c348
@property(readonly, nonatomic) NSRecursiveLock *stateLock; // @synthesize stateLock=_stateLock;
@property(retain, nonatomic) NSOperationQueue *openApplicationOperationQueue; // @synthesize openApplicationOperationQueue=_openApplicationOperationQueue;
@property(readonly) NSMutableDictionary *pendingResults; // @synthesize pendingResults=_pendingResults;
@property(readonly, nonatomic, getter=isExtension) _Bool extension; // @synthesize extension=_extension;
- (id)popPendingResultForOperationName:(id)arg1;	// IMP=0x001000000000c1e7
- (void)enqueueOpenApplicationOperation:(id)arg1 pendingResult:(id)arg2;	// IMP=0x001000000000bfdc
- (id)openSensitiveURL:(id)arg1;	// IMP=0x001000000000beb1
- (id)openURL:(id)arg1 frontBoardOptions:(id)arg2;	// IMP=0x001000000000bd72
- (id)openURL:(id)arg1;	// IMP=0x001000000000bd5e
- (id)_init;	// IMP=0x001000000000bc4a
- (void)openResourceOperation:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x001000000000ba7c
- (void)openResourceOperationDidComplete:(id)arg1;	// IMP=0x001000000000b984
- (id)openProductURL:(id)arg1;	// IMP=0x001000000000b970
- (void)openApplicationWithBundleIdentifier:(id)arg1 configuration:(id)arg2 pendingResult:(id)arg3;	// IMP=0x001000000000b79f
- (void)openApplicationWithBundleIdentifier:(id)arg1 usingOpenResourceOperationWithPayloadURL:(id)arg2 options:(id)arg3 pendingResult:(id)arg4;	// IMP=0x001000000000b62b
- (id)openApplicationWithBundleIdentifier:(id)arg1 payloadURL:(id)arg2;	// IMP=0x001000000000af50

@end

