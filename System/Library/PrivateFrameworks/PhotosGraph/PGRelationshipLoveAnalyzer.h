//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGRelationshipAnalyzer-Protocol.h>

@class NSString, PGGraphRelationshipProcessor;

@interface PGRelationshipLoveAnalyzer : NSObject <PGRelationshipAnalyzer>
{
    PGGraphRelationshipProcessor *_processor;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003fa90f
- (void)runAnalysisWithProgressBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000003fa2b2
- (id)initWithRelationshipProcessor:(id)arg1;	// IMP=0x00000000003fa24e
@property(readonly, nonatomic) NSString *name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

