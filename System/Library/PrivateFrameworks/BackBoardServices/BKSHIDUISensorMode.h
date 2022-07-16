//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BSDescriptionStreamable-Protocol.h>

@class NSSet, NSString;

@interface BKSHIDUISensorMode : NSObject <BSDescriptionStreamable>
{
    NSString *_reason;	// 8 = 0x8
    long long _versionedPID;	// 16 = 0x10
    unsigned long long _changeSource;	// 24 = 0x18
    int _proximityDetectionMode;	// 32 = 0x20
    NSSet *_multitouchHostStateKeys;	// 40 = 0x28
    _Bool _digitizerEnabled;	// 48 = 0x30
    _Bool _pocketTouchesExpected;	// 49 = 0x31
    _Bool _estimatedProximityMode;	// 50 = 0x32
    _Bool _postEventWithCurrentDetectionMask;	// 51 = 0x33
}

+ (id)_prevailingMode:(id)arg1;	// IMP=0x000000000003fdc9
+ (id)protobufSchema;	// IMP=0x000000000003fda6
+ (id)buildModeForReason:(id)arg1 builder:(CDUnknownBlockType)arg2;	// IMP=0x000000000003fcfe
+ (id)new;	// IMP=0x000000000003fc68
- (void).cxx_destruct;	// IMP=0x000000000003f975
@property(readonly, copy, nonatomic) NSSet *multitouchHostStateKeys; // @synthesize multitouchHostStateKeys=_multitouchHostStateKeys;
- (long long)_comparisonScore;	// IMP=0x000000000003f849
- (_Bool)_settingKeysAllowed:(id)arg1;	// IMP=0x000000000003f7e8
@property(readonly, nonatomic, getter=isRestrictedToSystemShell) _Bool restrictedToSystemShell;
@property(readonly, nonatomic) _Bool estimatedProximityMode;
@property(readonly, nonatomic) long long versionedPID;
@property(readonly, nonatomic) _Bool postEventWithCurrentDetectionMask;
@property(readonly, nonatomic) _Bool alwaysOnGesturesEnabled;
@property(readonly, nonatomic) _Bool coverGestureEnabled;
@property(readonly, nonatomic) _Bool tapToWakeEnabled;
@property(readonly, nonatomic) _Bool pocketTouchesExpected;
@property(readonly, nonatomic) _Bool digitizerEnabled;
@property(readonly, nonatomic) int proximityDetectionMode;
@property(readonly, nonatomic) unsigned long long changeSource;
@property(readonly, nonatomic) NSString *reason;
- (id)didFinishProtobufDecodingWithError:(out id *)arg1;	// IMP=0x000000000003f5ca
- (id)initForProtobufDecoding;	// IMP=0x000000000003f59b
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x000000000003f509
@property(readonly, copy) NSString *description;
- (id)mutableCopy;	// IMP=0x000000000003f4bf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003f491
- (id)_initCopyFrom:(id)arg1;	// IMP=0x000000000003f3cf
- (_Bool)isEffectivelyEqualToMode:(id)arg1;	// IMP=0x000000000003f366
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003f2c6
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003f041
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003edb8
- (id)_init;	// IMP=0x000000000003ebeb
- (id)init;	// IMP=0x000000000003eb4d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
