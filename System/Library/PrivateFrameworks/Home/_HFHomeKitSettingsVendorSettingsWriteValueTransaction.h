//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMSetting, NAFuture, NSDate, NSError, NSNumber;

@interface _HFHomeKitSettingsVendorSettingsWriteValueTransaction : NSObject
{
    _Bool _started;	// 8 = 0x8
    NAFuture *_settingWriteFuture;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
    NSDate *_transactionStartDate;	// 32 = 0x20
    id _value;	// 40 = 0x28
    id _previousValue;	// 48 = 0x30
    unsigned long long _changeType;	// 56 = 0x38
    HMSetting *_setting;	// 64 = 0x40
    NSNumber *_transactionNumber;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000001a6e6e
@property(readonly, nonatomic) NSNumber *transactionNumber; // @synthesize transactionNumber=_transactionNumber;
@property(readonly, nonatomic) HMSetting *setting; // @synthesize setting=_setting;
@property(readonly, nonatomic) unsigned long long changeType; // @synthesize changeType=_changeType;
@property(readonly, copy, nonatomic) id previousValue; // @synthesize previousValue=_previousValue;
@property(readonly, copy, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) NSDate *transactionStartDate; // @synthesize transactionStartDate=_transactionStartDate;
@property(nonatomic, getter=hasStarted) _Bool started; // @synthesize started=_started;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NAFuture *settingWriteFuture; // @synthesize settingWriteFuture=_settingWriteFuture;
- (id)description;	// IMP=0x00000000001a6da3
- (id)descriptionBuilder;	// IMP=0x00000000001a6933
- (id)init;	// IMP=0x00000000001a6830
- (id)initWithSetting:(id)arg1 previousValue:(id)arg2 value:(id)arg3 changeType:(unsigned long long)arg4;	// IMP=0x00000000001a670f

@end
