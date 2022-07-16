//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/NSCopying-Protocol.h>

@class MPMediaLibrary, MPMediaQueryCriteria, MPMediaQuerySectionInfo, NSMutableArray, NSObject;
@protocol MPMediaLibraryResultSet, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPMediaEntityResultSetArray <NSCopying>
{
    id <MPMediaLibraryResultSet> _resultSet;	// 8 = 0x8
    Class _entityClass;	// 16 = 0x10
    MPMediaLibrary *_library;	// 24 = 0x18
    MPMediaQuerySectionInfo *_sectionInfo;	// 32 = 0x20
    NSMutableArray *_entities;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_entitiesQueue;	// 48 = 0x30
    MPMediaQueryCriteria *_queryCriteria;	// 56 = 0x38
    long long _revision;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000123d65
- (id)sectionInfo;	// IMP=0x0000000000123d54
@property(readonly, nonatomic) id <MPMediaLibraryResultSet> resultSet; // @synthesize resultSet=_resultSet;
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000123c78
- (_Bool)isQueryResultSetInvalidated;	// IMP=0x0000000000123c26
- (unsigned long long)count;	// IMP=0x0000000000123c09
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000123bfe
- (id)initWithResultSet:(id)arg1 queryCriteria:(id)arg2 entityType:(long long)arg3 library:(id)arg4;	// IMP=0x000000000012398e

@end

