//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CALayer;

@interface CAPortalLayer
{
}

+ (_Bool)CA_automaticallyNotifiesObservers:(Class)arg1;	// IMP=0x0000000000100f82
+ (_Bool)_hasRenderLayerSubclass;	// IMP=0x0000000000100f7a
@property _Bool allowsBackdropGroups;
@property _Bool matchesTransform;
@property _Bool matchesPosition;
@property _Bool matchesOpacity;
@property _Bool hidesSourceLayer;
@property unsigned int sourceContextId;
@property unsigned long long sourceLayerRenderId;
@property __weak CALayer *sourceLayer;
- (_Bool)_renderLayerDefinesProperty:(unsigned int)arg1;	// IMP=0x0000000000100a1a
- (void *)_copyRenderLayer:(void *)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int *)arg3;	// IMP=0x000000000010080e
- (void)layerDidBecomeVisible:(_Bool)arg1;	// IMP=0x000000000010078e
- (void)didChangeValueForKey:(id)arg1;	// IMP=0x00000000001006ef

@end

