//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMSymptom, NSError;
@protocol HFCharacteristicOperationContextProviding;

@interface HFCharacteristicValueDisplayError : NSObject
{
    unsigned long long _category;	// 8 = 0x8
    id <HFCharacteristicOperationContextProviding> _contextProvider;	// 16 = 0x10
    NSError *_underlyingError;	// 24 = 0x18
    HMSymptom *_underlyingSymptom;	// 32 = 0x20
}

+ (id)mostEgregiousError:(id)arg1;	// IMP=0x0000000000115793
+ (id)errorWithUnderlyingSymptom:(id)arg1 isFixingCurrently:(_Bool)arg2 contextProvider:(id)arg3;	// IMP=0x00000000001156f5
+ (id)errorWithUnderlyingError:(id)arg1 readTraits:(id)arg2 contextProvider:(id)arg3;	// IMP=0x0000000000115303
- (void).cxx_destruct;	// IMP=0x000000000011625b
@property(retain, nonatomic) HMSymptom *underlyingSymptom; // @synthesize underlyingSymptom=_underlyingSymptom;
@property(copy, nonatomic) NSError *underlyingError; // @synthesize underlyingError=_underlyingError;
@property(retain, nonatomic) id <HFCharacteristicOperationContextProviding> contextProvider; // @synthesize contextProvider=_contextProvider;
@property(nonatomic) unsigned long long category; // @synthesize category=_category;
@property(readonly, nonatomic, getter=isPersistentError) _Bool persistentError;

@end
