//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSTransaction.h>

@class NSNumber, PBOpenApplicationRequest;

@interface PBOpenAppLegacyGameDialogTransaction : BSTransaction
{
    PBOpenApplicationRequest *_request;	// 8 = 0x8
    NSNumber *_legacyGameValue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000b4070
@property(readonly, nonatomic) NSNumber *legacyGameValue; // @synthesize legacyGameValue=_legacyGameValue;
@property(readonly, nonatomic) PBOpenApplicationRequest *request; // @synthesize request=_request;
- (void)_begin;	// IMP=0x00100000000b33e0
- (id)initWithRequest:(id)arg1;	// IMP=0x00100000000b30e0

@end

