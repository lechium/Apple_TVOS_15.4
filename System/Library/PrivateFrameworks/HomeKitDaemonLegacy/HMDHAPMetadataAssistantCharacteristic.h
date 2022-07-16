//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSDictionary, NSString;

@interface HMDHAPMetadataAssistantCharacteristic : HMFObject
{
    _Bool _supportsLocalization;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_readHAPCharacteristicName;	// 24 = 0x18
    NSString *_writeHAPCharacteristicName;	// 32 = 0x20
    NSString *_format;	// 40 = 0x28
    NSDictionary *_values;	// 48 = 0x30
    NSDictionary *_outValues;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001f102d
@property(retain, nonatomic) NSDictionary *outValues; // @synthesize outValues=_outValues;
@property(retain, nonatomic) NSDictionary *values; // @synthesize values=_values;
@property(nonatomic) _Bool supportsLocalization; // @synthesize supportsLocalization=_supportsLocalization;
@property(retain, nonatomic) NSString *format; // @synthesize format=_format;
@property(retain, nonatomic) NSString *writeHAPCharacteristicName; // @synthesize writeHAPCharacteristicName=_writeHAPCharacteristicName;
@property(retain, nonatomic) NSString *readHAPCharacteristicName; // @synthesize readHAPCharacteristicName=_readHAPCharacteristicName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;	// IMP=0x00000000001f0e2f
- (id)initWithName:(id)arg1 readHAPCharacteristic:(id)arg2 writeHAPCharacteristic:(id)arg3 format:(id)arg4;	// IMP=0x00000000001f0c7e
- (id)init;	// IMP=0x00000000001f0bd6

@end

