//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DESRecordStore;

@interface TITypingDESRecordWriter : NSObject
{
    DESRecordStore *_typingDataStore;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000004bb8a
@property(retain, nonatomic) DESRecordStore *typingDataStore; // @synthesize typingDataStore=_typingDataStore;
- (void)clearStoredRecordsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000004bab4
- (void)fetchRecords:(CDUnknownBlockType)arg1;	// IMP=0x000000000004b9f9
- (void)storeAlignedSession:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000004b8c2
- (_Bool)shouldRecordToDES;	// IMP=0x000000000004b84c
- (void)storeTypingSession:(id)arg1 containsCP:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000004b620
- (id)init;	// IMP=0x000000000004b5b3

@end

