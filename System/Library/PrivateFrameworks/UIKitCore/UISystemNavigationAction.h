//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSAction.h>

@class NSArray;

@interface UISystemNavigationAction : BSAction
{
    NSArray *_destinations;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000649134
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;	// IMP=0x00000000006490e1
- (id)keyDescriptionForSetting:(unsigned long long)arg1;	// IMP=0x00000000006490bb
- (long long)UIActionType;	// IMP=0x00000000006490b0
- (id)_destinationContextForResponseDestination:(unsigned long long)arg1;	// IMP=0x0000000000649048
- (_Bool)sendResponseForDestination:(unsigned long long)arg1;	// IMP=0x0000000000648f81
- (id)sceneIdentifierForDestination:(unsigned long long)arg1;	// IMP=0x0000000000648f31
- (id)URLForDestination:(unsigned long long)arg1;	// IMP=0x0000000000648ee1
- (id)bundleIdForDestination:(unsigned long long)arg1;	// IMP=0x0000000000648e91
- (id)titleForDestination:(unsigned long long)arg1;	// IMP=0x0000000000648e41
@property(readonly, nonatomic) NSArray *destinations; // @synthesize destinations=_destinations;
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000648c5f
- (id)initWithDestinationContexts:(id)arg1 forResponseOnQueue:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000064893c

@end

