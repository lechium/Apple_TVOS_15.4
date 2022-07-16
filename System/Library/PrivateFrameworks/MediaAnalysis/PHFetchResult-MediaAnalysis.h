//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHFetchResult.h>

#import <MediaAnalysis/PVFetchResultProtocol-Protocol.h>

@class NSArray;

@interface PHFetchResult (MediaAnalysis) <PVFetchResultProtocol>
- (id)resultsAsSet;	// IMP=0x00000000000841ee
- (id)resultsAsArray;	// IMP=0x00000000000840ea
- (id)allObjects;	// IMP=0x0000000000125d64

// Remaining properties
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) NSArray *fetchedObjects;
@end

