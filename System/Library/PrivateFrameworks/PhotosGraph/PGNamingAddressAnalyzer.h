//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGNamingAnalyzer-Protocol.h>

@class NSString, PGGraphNamingProcessor;

@interface PGNamingAddressAnalyzer : NSObject <PGNamingAnalyzer>
{
    PGGraphNamingProcessor *_processor;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000050906a
- (void)findAddressMatchesFromHomeAddressesByContactIdentifier:(id)arg1 momentNodesByAddressNode:(id)arg2 withProgressBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000508b43
- (void)runAnalysisWithProgressBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000507fee
- (id)initWithNamingProcessor:(id)arg1;	// IMP=0x0000000000507f8a
- (id)name;	// IMP=0x0000000000507f7d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

