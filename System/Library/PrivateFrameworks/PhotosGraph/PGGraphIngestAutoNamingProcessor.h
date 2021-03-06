//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGGraphIngestProcessor-Protocol.h>

@class NSString, PGGraphBuilder;

@interface PGGraphIngestAutoNamingProcessor : NSObject <PGGraphIngestProcessor>
{
    PGGraphBuilder *_graphBuilder;	// 8 = 0x8
}

+ (_Bool)hasMeNodeAndMeContactInGraph:(id)arg1;	// IMP=0x000000000034ec18
+ (id)_personNodesWithoutContactInGraph:(id)arg1;	// IMP=0x000000000034eb73
+ (id)personNodesToNameInGraph:(id)arg1;	// IMP=0x000000000034eadd
- (void).cxx_destruct;	// IMP=0x000000000034f593
- (void)runWithGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000034eee9
- (_Bool)shouldRunWithGraphUpdate:(id)arg1;	// IMP=0x000000000034ee57
- (void)setGraphBuilder:(id)arg1;	// IMP=0x000000000034ee46

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

