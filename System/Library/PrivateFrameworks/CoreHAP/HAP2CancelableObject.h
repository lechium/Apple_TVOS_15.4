//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAP2Cancelable-Protocol.h>

@class HAP2PropertyLock, NSError, NSString;

@interface HAP2CancelableObject <HAP2Cancelable>
{
    HAP2PropertyLock *_propertyLock;	// 8 = 0x8
    NSError *_cancelError;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000f4090
@property(retain, nonatomic) NSError *cancelError; // @synthesize cancelError=_cancelError;
@property(readonly, nonatomic) HAP2PropertyLock *propertyLock; // @synthesize propertyLock=_propertyLock;
- (void)cancelWithError:(id)arg1;	// IMP=0x00000000000f3ea4
- (id)init;	// IMP=0x00000000000f3e30

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

