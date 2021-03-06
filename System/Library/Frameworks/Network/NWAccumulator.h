//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface NWAccumulator : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    struct os_unfair_lock_s _kvo_lock;	// 12 = 0xc
    NSString *_name;	// 16 = 0x10
    NWAccumulator *_lastSnapshot;	// 24 = 0x18
    NSMutableArray *_accumulatedValues;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000b3e0
@property(retain, nonatomic) NSMutableArray *accumulatedValues; // @synthesize accumulatedValues=_accumulatedValues;
@property(retain, nonatomic) NWAccumulator *lastSnapshot; // @synthesize lastSnapshot=_lastSnapshot;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)dictionaryRepresentation;	// IMP=0x000000000000b250
- (id)snapshot;	// IMP=0x000000000000b170
- (void)reset;	// IMP=0x000000000000ad40
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000000a9e0
- (void)registerObserverForKeyPath:(id)arg1 ofObject:(id)arg2 alreadyRegistered:(_Bool)arg3;	// IMP=0x000000000000a5b0
- (void)addAccumulation:(id)arg1 withName:(id)arg2 forKey:(id)arg3 stateCallback:(CDUnknownBlockType)arg4;	// IMP=0x000000000000a160
- (void)addAccumulation:(id)arg1 forKey:(id)arg2 stateCallback:(CDUnknownBlockType)arg3;	// IMP=0x000000000000a140
- (id)accumulatedValueForObject:(id)arg1 andKeyPath:(id)arg2;	// IMP=0x0000000000009ff0
@property(readonly, nonatomic) NSArray *accumulations;
- (id)description;	// IMP=0x0000000000009e90
- (void)dealloc;	// IMP=0x0000000000009bc0
- (id)initWithName:(id)arg1;	// IMP=0x0000000000009a20

@end

