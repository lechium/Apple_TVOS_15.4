//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface AIMInstallEvent
{
    _Bool _deltaPackage;	// 8 = 0x8
}

@property _Bool deltaPackage; // @synthesize deltaPackage=_deltaPackage;
- (id)copyMetricsDictionary;	// IMP=0x00100000000dc55e
- (void)setPackageURL:(id)arg1;	// IMP=0x00100000000dc545
- (id)packageURL;	// IMP=0x00100000000dc52c
@property(retain) NSString *responsibleClientID;
@property(retain) NSNumber *drmMode;

@end

