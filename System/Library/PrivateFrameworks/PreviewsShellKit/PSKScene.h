//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBScene, NSString;

@interface PSKScene : NSObject
{
    FBScene *_scene;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000258e
@property(readonly, nonatomic) FBScene *scene; // @synthesize scene=_scene;
- (void)updateSceneSettings:(id)arg1 with:(id)arg2;	// IMP=0x00000000000024e8
@property(readonly, nonatomic) NSString *sceneIdentifier;
- (id)initWithScene:(id)arg1;	// IMP=0x0000000000002467

@end

