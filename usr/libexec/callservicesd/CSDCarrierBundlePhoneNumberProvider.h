//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSUUID;

@interface CSDCarrierBundlePhoneNumberProvider : NSObject
{
    NSUUID *_uuid;	// 8 = 0x8
    NSArray *_carrierPhoneNumbers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000004aeab
@property(readonly, copy, nonatomic) NSArray *carrierPhoneNumbers; // @synthesize carrierPhoneNumbers=_carrierPhoneNumbers;
@property(readonly, copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (id)initWithUUID:(id)arg1 carrierPhoneNumbers:(id)arg2;	// IMP=0x001000000004adec

@end

