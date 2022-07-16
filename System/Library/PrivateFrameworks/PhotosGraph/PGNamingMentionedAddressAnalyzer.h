//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGNamingAnalyzer-Protocol.h>

@class NSString, PGGraphNamingProcessor;

@interface PGNamingMentionedAddressAnalyzer : NSObject <PGNamingAnalyzer>
{
    PGGraphNamingProcessor *_processor;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000146414
- (void)runAnalysisWithProgressBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000145f57
- (id)initWithNamingProcessor:(id)arg1;	// IMP=0x0000000000145ef3
- (id)name;	// IMP=0x0000000000145ee6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
