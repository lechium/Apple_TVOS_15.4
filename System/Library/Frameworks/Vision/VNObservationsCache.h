//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface VNObservationsCache : NSObject
{
    NSMapTable *_observationsCache;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001f2c1d
- (id)observationsAcceptedByRequest:(id)arg1 testedKeyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001f29e5
- (void)setObservations:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000001f294e
- (id)observationsForKey:(id)arg1;	// IMP=0x00000000001f2938
- (id)init;	// IMP=0x00000000001f28c0

@end

