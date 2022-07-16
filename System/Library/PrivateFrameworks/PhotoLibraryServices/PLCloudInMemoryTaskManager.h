//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PLCloudInMemoryTaskManager : NSObject
{
    NSMutableDictionary *_resourceIDsToDownloadTasks;	// 8 = 0x8
    NSMutableDictionary *_taskIDsToDownloadTasks;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000052a109
- (id)_identifierForResource:(id)arg1;	// IMP=0x000000000052a061
- (void)reportCompletionForResource:(id)arg1 withData:(id)arg2 error:(id)arg3;	// IMP=0x0000000000529e69
- (void)cancelTaskWithTaskIdentifier:(id)arg1;	// IMP=0x0000000000529dfc
- (void)setTransferTask:(id)arg1 forResource:(id)arg2;	// IMP=0x0000000000529c97
- (_Bool)addClientHandlerAndCreateTaskIfNecessaryForResource:(id)arg1 taskIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000529b60
- (void)reset;	// IMP=0x0000000000529ae4
- (id)init;	// IMP=0x0000000000529a6f

@end
