//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PVSceneTaxonomy;

@interface VCPSceneTaxonomy : NSObject
{
    PVSceneTaxonomy *_sceneTaxonomy;	// 8 = 0x8
}

+ (id)sharedTaxonomy;	// IMP=0x000000000020bcfd
- (void).cxx_destruct;	// IMP=0x000000000020c172
- (id)sceneIdFromSceneName:(id)arg1;	// IMP=0x000000000020c007
- (id)sceneNameFromSceneId:(unsigned int)arg1;	// IMP=0x000000000020bede
- (id)init;	// IMP=0x000000000020bd52

@end
