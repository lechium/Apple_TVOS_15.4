//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLSubHarvesterAvengerExternalAdapter : NSObject
{
    void *_subHarvesterExternal;	// 8 = 0x8
    _Bool _valid;	// 16 = 0x10
}

@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
- (void)didFetchCurrentScanParameters:(id)arg1;	// IMP=0x00100000004cfdc1
- (void)onAdvertisementBufferEmptied;	// IMP=0x00100000004cfdbb
- (void)onAggressiveScanEnded;	// IMP=0x00100000004cfda9
- (void)onAggressiveScanStarted;	// IMP=0x00100000004cfd97
- (void)onAvengerAdvertisement:(id)arg1 address:(id)arg2 advertisementData:(id)arg3 status:(unsigned char)arg4 rssi:(long long)arg5 reserved:(id)arg6 channel:(id)arg7 reconciledInformation:(id)arg8;	// IMP=0x00100000004cfd58
- (id)initWithHarvesterExternal:(void *)arg1;	// IMP=0x00100000004cfd17

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
