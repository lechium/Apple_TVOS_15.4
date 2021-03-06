//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOServer.h>

@interface GEOExperimentServer : GEOServer
{
}

+ (unsigned long long)launchMode;	// IMP=0x0020000000016189
+ (id)identifier;	// IMP=0x001000000001617c
- (void)fetchAssignUUIDSyncWithMessage:(id)arg1;	// IMP=0x001000000001aa5b
- (void)fetchAssignUUIDWithMessage:(id)arg1;	// IMP=0x001000000001a81f
- (void)fetchAllExperimentsWithMessage:(id)arg1;	// IMP=0x001000000001a50f
- (void)setBucketIdWithMessage:(id)arg1;	// IMP=0x001000000001a477
- (void)setActiveBranchWithMessage:(id)arg1;	// IMP=0x001000000001a350
- (void)setQuerySubstringWithMessage:(id)arg1;	// IMP=0x001000000001a169
- (void)refreshDatasetWithMessage:(id)arg1;	// IMP=0x001000000001a0a3
- (void)updateWithMessage:(id)arg1;	// IMP=0x001000000001a05f
- (id)init;	// IMP=0x0010000000019ff5
- (_Bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3;	// IMP=0x0010000000016194

@end

