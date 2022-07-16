//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDSCTPNRInfo : NSObject
{
    NSString *_PLMN;	// 8 = 0x8
    NSString *_IMSI;	// 16 = 0x10
    NSString *_PNRPhoneNumber;	// 24 = 0x18
    NSString *_phoneBookNumber;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000ca2fb
@property(retain, nonatomic) NSString *phoneBookNumber; // @synthesize phoneBookNumber=_phoneBookNumber;
@property(retain, nonatomic) NSString *PNRPhoneNumber; // @synthesize PNRPhoneNumber=_PNRPhoneNumber;
@property(retain, nonatomic) NSString *IMSI; // @synthesize IMSI=_IMSI;
@property(retain, nonatomic) NSString *PLMN; // @synthesize PLMN=_PLMN;
- (id)initWithIMSI:(id)arg1 PLMN:(id)arg2 PNRPhoneNumber:(id)arg3 phoneBookNumber:(id)arg4;	// IMP=0x00000000000ca1ad

@end
