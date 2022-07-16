//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSBackingStoreRecord-Protocol.h>
#import <DoNotDisturbServer/NSCopying-Protocol.h>
#import <DoNotDisturbServer/NSMutableCopying-Protocol.h>

@class NSNumber, NSString;

@interface DNDSBehaviorSettingsRecord : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord>
{
    NSNumber *_interruptionBehaviorSetting;	// 8 = 0x8
}

+ (id)newWithDictionaryRepresentation:(id)arg1 context:(id)arg2;	// IMP=0x000000000000905f
+ (id)migrateDictionaryRepresentation:(id)arg1 fromVersionNumber:(unsigned long long)arg2 toVersionNumber:(unsigned long long)arg3;	// IMP=0x0000000000009049
+ (id)_recordWithEncodedInfo:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006d953
- (void).cxx_destruct;	// IMP=0x0000000000009177
@property(readonly, copy, nonatomic) NSNumber *interruptionBehaviorSetting; // @synthesize interruptionBehaviorSetting=_interruptionBehaviorSetting;
- (id)dictionaryRepresentationWithContext:(id)arg1;	// IMP=0x00000000000090f4
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000901b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000009010
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000008e51
@property(readonly) unsigned long long hash;
- (id)_initWithInterruptionBehaviorSetting:(id)arg1;	// IMP=0x0000000000008d7e
- (id)_initWithRecord:(id)arg1;	// IMP=0x0000000000008d28
- (id)init;	// IMP=0x0000000000008d14

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
