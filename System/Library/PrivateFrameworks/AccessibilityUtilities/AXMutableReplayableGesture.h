//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AXMutableReplayableGesture
{
}

- (id)_forcesByFingerIdentifierAtEventIndex:(unsigned long long)arg1;	// IMP=0x000000000009500e
- (id)_pointsByFingerIdentifierAtEventIndex:(unsigned long long)arg1;	// IMP=0x0000000000094fb3
- (void)_removeFingersAtEventIndex:(unsigned long long)arg1;	// IMP=0x0000000000094e94
- (void)_addPoint:(struct CGPoint)arg1 force:(double)arg2 forFingerIdentifier:(id)arg3 atEventIndex:(unsigned long long)arg4;	// IMP=0x0000000000094c29
- (void)_addPoint:(struct CGPoint)arg1 force:(double)arg2 forFingerIdentifier:(id)arg3 atTime:(double)arg4;	// IMP=0x00000000000949db
- (void)addPointsFromReplayableGesture:(id)arg1;	// IMP=0x0000000000094978
- (void)addPointsByFingerIdentifier:(id)arg1 forces:(id)arg2 atTime:(double)arg3;	// IMP=0x00000000000947ef

@end
