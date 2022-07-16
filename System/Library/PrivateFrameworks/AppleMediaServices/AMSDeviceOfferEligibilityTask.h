//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSURLSession, NSString;
@protocol AMSBagProtocol;

__attribute__((visibility("hidden")))
@interface AMSDeviceOfferEligibilityTask : NSObject
{
    id <AMSBagProtocol> _bag;	// 8 = 0x8
    NSString *_deviceGUID;	// 16 = 0x10
    AMSURLSession *_urlSession;	// 24 = 0x18
    NSString *_masterSerialNumber;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000100da8
@property(readonly, nonatomic) NSString *masterSerialNumber; // @synthesize masterSerialNumber=_masterSerialNumber;
@property(retain, nonatomic) AMSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(readonly, nonatomic) NSString *deviceGUID; // @synthesize deviceGUID=_deviceGUID;
@property(retain, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
- (id)_eligibilityRequest;	// IMP=0x0000000000100c00
- (id)_offersDecodedFromResult:(id)arg1;	// IMP=0x000000000010096b
- (id)_accountEligibilityEncoderWithBag:(id)arg1 account:(id)arg2 clientInfo:(id)arg3;	// IMP=0x00000000001008f3
- (id)_accountEligibilityRequestParametersWithIdentifiers:(id)arg1;	// IMP=0x00000000001006b4
- (id)performAccountEligibility:(id)arg1 forOffers:(id)arg2 clientInfo:(id)arg3;	// IMP=0x00000000000fff2d
- (id)_deviceEligibilityEncoderWithBag:(id)arg1 clientInfo:(id)arg2;	// IMP=0x00000000000ffe38
- (id)_deviceEligibilityRequestParametersWithGroups:(id)arg1;	// IMP=0x00000000000ffb51
- (id)performAnonymousDeviceEligibility:(id)arg1 clientInfo:(id)arg2;	// IMP=0x00000000000ff45d
- (id)initWithBag:(id)arg1 deviceGUID:(id)arg2 masterSerialNumber:(id)arg3 urlSession:(id)arg4;	// IMP=0x00000000000ff37d

@end
