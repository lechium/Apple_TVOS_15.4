//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CLSSceneMatcher : NSObject
{
    NSMutableDictionary *_confidenceThresholdBySceneIdentifierBySceneLabel;	// 8 = 0x8
}

+ (id)sceneNamesWithSceneLabel:(id)arg1;	// IMP=0x00000000000506b3
+ (id)confidenceThresholdTypeBySceneLabel;	// IMP=0x00000000000505cb
+ (id)sceneNamesBySceneLabel;	// IMP=0x00000000000503ab
+ (id)whiteboardSceneNames;	// IMP=0x000000000005039e
+ (id)interestingSceneNames;	// IMP=0x0000000000050391
+ (id)childTeenAndAdultSceneNames;	// IMP=0x0000000000050384
+ (id)babySceneNames;	// IMP=0x0000000000050377
+ (id)babyAndPetSceneNames;	// IMP=0x000000000005036a
+ (id)babyChildTeenAdultAndPetSceneNames;	// IMP=0x000000000005035d
+ (id)junkSceneNamesLegacy;	// IMP=0x0000000000050350
+ (id)junkSceneNames;	// IMP=0x0000000000050343
+ (id)sharedSceneMatcher;	// IMP=0x0000000000050313
- (void).cxx_destruct;	// IMP=0x0000000000050303
- (id)confidenceThresholdBySceneIdentifierForSceneLabel:(id)arg1;	// IMP=0x000000000004fd21

@end
