//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/NSObject-Protocol.h>

@class NSData, NSNumber;
@protocol HAP2AccessoryCharacteristicEncodedData;

@protocol HAP2EncodedCharacteristicEvent <NSObject>
@property(readonly, nonatomic) NSData *encodedContextData;
@property(readonly, nonatomic) id <HAP2AccessoryCharacteristicEncodedData> encodedValueData;
@property(readonly, nonatomic) NSNumber *instanceID;
@end

