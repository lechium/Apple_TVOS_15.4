//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMStreamCKCRDT, BMSyncDatabase, BMSyncPolicy, NSString;

@interface BMDistributedSyncManager : NSObject
{
    BMStreamCKCRDT *_streamCRDT;	// 8 = 0x8
    BMSyncDatabase *_db;	// 16 = 0x10
    NSString *_localSiteIdentifier;	// 24 = 0x18
    BMSyncPolicy *_policy;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000001f8c3
@property(readonly, nonatomic) BMSyncPolicy *policy; // @synthesize policy=_policy;
- (id)deletedLocations;	// IMP=0x001000000001f82b
- (id)atomBatchAfterVectorClock:(id)arg1 version:(unsigned char)arg2 chunker:(id)arg3;	// IMP=0x001000000001f55c
- (void)mergeAtomBatch:(id)arg1 deletedLocations:(id)arg2 sessionContext:(id)arg3;	// IMP=0x001000000001f0cd
- (id)vectorClock;	// IMP=0x001000000001f0b7
- (void)updateVectorClockByUnionWithUnseenSiteIdentifiers:(id)arg1;	// IMP=0x001000000001eb6d
- (id)initWithStreamCRDT:(id)arg1 database:(id)arg2 localSiteIdentifier:(id)arg3 policy:(id)arg4;	// IMP=0x001000000001ea76

@end

