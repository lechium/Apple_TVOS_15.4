//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSNumber;

@interface DMCActivationUtilities : NSObject
{
    _Bool _isReady;	// 8 = 0x8
    _Bool _isActivatedCache;	// 9 = 0x9
    NSNumber *_hrnModeCache;	// 16 = 0x10
    NSDictionary *_activationRecordCache;	// 24 = 0x18
    NSMutableDictionary *_didBecomeReadyCallbacks;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x00000000000033ab
- (void).cxx_destruct;	// IMP=0x0000000000003770
@property(retain, nonatomic) NSMutableDictionary *didBecomeReadyCallbacks; // @synthesize didBecomeReadyCallbacks=_didBecomeReadyCallbacks;
@property(retain, nonatomic) NSDictionary *activationRecordCache; // @synthesize activationRecordCache=_activationRecordCache;
@property(nonatomic) _Bool isActivatedCache; // @synthesize isActivatedCache=_isActivatedCache;
@property(retain, nonatomic) NSNumber *hrnModeCache; // @synthesize hrnModeCache=_hrnModeCache;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
- (void)_clearCache;	// IMP=0x00000000000036fe
- (void)addDidBecomeReadyKey:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003657
- (int)hrnMode;	// IMP=0x000000000000364c
- (id)activationRecord;	// IMP=0x0000000000003644
- (int)activationState;	// IMP=0x0000000000003639
- (id)initPrivate;	// IMP=0x0000000000003440

@end
