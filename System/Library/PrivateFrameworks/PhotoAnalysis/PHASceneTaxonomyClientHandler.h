//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoAnalysis/PHAServiceOperationHandling-Protocol.h>
#import <PhotoAnalysis/PLPhotoAnalysisVisionServiceTaxonomyProtocol-Protocol.h>

@class NSString;

@interface PHASceneTaxonomyClientHandler : NSObject <PLPhotoAnalysisVisionServiceTaxonomyProtocol, PHAServiceOperationHandling>
{
}

+ (void)initialize;	// IMP=0x000000000009cb2b
- (id)sceneTaxonomyHash;	// IMP=0x000000000009d8f1
- (void)localizedLabelForSceneIdentifier:(unsigned int)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000009d7a7
- (void)searchResultNodesForSceneIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000009d1bd
- (void)searchResultNodesForSceneClassifications:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000009d05d
- (void)sceneNodesForSceneIdentifiers:(id)arg1 context:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000009cb87
- (void)handleOperation:(id)arg1;	// IMP=0x000000000009cb6b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

