//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary, NSPredicate;

__attribute__((visibility("hidden")))
@interface _OSLogEventSerializationMetadata : NSObject
{
    NSMutableDictionary *_indexToStringMapping;	// 8 = 0x8
    NSMutableDictionary *_stringToIndexMapping;	// 16 = 0x10
    unsigned long long _flags;	// 24 = 0x18
    NSPredicate *_filterPredicate;	// 32 = 0x20
    unsigned long long _maxLogEventBatchSize;	// 40 = 0x28
    unsigned long long _serializedEventCount;	// 48 = 0x30
    NSDate *_firstDate;	// 56 = 0x38
    NSDate *_lastDate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000003ced2
@property(retain, nonatomic) NSDate *lastDate; // @synthesize lastDate=_lastDate;
@property(retain, nonatomic) NSDate *firstDate; // @synthesize firstDate=_firstDate;
@property(nonatomic) unsigned long long serializedEventCount; // @synthesize serializedEventCount=_serializedEventCount;
@property(nonatomic) unsigned long long maxLogEventBatchSize; // @synthesize maxLogEventBatchSize=_maxLogEventBatchSize;
@property(retain, nonatomic) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
@property(nonatomic) unsigned long long flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) NSMutableDictionary *stringToIndexMapping; // @synthesize stringToIndexMapping=_stringToIndexMapping;
@property(readonly, nonatomic) NSMutableDictionary *indexToStringMapping; // @synthesize indexToStringMapping=_indexToStringMapping;
- (id)stringForIndex:(id)arg1;	// IMP=0x000000000003cd8c
- (id)indexForString:(id)arg1;	// IMP=0x000000000003cc80
- (id)dataRepresentation;	// IMP=0x000000000003c931
- (id)initWithDataRepresentation:(id)arg1;	// IMP=0x000000000003c4ae
- (id)init;	// IMP=0x000000000003c448

@end
