//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PHPhotoLibrary;

@interface PHBatchPerformChanges : NSObject
{
    PHPhotoLibrary *_library;	// 8 = 0x8
    unsigned long long _itemCount;	// 16 = 0x10
    unsigned long long _batchSize;	// 24 = 0x18
    CDUnknownBlockType _batchBlock;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001a55ac
- (id)_errorByAddingBatchRangeAtIndex:(unsigned long long)arg1 tofError:(id)arg2;	// IMP=0x00000000001a542c
- (_Bool)_addBatchRangeAtIndex:(unsigned long long)arg1 toOutError:(id *)arg2;	// IMP=0x00000000001a53e9
- (unsigned long long)_performBatchAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001a539f
- (struct _NSRange)_batchRangeAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001a52f2
- (_Bool)_hasMoreBatchesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001a52e5
- (void)_performNextBatchAtIndex:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001a51c3
- (void)_performChangesStartingAtIndex:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001a5103
- (void)performChangesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001a5073
- (unsigned long long)_performBatchAtIndexAndWait:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000000001a4fba
- (_Bool)_performChangesAndWaitStartingAtIndex:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000000001a4f31
- (_Bool)performChangesAndWait:(id *)arg1;	// IMP=0x00000000001a4ed1
- (id)initWithPhotoLibrary:(id)arg1 itemCount:(unsigned long long)arg2 batchSize:(unsigned long long)arg3 batchBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000001a4e02

@end

