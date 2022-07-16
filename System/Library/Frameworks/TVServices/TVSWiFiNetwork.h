//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TVSWiFiNetwork : NSObject
{
    _Bool _known;	// 8 = 0x8
    _Bool _directed;	// 9 = 0x9
    _Bool _shouldUpdateRSSI;	// 10 = 0xa
    float _signalStrength;	// 12 = 0xc
    float _scaledRSSI;	// 16 = 0x10
    float _rawRSSI;	// 20 = 0x14
    int _noise;	// 24 = 0x18
    float _snr;	// 28 = 0x1c
}

+ (float)_signalStrengthForScaledRSSI:(float)arg1;	// IMP=0x000000000001d049
@property(nonatomic) float snr; // @synthesize snr=_snr;
@property(nonatomic) int noise; // @synthesize noise=_noise;
@property(nonatomic) float rawRSSI; // @synthesize rawRSSI=_rawRSSI;
@property(nonatomic) float scaledRSSI; // @synthesize scaledRSSI=_scaledRSSI;
@property(nonatomic) _Bool shouldUpdateRSSI; // @synthesize shouldUpdateRSSI=_shouldUpdateRSSI;
@property(nonatomic, getter=isDirected) _Bool directed; // @synthesize directed=_directed;
@property(nonatomic, getter=isKnown) _Bool known; // @synthesize known=_known;
@property(readonly, nonatomic) float signalStrength; // @synthesize signalStrength=_signalStrength;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x000000000001cf0d
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;	// IMP=0x000000000001ce72
@property(readonly, nonatomic) _Bool is2_4GHzNetwork;
@property(readonly, nonatomic, getter=isManagedByProfile) _Bool managedByProfile;
@property(readonly, copy, nonatomic) NSString *networkBSSID;
@property(readonly, nonatomic) long long channel;
@property(readonly, nonatomic) unsigned long long securityType;
@property(readonly, copy, nonatomic) NSString *networkName;

@end

